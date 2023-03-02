#pragma once

#include "MedidorDeEnergia.h"
#include <vector>

class EletraEnergySolutions
{
public:
    EletraEnergySolutions();
    auto get_lista_de_medidores() -> std::vector<MedidorDeEnergia> &;
    void adicionar_medidor(MedidorDeEnergia medidor);
    void listar_medidores_de_energia();
    void listar_medidores_by_line(const MeterLine &line);
    auto create_id() -> int;

private:
    std::vector<MedidorDeEnergia> lista_de_medidores_de_energia;
};