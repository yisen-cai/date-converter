cmake_minimum_required(VERSION 3.14)
project(testing_test)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

add_executable(DateConverter_run ${SOURCE_FILES})

include_directories(date_converter_lib)

add_subdirectory(date_converter_lib)
add_subdirectory(google_tests)
add_subdirectory(boost_tests)
add_subdirectory(catch_tests)
add_subdirectory(doctest_tests)

target_link_libraries(DateConverter_run DateConverter_lib)

