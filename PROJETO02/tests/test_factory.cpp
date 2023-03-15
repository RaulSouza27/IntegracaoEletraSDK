#include "fabrica_de_medidor.h"
#include "catch.hpp"
#include "Apolo.h"

TEST_CASE("teste da fábrica de medidor 1")
{
    auto meter_ptr = std::make_unique<Apolo>("7070",35);

    auto meter = create_meter(MeterLine::APOLO, "7070", 35);

    REQUIRE(meter == meter_ptr);
}