
add_executable(
        Catch_tests_run

        tests/test_absolute_date.cpp
        tests/test_date_converter.cpp
)

target_include_directories(
        Catch_tests_run
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
        Catch_tests_run

        DateConverter_lib
)