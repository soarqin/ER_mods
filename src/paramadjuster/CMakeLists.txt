file(GLOB_RECURSE PARAM_TYPES_HEADERS "params/defs/*.h")
file(GLOB_RECURSE PARAM_BINDINGS_SOURCES "params/bindings/*.cpp")

add_project(ParamAdjuster SHARED
    dllmain.cpp
    sigscanner.cpp sigscanner.h

    params/param.cpp params/param.h
    params/pointers.cpp params/pointers.h
    params/wstring.cpp params/wstring.h
    params/paramdefs.h
    params/luabindings.h params/luabindings.cpp
    ${PARAM_TYPES_HEADERS}
    ${PARAM_BINDINGS_SOURCES}

    FOLDER mods
    NO_PREFIX
    LANGUAGES CXX)
target_include_directories(ParamAdjuster PRIVATE .)
target_link_libraries(ParamAdjuster PRIVATE sol3 DllProxy Pattern16 Shlwapi)
