project(demo)
cmake_minimum_required(VERSION 3.16)

add_library(lib lib/hello_world.h lib/hello_world.cpp)
target_include_directories(lib PUBLIC lib)

add_executable(tests tests/catch.hpp tests/tests.cpp)
target_link_libraries(tests lib)
