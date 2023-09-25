cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 20)

include_directories(../include)
add_library(hw_framework hw_framework.cpp)