#pragma once

#include "medidor_de_energia.h"
#include "menu.h"
#include <vector>
#include <list>
#include <string>

class EletraEnergySolutions
{
public:
    EletraEnergySolutions();
    auto get_lista_de_medidores() -> std::vector<MedidorDeEnergia> &;
    void adicionar_medidor(MeterLine line, std::string model, std::string id);
    void listar_medidores_de_energia();
    void listar_medidores_by_line(const MeterLine &line);
    std::string create_id();



private:
    std::vector<MedidorDeEnergia> lista_de_medidores_de_energia;
};