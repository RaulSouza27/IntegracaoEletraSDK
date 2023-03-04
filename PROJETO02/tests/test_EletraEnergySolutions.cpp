#include "catch.hpp"
#include "EletraEnergySolutions.h"
#include "Zeus.h"
#include "Ares.h"
#include "Cronos.h"
#include "Apolo.h"

TEST_CASE("test de create_id")
{
    EletraEnergySolutions ees;

    REQUIRE(ees.create_id() == 19);
}

TEST_CASE("test de adicionar medidor 1")
{
    EletraEnergySolutions ees;
    Zeus medidor("8060",18);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 2")
{
    EletraEnergySolutions ees;
    Ares medidor("9898",19);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 3")
{
    EletraEnergySolutions ees;
    Cronos medidor("8000",20);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 4")
{
    EletraEnergySolutions ees;
    Apolo medidor("2000",21);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 5")
{
    EletraEnergySolutions ees;
    Zeus medidor("3500",27);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 6")
{
    EletraEnergySolutions ees;
    Cronos medidor("3500",28);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 7")
{
    EletraEnergySolutions ees;
    Ares medidor("1515", 35);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}