#pragma once

#include "medidor_de_energia/medidor_de_energia.h"
#include "Menus.h"
#include <vector>

enum class MeterLine
{
    ARES,
    CRONOS,
    ZEUS
};

class EletraEnergySolutions
{
public:
    EletraEnergySolutions();
    void listar_medidores_de_energia();
    void add_meter(MeterLine line, std::string model);
    auto get_lista_de_medidores() -> std::vector<MedidorDeEnergia>&;
private:
    std::vector<MedidorDeEnergia> lista_de_medidores;
    Menus my_menu;
};