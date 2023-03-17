#include "EletraEnergySolutions.h"
#include "AresMeter.h"
#include "Apolo.h"
#include "Cronos.h"
#include "Zeus.h"
#include "MedidorDeEnergia.h"
#include <algorithm>
#include <chrono>
#include <iostream>

bool check_if_exist(const std::list<MeterLine> &lines, const MeterLine &line_compare);

EletraEnergySolutions::EletraEnergySolutions()
{
    lista_de_medidores_de_energia =
        {
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
}

auto EletraEnergySolutions::get_lista_de_medidores_por_linha(const MeterLine &line) -> std::vector<MedidorDeEnergia>
{
    std::vector<MedidorDeEnergia> lista_de_medidores_pela_linha;

    for (const auto &medidor : lista_de_medidores_de_energia)
    {
        if (medidor.get_meter_line() == line)
        {
            lista_de_medidores_pela_linha.push_back(medidor);
        }
    }
    return lista_de_medidores_pela_linha;
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

auto EletraEnergySolutions::get_lines_on_meter_list() -> std::list<MeterLine>
{
    std::list<MeterLine> lista_de_linhas;

    for (const auto &medidor : lista_de_medidores_de_energia)
    {
        if (check_if_exist(lista_de_linhas, medidor.get_meter_line()))
        {
            lista_de_linhas.emplace_back(medidor.get_meter_line());
        }
    }
    return lista_de_linhas;
}

void EletraEnergySolutions::delete_meter_by_id(int id)
{
    for (auto it = get_lista_de_medidores().begin(); it != get_lista_de_medidores().end(); it++)
    {
        if (it->get_id() == id)
        {
            it = get_lista_de_medidores().erase(it);
            break;
        }
    }
}

bool check_if_exist(const std::list<MeterLine> &lines, const MeterLine &line_compare)
{
    for (const auto &line : lines)
    {
        if (line == line_compare)
            return false;
    }
    return true;
}