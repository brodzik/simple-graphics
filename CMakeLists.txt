cmake_minimum_required(VERSION 3.0)
project(simple-graphics)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -pedantic")

set(SOURCE_FILES
    thirdparty/fmt/src/format.cc
    thirdparty/fmt/src/posix.cc
    src/main.cpp
)

include_directories(
    thirdparty/fmt/include
    include
)

add_executable(main ${SOURCE_FILES})

enable_testing()

add_library(test_main OBJECT test/test_main.cpp)
target_include_directories(test_main PUBLIC thirdparty/doctest/include)

macro(add_unit_test testname)
    add_executable(${testname} test/${testname}.cpp $<TARGET_OBJECTS:test_main>)
    target_include_directories(${testname} PUBLIC thirdparty/doctest/include)
    add_test(NAME ${testname} COMMAND ${testname})
endmacro(add_unit_test)

add_unit_test(test_1)
