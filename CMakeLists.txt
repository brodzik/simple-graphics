cmake_minimum_required(VERSION 3.7.2)
project(simple-graphics)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

set(SOURCE_FILES
    thirdparty/fmt/src/format.cc
    thirdparty/fmt/src/posix.cc
)

include_directories(
    thirdparty/fmt/include
    include
)

enable_testing()

macro(add_unit_test testname)
    add_executable(${testname} test/${testname}.cpp ${SOURCE_FILES})
    target_include_directories(${testname} PUBLIC thirdparty/doctest/include)
    add_test(NAME ${testname} COMMAND ${testname})
endmacro(add_unit_test)

add_unit_test(test_1)
