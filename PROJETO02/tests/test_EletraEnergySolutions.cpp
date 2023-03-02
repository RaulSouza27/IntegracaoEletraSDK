#include "catch.hpp"
#include "EletraEnergySolutions.h"
#include "Zeus.h"

TEST_CASE("test de create_id")
{
    EletraEnergySolutions ees;

    REQUIRE(ees.create_id() == 19);
}

TEST_CASE("test de adicionar medidor")
{
    EletraEnergySolutions ees;
    Zeus medidor("8060",18);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}
