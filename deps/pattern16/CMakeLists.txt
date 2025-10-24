project(Pattern16 VERSION 3.11.2 LANGUAGES CXX)

add_library(Pattern16 INTERFACE)
target_compile_features(Pattern16 INTERFACE cxx_std_17)
if(NOT MSVC)
    target_compile_options(Pattern16 INTERFACE -mavx2 -mlzcnt -mbmi -mbmi2)
endif()
target_include_directories(Pattern16 INTERFACE .)
