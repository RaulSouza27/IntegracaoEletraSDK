#include "catch.hpp"
#include "EletraEnergySolutions.h"
#include "Zeus.h"
#include "AresMeter.h"
#include "Cronos.h"
#include "Apolo.h"

TEST_CASE("TEST construtor")
{
    EletraEnergySolutions ees;
    auto list = ees.get_lista_de_medidores();

    REQUIRE(list.size() == 17);
    REQUIRE(list.at(0) == Zeus("8021", 1));
    REQUIRE(list.at(4) == Cronos("6001-A", 5));
    REQUIRE(list.at(8) == Cronos("7023", 9));
}

TEST_CASE("test get_lista_de_medidores")
{
    std::vector<MedidorDeEnergia> lista_test = {
        Zeus("8021", 1),
        Zeus("8031", 2),
        Zeus("8023", 3),
        Apolo("6031", 4),
        Cronos("6001-A", 5),
        Cronos("6021-A", 6),
        Cronos("6021L", 7),
        Cronos("6003", 8),
        Cronos("7023", 9),
        Cronos("7023L", 10),
        Cronos("7023 2,5", 11),
        Ares("7021", 12),
        Ares("7031", 13),
        Ares("7023", 14),
        Ares("8023", 15),
        Ares("8023 15", 16),
        Ares("8023 200", 17),
    };
    EletraEnergySolutions ees;
    REQUIRE(ees.get_lista_de_medidores() == lista_test);
}

TEST_CASE("test de adicionar medidor 1")
{
    EletraEnergySolutions ees;
    Zeus medidor("8060", 18);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 2")
{
    EletraEnergySolutions ees;
    Ares medidor("9898", 19);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 3")
{
    EletraEnergySolutions ees;
    Cronos medidor("8000", 20);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 4")
{
    EletraEnergySolutions ees;
    Apolo medidor("2000", 21);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 5")
{
    EletraEnergySolutions ees;
    Zeus medidor("3500", 27);

    ees.adicionar_medidor(medidor);
    REQUIRE(medidor == ees.get_lista_de_medidores().back());
}

TEST_CASE("test de adicionar medidor 6")
{
    EletraEnergySolutions ees;
    Cronos medidor("3500", 28);

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

TEST_CASE("test get_lista_de_medidores_por_linha - ares")
{
    std::vector<MedidorDeEnergia> test_list = {Ares("7021", 12), Ares("7031", 13), Ares("7023", 14), Ares("8023", 15), Ares("8023 15", 16), Ares("8023 200", 17)};
    EletraEnergySolutions ees;

    REQUIRE(ees.get_lista_de_medidores_por_linha(MeterLine::ARES) == test_list);
}

TEST_CASE("test get_lista_de_medidores_por_linha - apolo")
{
    std::vector<MedidorDeEnergia> test_list = {Apolo("6031",4)};
    EletraEnergySolutions ees;

    REQUIRE(ees.get_lista_de_medidores_por_linha(MeterLine::APOLO) == test_list);
}

TEST_CASE("test get_lista_de_medidores_por_linha - cronos")
{
    std::vector<MedidorDeEnergia> test_list = {Cronos("6001-A",5),Cronos("6021-A",6),Cronos("6021L",7),Cronos("6003",8),Cronos("7023",9),Cronos("7023L",10),Cronos("7023 2,5",11)};
    EletraEnergySolutions ees;

    REQUIRE(ees.get_lista_de_medidores_por_linha(MeterLine::CRONOS) == test_list);
}

TEST_CASE("test get_lista_de_medidores_por_linha - zeus")
{
    std::vector<MedidorDeEnergia> test_list = {Zeus("8021",1),Zeus("8031",2),Zeus("8023",3)};    
    
    EletraEnergySolutions ees;

    REQUIRE(ees.get_lista_de_medidores_por_linha(MeterLine::ZEUS) == test_list);
}

TEST_CASE("test de create_id")
{
    EletraEnergySolutions ees;

    REQUIRE(ees.create_id() == 18);
}

TEST_CASE("test de get_lines_on_meter_list")
{
    std::list<MeterLine> test_lines = {MeterLine::ZEUS, MeterLine::APOLO, MeterLine::CRONOS, MeterLine::ARES};
    EletraEnergySolutions ees;

    auto list = ees.get_lines_on_meter_list();

    REQUIRE(list == test_lines);
}

TEST_CASE("delete id")
{
    int n = 10;
    EletraEnergySolutions ees;
    ees.delete_meter_by_id(n);
    auto tam = ees.get_lista_de_medidores().size();
    REQUIRE(tam == 16);
}
