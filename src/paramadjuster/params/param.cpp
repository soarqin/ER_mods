/*
 * Copyright (C) 2024,2025, Soar Qin<soarchin@gmail.com>

 * Use of this source code is governed by an MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT.
 */

#include "param.h"
#include "wstring.h"
#include "pointers.h"
#include "paramdefs.h"
#include "global.h"

#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>
#include <lazycsv.hpp>

#include <filesystem>
#include <sstream>
#include <windows.h>

namespace paramadjuster::params {

#pragma pack(push, 8)

struct ParamData {
    uintptr_t vtable[2];
    WstringImpl name;
    uintptr_t unk1[9];
    struct {
        uintptr_t unk0[16];
        ParamTable *data;
    } *path;
};

struct CSRegulationManager {
    uintptr_t vtable[3];
    ParamData **start;
    ParamData **end;
    uintptr_t unk0;
    uintptr_t unk1;
    uintptr_t unk2;
    int loaded;
};

#pragma pack(pop)

ParamMgr gParamMgr;

static void runAllLuaScripts(sol::state *state, const wchar_t *scriptPath) {
    for (const auto &dir_entry: std::filesystem::directory_iterator{std::filesystem::path(gModulePath) / scriptPath}) {
        if (dir_entry.is_regular_file() && dir_entry.path().extension() == L".lua") {
            fwprintf(stderr, L"Run lua script: %ls... ", dir_entry.path().wstring().c_str());
            if (sol::protected_function_result result = state->safe_script_file(dir_entry.path().string(), sol::script_pass_on_error); !result.valid()) {
                sol::error error = result;
                fwprintf(stderr, L"Error: %hs\n", error.what());
            } else {
                fwprintf(stderr, L"Done.\n");
            }
        }
    }
}

extern void registerAll(sol::state *state, sol::table &paramsTable);

bool ParamMgr::loadTable() {
    paramTypes_.clear();
    gPointers.init();
    auto csRegulationManager = gPointers.csRegulationManager();
    if (!csRegulationManager) {
        return false;
    }
    const CSRegulationManager *regMan;
    while (1) {
        regMan = (const CSRegulationManager*)*(uintptr_t*)csRegulationManager;
        if (regMan != nullptr && regMan->start != nullptr && regMan->end != nullptr && regMan->loaded) break;
        Sleep(100);
    }
    for (ParamData **current = regMan->start; current < regMan->end; current++) {
        const ParamData *param = *current;
        const auto *name = wstringImplStr(&param->name);
        paramTypes_.emplace(name, ParamType { name, param->path->data });
    }

    state_ = new sol::state();
    state_->open_libraries();
    auto paramsTable = (*state_)["Params"].get_or_create<sol::table>();

    registerAll(state_, paramsTable);
    runAllLuaScripts(state_, L"scripts");
    return true;
}

void ParamMgr::unloadTable() {
    paramTypes_.clear();
    if (state_) {
        delete state_;
        state_ = nullptr;
    }
}

ParamTable *ParamMgr::findTable(const wchar_t *name) {
    if (paramTypes_.empty()) {
        if (!loadTable()) return nullptr;
    }
    auto it = paramTypes_.find(name);
    if (it == paramTypes_.end()) {
        return nullptr;
    }
    return it->second.param;
}

const ParamTable *ParamMgr::findTable(const wchar_t *name) const {
    return const_cast<ParamMgr*>(this)->findTable(name);
}

ParamTableIndexerBase::ParamTableIndexerBase(sol::state *state, const wchar_t *tableName) : state_(state) {
    table_ = gParamMgr.findTable(tableName);
    tableName_ = ucs2toutf8(tableName);
}

void ParamTableIndexerBase::setFieldNames(const std::initializer_list<std::pair<const char *, bool>> &fieldNames) {
    fieldNames_.clear();
    for (const auto &p : fieldNames) {
        fieldNames_[p.first] = p.second;
    }
}

uint64_t ParamTableIndexerBase::paramId(int index) const {
    const ParamEntryOffset *entry = &table_->entries[index];
    return entry->paramId;
}

uint16_t ParamTableIndexerBase::count() const {
    return table_->count;
}

void ParamTableIndexerBase::importFromCsv(const std::wstring &csvPath) {
    if (csvPath.empty()) return;
    auto isAbolutePath = csvPath.find(L':') != std::wstring::npos || csvPath[0] == L'\\' || csvPath[0] == L'/';
    auto fullPath = (isAbolutePath ? std::filesystem::path(csvPath) : (std::filesystem::path(gModulePath) / csvPath)).wstring();
    fwprintf(stderr, L"Importing from CSV: %ls... ", fullPath.c_str());
    lazycsv::parser parser { fullPath };
    std::vector<std::pair<std::string, bool>> headers;
    auto headerRow = parser.header();
    for (const auto &cell : headerRow) {
        auto it = fieldNames_.find(cell.unescaped());
        if (it == fieldNames_.end()) {
            headers.emplace_back("", false);
            continue;
        }
        headers.emplace_back(it->first, it->second);
    }
    auto cnt = headers.size();
    for (const auto &row : parser) {
        size_t index = 0;
        std::ostringstream oss;
        oss << "p=Params." << this->tableName_ << "()\n";
        for (const auto &cell: row) {
            if (index == 0) {
                auto uid = std::stoull(cell.unescaped());
                oss << "row=p:get(" << uid << ")\n";
                oss << "if row then\n";
                index++;
                continue;
            }
            const auto &p = headers[index];
            if (p.first.empty()) {
                index++;
                continue;
            }
            if (p.second) {
                oss << "row." << p.first << "=\"" << tryEscape(cell.unescaped()) << "\"\n";
            } else {
                oss << "row." << p.first << "=" << cell.unescaped() << "\n";
            }
            if (++index >= cnt) break;
        }
        oss << "end\n";
        if (sol::protected_function_result result = state_->safe_script(oss.str(), sol::script_pass_on_error); !result.valid()) {
            sol::error error = result;
            fwprintf(stderr, L"Error: %hs\n", error.what());
            return;
        }
    }
    fwprintf(stderr, L"Done.\n");
}

void ParamTableIndexerBase::exportToCsv(const std::wstring &csvPath) {
    auto isAbolutePath = csvPath.find(L':') != std::wstring::npos || csvPath[0] == L'\\' || csvPath[0] == L'/';
    auto fullPath = (isAbolutePath ? std::filesystem::path(csvPath) : (std::filesystem::path(gModulePath) / csvPath)).wstring();
    fwprintf(stderr, L"Exporting to CSV: %ls... ", fullPath.c_str());
    exportToCsvImpl(fullPath);
    fwprintf(stderr, L"Done.\n");
}

std::string ucs2toutf8(const std::wstring_view &str) {
    std::string utf8;
    int len = WideCharToMultiByte(CP_UTF8, 0, str.data(), str.size(), nullptr, 0, nullptr, nullptr);
    if (len > 0) {
        utf8.resize(len);
        WideCharToMultiByte(CP_UTF8, 0, str.data(), str.size(), utf8.data(), len, nullptr, nullptr);
    }
    return utf8;
}

std::wstring utf8toucs2(const std::string_view &str) {
    std::wstring wstr;
    int len = MultiByteToWideChar(CP_UTF8, 0, str.data(), str.size(), nullptr, 0);
    if (len > 0) {
        wstr.resize(len);
        MultiByteToWideChar(CP_UTF8, 0, str.data(), str.size(), wstr.data(), len);
    }
    return wstr;
}

std::string tryEscape(std::string_view str) {
    std::string result;
    result.reserve(str.size());
    for (auto &c : str) {
        if (c == '"') {
            result.push_back('\\');
        }
        result.push_back(c);
    }
    return result;
}

} // namespace paramadjuster::params
