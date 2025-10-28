cmake_minimum_required(VERSION 3.8...3.20)

add_project(lazycsv INTERFACE FOLDER deps LANGUAGES CXX)
target_include_directories(lazycsv INTERFACE include/)
target_sources(lazycsv INTERFACE include/lazycsv.hpp)
