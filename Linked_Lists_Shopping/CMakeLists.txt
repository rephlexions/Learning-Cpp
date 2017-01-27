cmake_minimum_required(VERSION 3.6)
project(Linked_Lists_Shopping)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp product.h product.cpp productlist.h productlist.cpp)
add_executable(Linked_Lists_Shopping ${SOURCE_FILES})