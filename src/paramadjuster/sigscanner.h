#pragma once

#include <cstddef>

namespace paramadjuster {

class SigScanner {
public:
    SigScanner(const wchar_t *moduleName);
    void *scan(const char *signature);

private:
    void *moduleBase_;
    size_t moduleSize_;
};

}
