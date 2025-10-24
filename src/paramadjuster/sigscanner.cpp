#include "sigscanner.h"

#include <Pattern16.h>
#include <stdexcept>
#include <windows.h>

namespace paramadjuster {

SigScanner::SigScanner(const wchar_t *moduleName) {
    const HMODULE hModule = GetModuleHandleW(moduleName);
    if (hModule == NULL) {
        throw std::runtime_error("Failed to get module handle");
    }
    PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule;
    if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE) {
        throw std::runtime_error("Invalid DOS header");
    }
    const PIMAGE_NT_HEADERS ntHeader = (const PIMAGE_NT_HEADERS64)((DWORD_PTR)dosHeader + dosHeader->e_lfanew);
    if (ntHeader->Signature != IMAGE_NT_SIGNATURE) {
        throw std::runtime_error("Invalid NT header");
    }
    moduleBase_ = (void*)hModule;
    moduleSize_ = ntHeader->OptionalHeader.SizeOfImage;
}

void *SigScanner::scan(const char *signature) {
    return Pattern16::scan(moduleBase_, moduleSize_, signature);
}

}
