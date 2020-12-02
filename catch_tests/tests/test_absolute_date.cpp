//
// Created by 蔡宜身 on 2020/12/2.
//

#define CATCH_CONFIG_MAIN
#include "Gregorian.h"
#include "catch.hpp"

TEST_CASE("ExampleDate", "[AbsoluteDateTests]")
{ // 12/2/2020 -> 737761
    GregorianDate gregDate;
    gregDate.SetMonth(12);
    gregDate.SetDay(2);
    gregDate.SetYear(2020);
    CHECK(gregDate.getAbsoluteDate() == 737761);
}

TEST_CASE("IncorrectDate", "[AbsoluteDateTests]")
{ // 12/0/2020 -> 0
    GregorianDate gregDate;
    gregDate.SetMonth(12);
    gregDate.SetDay(0);
    gregDate.SetYear(2020);
    REQUIRE(gregDate.getAbsoluteDate() == 0);
}
