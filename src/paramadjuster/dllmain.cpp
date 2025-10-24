#include "global.h"

#include "params/param.h"

#include <winhttp_proxy.h>
#include <windows.h>
#include <shlwapi.h>

DWORD WINAPI init(LPVOID lpParam);

wchar_t gModulePath[1024];

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    UNREFERENCED_PARAMETER(lpReserved);

    static HANDLE hThread = nullptr;

    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            load_winhttp_proxy();
            DisableThreadLibraryCalls(hModule);
            GetModuleFileNameW(hModule, gModulePath, sizeof(gModulePath) / sizeof(wchar_t));
            PathRemoveFileSpecW(gModulePath);
            hThread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)init, (LPVOID)hModule, 0, nullptr);
            break;
        case DLL_PROCESS_DETACH:
            if (hThread) {
                TerminateThread(hThread, 0);
                WaitForSingleObject(hThread, INFINITE);
                CloseHandle(hThread);
                hThread = nullptr;
            }
            break;
        default:
            break;
    }

    return TRUE;
}

DWORD WINAPI init(LPVOID lpParam) {
    UNREFERENCED_PARAMETER(lpParam);
    Sleep(1000);
    paramadjuster::params::gParamMgr.loadTable();
    return 0;
}
