#pragma once

#include "medidor_de_energia.h"
#include "menus.h"
#include <vector>
#include <list>

class EletraEnergySolutions
{
public:
    EletraEnergySolutions();
    void lista_de_medidores_apolo();
    void lista_de_medidores_ares();
    void lista_de_medidores_cronos();
    void lista_de_medidores_zeus();
    auto get_lista_de_medidores() -> std::vector<MedidorDeEnergia> &;
    void adicionar_medidor(MeterLine line, std::string model, std::string id);
    void listar_medidores_de_energia();
    void clear_list();


private:
    std::vector<MedidorDeEnergia> lista_de_medidores_de_energia;
    std::vector<MedidorDeEnergia> medidores_padrao;
};