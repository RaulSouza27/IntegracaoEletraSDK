#include "EletraEnergySolutions.h"
#include "medidor_de_energia/Ares.h"
#include "medidor_de_energia/Zeus.h"
#include "medidor_de_energia/Cronos.h"
#include <string>

EletraEnergySolutions::EletraEnergySolutions()
{
}

void EletraEnergySolutions::listar_medidores_de_energia()
{
    for(const auto &medidor : lista_de_medidores)
    {
        medidor.mostrar_informacoes_do_medidor();
    }
}

auto EletraEnergySolutions::get_lista_de_medidores() -> std::vector<MedidorDeEnergia>&
{
    return lista_de_medidores;
}

void EletraEnergySolutions::add_meter(MeterLine line, std::string model)
{
    switch (line)
    {
    case MeterLine::ARES:
        lista_de_medidores.push_back(Ares(model));
        return;
    case MeterLine::ZEUS:
        lista_de_medidores.push_back(Zeus(model));
        return;
    case MeterLine::CRONOS:
        lista_de_medidores.push_back(Cronos(model));
        return;
    }
}

