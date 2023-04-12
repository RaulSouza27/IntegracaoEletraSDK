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
    auto get_lines_on_meter_list() -> std::list<MeterLine>;
    void delete_meter_by_id(int id);
    auto create_id() -> int;

private:
    std::vector<MedidorDeEnergia> lista_de_medidores_de_energia;
};