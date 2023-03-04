#include "EletraEnergySolutions.h"
#include "Ares.h"
#include "Apolo.h"
#include "Cronos.h"
#include "Zeus.h"
#include <iostream>

EletraEnergySolutions::EletraEnergySolutions()
{
    lista_de_medidores_de_energia = 
    {
        {
            Zeus("8021",1),
            Zeus("8031",2),
            Zeus("8023",3),
            Apolo("6031",4),
            Cronos("6001-A",5),
            Cronos("6021-A",6),
            Cronos("6021L",7),
            Cronos("6003",8),
            Cronos("7023",9),
            Cronos("7023L",10),
            Cronos("7023 2,5",11),
            Ares("7021",12),
            Ares("7031",13),
            Ares("7023",14),
            Ares("8023",15),
            Ares("8023 15",16),
            Ares("8023 200",17),
            Ares("6060", 18)
        }
    };
}

void EletraEnergySolutions::listar_medidores_de_energia()
{
    for (const auto &medidor : lista_de_medidores_de_energia)
    {
        std::cout<<"*****  " << medidor.get_id() << "  *********  " + medidor.mostrar_informacao_completa() + "  **********\n";
    }
}

void EletraEnergySolutions::listar_medidores_by_line(const MeterLine &line)
{
    for (const auto &medidor : lista_de_medidores_de_energia)
    {
        if (medidor.get_meter_line() == line)
        {
            std::cout<<"*****  " << medidor.get_id() << "  *********  " + medidor.mostrar_informacao_completa() + "  **********\n";
        }
    }
}

auto EletraEnergySolutions::get_lista_de_medidores() -> std::vector<MedidorDeEnergia> &
{
    return lista_de_medidores_de_energia;
}

void EletraEnergySolutions::adicionar_medidor(MedidorDeEnergia medidor)
{
    lista_de_medidores_de_energia.push_back(medidor);
}

auto EletraEnergySolutions::create_id() -> int
{
    auto iden = lista_de_medidores_de_energia.back().get_id();
    return ++iden;
}