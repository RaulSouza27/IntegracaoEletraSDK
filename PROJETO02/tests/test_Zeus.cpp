#include "catch.hpp"
#include "Zeus.h"

TEST_CASE("test construtor zeus")
{
    Zeus medidor("9595", 26);

    REQUIRE(medidor.get_id() == 26);
    REQUIRE(medidor.get_model() == "9595");
    REQUIRE(medidor.get_line() == "ZEUS");
    REQUIRE(medidor.get_meter_line() == MeterLine::ZEUS);
}

TEST_CASE("test construtor zeus 2")
{
    Zeus medidor("8484", 27);

    REQUIRE(medidor.get_id() == 27);
    REQUIRE(medidor.get_line() == "ZEUS");
    REQUIRE(medidor.get_model() == "8484");
    REQUIRE(medidor.get_meter_line() == MeterLine::ZEUS);
}