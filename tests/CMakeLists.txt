# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)
    add_executable(my_test test_googletest.cpp)
    target_link_libraries(my_test PRIVATE GTest::gtest_main)

    target_compile_options(my_test PRIVATE
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
    target_compile_features(my_test PRIVATE cxx_std_20)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(my_test)
endif()