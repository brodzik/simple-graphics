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
