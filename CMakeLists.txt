cmake_minimum_required(VERSION 3.1.0)
project(add_unit_test VERSION 0.1.0)

set(GTEST_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/3rdparty/gtest/include/)
set(GMOCK_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/3rdparty/gtest/include/)
set(GTEST_LINK_DIR ${CMAKE_SOURCE_DIR}/3rdparty/gtest/lib/)

include_directories(${GTEST_INCLUDE_DIR})
include_directories(${GMOCK_INCLUDE_DIR})
include_directories(include)



add_library(add src/add.cpp)

add_executable(add_unit_test add_unit_test.cpp)
target_link_libraries(add_unit_test ${CMAKE_SOURCE_DIR}/build/libadd.a  ${GTEST_LINK_DIR}/libgtest.a pthread)
