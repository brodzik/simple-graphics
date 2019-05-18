cmake_minimum_required(VERSION 3.7.2)
project(simple-graphics)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -pedantic")

set(SOURCE_FILES
    thirdparty/fmt/src/format.cc
    thirdparty/fmt/src/posix.cc
)

include_directories(
    thirdparty/fmt/include
    include
)

enable_testing()

add_library(test_main OBJECT test/test_main.cpp ${SOURCE_FILES})

macro(add_unit_test testname)
    add_executable(${testname} test/${testname}.cpp $<TARGET_OBJECTS:test_main>)
    add_test(NAME ${testname} COMMAND ${testname})
endmacro(add_unit_test)

add_unit_test(test_1)
add_unit_test(test_2)
add_unit_test(test_3)
add_unit_test(test_4)
