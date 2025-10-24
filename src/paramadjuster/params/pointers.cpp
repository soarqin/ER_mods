/*
 * Copyright (C) 2024,2025, Soar Qin<soarchin@gmail.com>

 * Use of this source code is governed by an MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT.
 */

#include "pointers.h"

namespace paramadjuster::params {

Pointers gPointers;

Pointers::Pointers() : sigScanner_(nullptr) { }

uintptr_t Pointers::scanIndirectPointer(const char *pattern, size_t offset) {
    void *addr = sigScanner_.scan(pattern);
    if (addr == nullptr) {
        return 0;
    }
    return (uintptr_t)addr + *(uint32_t*)((uintptr_t)addr + offset) + offset + 4;
}


void Pointers::init() {
    if (initialized_) return;
    csRegulationManager_ = scanIndirectPointer("48 8B 0D ?? ?? ?? ?? 48 85 C9 74 0B 4C 8B C0 48 8B D7", 3);
    initialized_ = true;
}

}
