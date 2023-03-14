#pragma once

#include "MedidorDeEnergia.h"
#include <vector>
#include <list>

class EletraEnergySolutions
{
public:
    EletraEnergySolutions();
    auto get_lista_de_medidores() -> std::vector<MedidorDeEnergia> &;
    void adicionar_medidor(MedidorDeEnergia medidor);
    auto get_lista_de_medidores_por_linha(const MeterLine &line) -> std::vector<MedidorDeEnergia>;
    auto create_id() -> int;
    auto get_lines_on_meter_list() -> std::list<MeterLine>;
    auto get_lines_on_meter_list_2() -> std::list<MeterLine>;
    auto get_lines_on_meter_list_3() -> std::list<MeterLine>;
    void delete_meter_by_id(int decision);

private:
    std::vector<MedidorDeEnergia> lista_de_medidores_de_energia;
};