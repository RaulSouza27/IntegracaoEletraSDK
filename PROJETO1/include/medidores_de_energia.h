#pragma once
#include <array>
#include <iostream>
#include <string>

class MedidoresDeEnergia
{
public:
    void display_medidores_de_energia();
    void display_linha_zeus();
    void display_linha_ares();
    void display_linha_cronos();
    void display_linha_apolo();
private:
    const std::array<std::string, 4> energy_meters = {"Linha Zeus","Linha Apolo","Linha Ares","Linha Cronos"};
    
    const std::array<std::string, 4> zeus_products = {"Zeus 8021","Zeus 8031","Zeus 8023"};
    const std::array<std::string, 6> ares_products = {"Ares 7021","Ares 7031","Ares 7023","Ares 8023","Ares 8023 15","Ares 8023 200"};
    const std::array<std::string, 8> cronos_products = {"Cronos 6001-A","Cronos 6021-A","Cronos 6021L","Cronos 6003","Cronos 7023","Cronos 7023-L","Cronos 7023 2,5"};
    const std::array<std::string, 1> apolo_products = {"Apolo 6031"};
};