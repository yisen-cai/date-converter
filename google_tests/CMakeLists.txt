project(Google_tests)

add_subdirectory(lib)

include_directories(
        ${gtest_SOURCE_DIR}/include,
        ${gtest_SOURCE_DIR}
)

add_executable(
        Google_Tests_run

        tests/test_absolute_date.cpp
        tests/test_date_converter.cpp
)

target_link_libraries(
        Google_Tests_run

        gtest
        gtest_main
        DateConverter_lib
)