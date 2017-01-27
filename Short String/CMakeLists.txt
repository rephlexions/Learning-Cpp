cmake_minimum_required(VERSION 3.6)
project(shortString_esame)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp shortStr_header.h shortStr_source.cpp)
add_executable(shortString_esame ${SOURCE_FILES})