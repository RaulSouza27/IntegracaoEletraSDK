#include "fabrica_de_medidor.h"
#include "EletraEnergySolutions.h"
#include "catch.hpp"
#include "Apolo.h"
#include "AresMeter.h"
#include "Cronos.h"
#include "Zeus.h"

TEST_CASE("teste da fábrica de medidor 1")
{
    Apolo apolo("7070",35);
    auto meter = create_meter(MeterLine::APOLO, "7070", 35);

    REQUIRE(*meter == apolo);
}

TEST_CASE("teste da fábrica de medidor 2")
{
    Ares ares("8080",33);
    auto meter = create_meter(MeterLine::ARES, "8080", 33);

    REQUIRE(*meter == ares);
}

TEST_CASE("teste da fábrica de medidor 3")
{
    Cronos cronos("9090",34);
    auto meter = create_meter(MeterLine::CRONOS, "9090", 34);

    REQUIRE(*meter == cronos);
}

TEST_CASE("teste da fábrica de medidor 4")
{
    Zeus zeus("6060",36);
    auto meter = create_meter(MeterLine::ZEUS, "6060", 36);

    REQUIRE(*meter == zeus);
}
