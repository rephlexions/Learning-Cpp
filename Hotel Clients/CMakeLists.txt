cmake_minimum_required(VERSION 3.6)
project(Hotel_esame_vers_0_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp hotel_header.h hotel_source.cpp)
add_executable(Hotel_esame_vers_0_2 ${SOURCE_FILES})