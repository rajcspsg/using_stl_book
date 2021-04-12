cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(chapter-01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(templates templates.hpp templates.cpp)

add_executable(templates_test templates_test.cpp catch.hpp)
target_link_libraries(templates_test templates)

enable_testing()

add_test(NAME catch_template_test COMMAND $<TARGET_FILE:templates_test> --success)
