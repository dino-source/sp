cmake_minimum_required(VERSION 3.22.0)
project(sp VERSION 0.1.0 LANGUAGES CXX)

include(cmake/UpdateSubmodules.cmake)
include(CTest)
enable_testing()

add_executable(sp main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# Add subdirectories with code
add_subdirectory(external)
add_subdirectory(tests)
add_subdirectory(helper_library)
add_subdirectory(primer)

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_directories(${PROJECT_NAME} PRIVATE src)
target_link_libraries(${PROJECT_NAME} hw_framework)

target_compile_options(sp PRIVATE
    -g
    -pthread
    -Wextra
    -Wall
    -Wpedantic
    -Wconversion
    -Wshadow
    -Wunreachable-code
    -Wunused
    -Wold-style-cast
    -Wimplicit-fallthrough
    -Wno-unused-parameter
    -Wmissing-noreturn
    -Wnoexcept
    -fdiagnostics-color=always
)
target_compile_features(sp PRIVATE cxx_std_20)