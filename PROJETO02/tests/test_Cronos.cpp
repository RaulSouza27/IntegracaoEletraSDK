#include "catch.hpp"
#include "Cronos.h"

TEST_CASE("teste do construtor cronos")
{
    Cronos medidor("9000",21);

    REQUIRE(medidor.get_model() == "9000");
    REQUIRE(medidor.get_line() == "CRONOS");
    REQUIRE(medidor.get_id() == 21);
    REQUIRE(medidor.get_meter_line() == MeterLine::CRONOS);
}

TEST_CASE("teste do construtor cronos 2")
{
    Cronos medidor("9090",33);

    REQUIRE(medidor.get_model() == "9090");
    REQUIRE(medidor.get_line() == "CRONOS");
    REQUIRE(medidor.get_id() == 33);
    REQUIRE(medidor.get_meter_line() == MeterLine::CRONOS);
}
