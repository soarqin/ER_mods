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

#include <filesystem>
#include <fstream>
#include <sstream>
#include <memory>
#include <sol/sol.hpp>
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
            state->script_file(dir_entry.path().string());
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

} // namespace paramadjuster::params
