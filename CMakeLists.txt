cmake_minimum_required(VERSION 3.22.0)
project(sp VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

add_executable(sp main.cpp)

set_property(TARGET sp PROPERTY CXX_STANDARD 20)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
