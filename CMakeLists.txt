cmake_minimum_required(VERSION 3.19)
project(modern_cpp_course VERSION 0.1.0.0 DESCRIPTION "These are random libraries i made in learning modern C++ on a course taken from udemy.com")

configure_file(${PROJECT_SOURCE_DIR}/include/config.hpp.in ${PROJECT_BINARY_DIR}/include/config.hpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib/shared)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib/static)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(src)