cmake_minimum_required(VERSION 3.6)
project(sequencial_search)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(sequencial_search ${SOURCE_FILES})