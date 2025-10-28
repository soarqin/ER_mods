#pragma once

#include "param.h"

#include "global.h"

#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>
#include <lazycsv.hpp>

#include <windows.h>
#include <memory>

namespace paramadjuster::params {

template<typename T>
struct ParamTableIndexer: ParamTableIndexerBase {
    ParamTableIndexer(sol::state *state, const wchar_t *tableName) : ParamTableIndexerBase(state, tableName) {
        for (int i = 0; i < table_->count; i++) {
            const ParamEntryOffset *entry = &table_->entries[i];
            auto *ptr = (T*)((uintptr_t)table_ + entry->offset);
            paramIdMap_[entry->paramId] = ptr;
        }
    }
    T *at(int index) {
        const ParamEntryOffset *entry = &table_->entries[index];
        return (T*)((uintptr_t)table_ + entry->offset);
    }
    T *get(uint64_t paramId) {
        auto it = paramIdMap_.find(paramId);
        if (it == paramIdMap_.end()) {
            return nullptr;
        }
        return it->second;
    }

protected:
    void exportToCsvImpl(const std::wstring &csvPath) override;

private:
    std::unordered_map<uint64_t, T*> paramIdMap_;
};
        
template<typename U>
static void cStrToFixedStr(U &dst, const std::string &src) {
    constexpr size_t capacity = sizeof(dst) / sizeof(dst[0]);
    lstrcpynA(dst, src.c_str(), capacity);
    dst[capacity - 1] = '\0';
}

template<typename U>
static void cStrToFixedStrW(U &dst, const std::wstring &src) {
    constexpr size_t capacity = sizeof(dst) / sizeof(dst[0]);
    lstrcpynW(dst, src.c_str(), capacity);
    dst[capacity - 1] = '\0';
}

}
