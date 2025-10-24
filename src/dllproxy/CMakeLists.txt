add_project(DllProxy STATIC
    winhttp_proxy.c winhttp_proxy.h
    FOLDER proxy LANGUAGES CXX)
target_include_directories(DllProxy PUBLIC .)
target_sources(DllProxy PUBLIC winhttp_proxy.def)
