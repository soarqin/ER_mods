/*
 * Copyright (C) 2024,2025, Soar Qin<soarchin@gmail.com>

 * Use of this source code is governed by an MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT.
 */

#pragma once

#include "sigscanner.h"
#include <cstdint>

namespace paramadjuster::params {

class Pointers {
public:
    Pointers();
    void init();
    [[nodiscard]] uintptr_t csRegulationManager() const { return csRegulationManager_; }

private:
    uintptr_t scanIndirectPointer(const char *pattern, size_t offset);

private:
    bool initialized_ = false;
    SigScanner sigScanner_;
    uintptr_t csRegulationManager_ = 0;
};

extern Pointers gPointers;

}
