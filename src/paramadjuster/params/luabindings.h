#include "param.h"

#include <sol/sol.hpp>
#include <windows.h>
#include <unordered_map>
#include <memory>

namespace paramadjuster::params {

template<typename T>
struct ParamTableIndexer {
    ParamTableIndexer(ParamTable *table): table_(table) {
        for (int i = 0; i < table_->count; i++) {
            const ParamEntryOffset *entry = &table_->entries[i];
            auto *ptr = (T*)((uintptr_t)table_ + entry->offset);
            paramIdMap_[entry->paramId] = ptr;
        }
    }
    uint64_t paramId(int index) const {
        const ParamEntryOffset *entry = &table_->entries[index];
        return entry->paramId;
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
    uint16_t count() const {
        return table_->count;
    }
private:
    ParamTable *table_;
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
