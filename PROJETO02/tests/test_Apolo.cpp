#include "catch.hpp"
#include "Apolo.h"

TEST_CASE("Teste construtor apolo")
{
    Apolo medidor("1000",10);

    REQUIRE(medidor.get_model() == "1000");
    REQUIRE(medidor.get_id() == 10);
    REQUIRE(medidor.get_line() == "APOLO");
    REQUIRE(medidor.get_meter_line() == MeterLine::APOLO);
}

TEST_CASE("Teste construtor apolo 8021")
{
    Apolo medidor("8021",1);

    REQUIRE(medidor.get_model() == "8021");
    REQUIRE(medidor.get_id() == 1);
    REQUIRE(medidor.get_line() == "APOLO");
    REQUIRE(medidor.get_meter_line() == MeterLine::APOLO);
}
