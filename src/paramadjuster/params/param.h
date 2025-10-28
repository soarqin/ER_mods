/*
 * Copyright (C) 2024,2025, Soar Qin<soarchin@gmail.com>

 * Use of this source code is governed by an MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT.
 */

#pragma once

#include <sol/sol.hpp>

#include <unordered_map>
#include <string>
#include <string_view>
#include <cstdint>

namespace sol {
	class state;
}

namespace paramadjuster::params {

#pragma pack(push, 8)

struct ParamEntryOffset {
    uint64_t paramId;
    intptr_t offset;
    uint64_t unk0;
};

struct ParamTable {
    uintptr_t vtable;
    uint16_t unk0;
    uint16_t count;
    uint16_t padding0[2];
    uintptr_t unk1[6];
    ParamEntryOffset entries[1];
};

#pragma pack(pop)

#define paramTableFindId(t, id, tp) { \
    const ::er::params::ParamTable *paramTable = (const ::er::params::ParamTable*)t; \
    uint16_t count = paramTable->count; \
    for (uint16_t i = 0; i < count; i++) { \
        const ::er::params::ParamEntryOffset *entry = &paramTable->entries[i]; \
        if (entry->paramId == id) { \
            return (tp*)((uintptr_t)t + entry->offset); \
        } \
    } \
}

#define paramTableIterateBegin(t, tp, var) do { \
    const ::er::params::ParamTable *paramTable = (const ::er::params::ParamTable*)t; \
    uint16_t count = paramTable->count; \
    for (uint16_t i = 0; i < count; i++) { \
        const ::er::params::ParamEntryOffset *entry = &paramTable->entries[i]; \
        tp *var = (tp*)((uintptr_t)t + entry->offset); \
        if (!var) { \
            continue; \
        }

#define paramTableIterateEnd() } } while(0)

class ParamMgr {
public:
    bool loadTable();
    void unloadTable();
    ParamTable *findTable(const wchar_t *name);
    const ParamTable *findTable(const wchar_t *name) const;

private:
    struct ParamType {
        const wchar_t *name;
        ParamTable *param;
    };

    std::unordered_map<std::wstring, ParamType> paramTypes_;
    sol::state *state_ = nullptr;
};

struct ParamTableIndexerBase {
    ParamTableIndexerBase(sol::state *state, const wchar_t *tableName);

    void setFieldNames(const std::initializer_list<std::pair<const char *, bool>> &fieldNames);
    uint64_t paramId(int index) const;
    uint16_t count() const;
    void importFromCsv(const std::wstring &csvPath);
    void exportToCsv(const std::wstring &csvPath);

protected:
    virtual void exportToCsvImpl(const std::wstring &csvPath) = 0;

protected:
    sol::state *state_;
    ParamTable *table_;
    std::string tableName_;
    std::unordered_map<std::string, bool> fieldNames_;
};

extern std::string ucs2toutf8(const std::wstring_view &str);
extern std::wstring utf8toucs2(const std::string_view &str);
extern std::string tryEscape(std::string_view str);

extern ParamMgr gParamMgr;

}
