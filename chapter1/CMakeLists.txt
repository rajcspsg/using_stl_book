cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(chapter-01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(templates STATIC src/ArrTemplates.hpp)
set_target_properties(templates PROPERTIES LINKER_LANGUAGE CXX)

add_executable(templates_test tests/myarray/ArrTemplatesTest.cpp)
target_link_libraries(templates_test templates)

enable_testing()

add_test(NAME catch_template_test COMMAND $<TARGET_FILE:templates_test> --success)

include(GoogleTest)
add_executable(ArrayGtest tests/myarray/ArrTemplatesGtest.cpp src/StreamIterator.cpp)
find_package(GTest)
target_link_libraries(ArrayGtest GTest::GTest GTest::Main)
gtest_discover_tests(ArrayGtest)

add_executable(IteratorTest tests/iterators/iterators.cpp)
target_link_libraries(IteratorTest GTest::GTest GTest::Main)
gtest_discover_tests(IteratorTest)

add_executable(StreamIterator src/StreamIterator.cpp)

