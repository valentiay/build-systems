cmake_minimum_required(VERSION 3.10)
project(build_systems)

set(CMAKE_CXX_STANDARD 11)

include_directories("${CMAKE_SOURCE_DIR}")

add_subdirectory(A)

add_executable(B/main.cpp B/main.h)

target_link_libraries(build_systems PUBLIC lib)