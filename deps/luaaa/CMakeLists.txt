add_project(luaaa INTERFACE FOLDER deps LANGUAGES CXX)
target_sources(luaaa PRIVATE luaaa.hpp)
target_include_directories(luaaa INTERFACE .)
target_link_libraries(luaaa INTERFACE liblua_static)
