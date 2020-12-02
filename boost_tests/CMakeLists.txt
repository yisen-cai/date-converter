set(Boost_USE_STATIC_LIBS OFF)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

include_directories(${Boost_INCLUDES_DIRS})

add_executable(
        Boost_Tests_run

        tests/test_date_converter.cpp
        tests/test_absolute_date.cpp
)

target_link_libraries(
        Boost_Tests_run

        ${Boost_LIBRARIES}
        DateConverter_lib
)
