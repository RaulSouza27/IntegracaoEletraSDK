#include "EletraEnergySolutions.h"
#include "catch.hpp"

TEST_CASE("EletraEnergySolutions::add_meter - Add Zeus 8021")
{
    EletraEnergySolutions ees;

    ees.add_meter(MeterLine::ZEUS, "8021");
    ees.add_meter(MeterLine::ARES, "7021");
    ees.add_meter(MeterLine::ARES, "7023");
    ees.add_meter(MeterLine::CRONOS, "6021");
    ees.add_meter(MeterLine::ZEUS, "8023");

    auto lista = ees.get_lista_de_medidores();
    
    MedidorDeEnergia medidor_esperado1("ZEUS", "8021");
    MedidorDeEnergia medidor_esperado2("ARES", "7021");
    MedidorDeEnergia medidor_esperado3("ARES", "7023");
    MedidorDeEnergia medidor_esperado4("CRONOS", "6021");
    MedidorDeEnergia medidor_esperado5("ZEUS", "8023");

    REQUIRE(lista.at(0) == medidor_esperado1);
    REQUIRE(lista.at(1) == medidor_esperado2);
    REQUIRE(lista.at(2) == medidor_esperado3);
    REQUIRE(lista.at(3) == medidor_esperado4);
    REQUIRE(lista.at(4) == medidor_esperado5);
}