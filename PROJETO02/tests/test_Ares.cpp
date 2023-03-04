#include "catch.hpp"
#include "Ares.h"

TEST_CASE("Teste construtor ARES")
{
    Ares medidor("7000",23);

    REQUIRE( medidor.get_model() == "7000");
    REQUIRE( medidor.get_id() == 23);
    REQUIRE( medidor.get_line() == "ARES");
    REQUIRE( medidor.get_meter_line() == MeterLine::ARES);
}

TEST_CASE("Teste construtor ARES 2")
{
    Ares medidor("7500",24);

    REQUIRE( medidor.get_model() == "7500");
    REQUIRE( medidor.get_id() == 24);
    REQUIRE( medidor.get_line() == "ARES");
    REQUIRE( medidor.get_meter_line() == MeterLine::ARES);
}

TEST_CASE("Teste construtor ARES 3")
{
    Ares medidor("8000",25);

    REQUIRE(medidor.get_model() == "8000");
    REQUIRE(medidor.get_id() == 25);
    REQUIRE(medidor.get_line() == "ARES");
    REQUIRE(medidor.get_meter_line() == MeterLine::ARES);
}

