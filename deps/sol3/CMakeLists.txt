cmake_minimum_required(VERSION 3.26.0)

project(sol3 LANGUAGES CXX)

add_library(sol3 INTERFACE)
target_compile_features(sol3 INTERFACE cxx_std_17)
target_include_directories(sol3 INTERFACE include)
targeT_link_libraries(sol3 INTERFACE liblua_static)
