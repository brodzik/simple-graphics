####################################################################################################
# Project 
####################################################################################################
cmake_minimum_required(VERSION 3.7.2)

set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)

mark_as_advanced(VERSION_MAJOR VERSION_MINOR VERSION_PATCH)

project(simple-graphics VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -pedantic")

set(SOURCE_FILES
    thirdparty/fmt/src/format.cc
    thirdparty/fmt/src/posix.cc
)

include_directories(
    thirdparty/fmt/include
    include
)

####################################################################################################
# Documentation 
####################################################################################################
find_package(Doxygen)
option(BUILD_DOCS "Create and install the HTML based API documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCS)
    if(NOT DOXYGEN_FOUND)
        message(FATAL_ERROR "Doxygen is needed to build the documentation")
    endif()

    set(DOXYFILE_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYFILE ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    configure_file(${DOXYFILE_IN} ${DOXYFILE} @ONLY)

    add_custom_target(docs
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYFILE}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM
    )
endif()

####################################################################################################
# Testing
####################################################################################################
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
add_unit_test(test_5)
