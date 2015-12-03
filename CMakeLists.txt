cmake_minimum_required(VERSION 3.3)
project(c_unit_juanzi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c_unit_juanzi ${SOURCE_FILES})