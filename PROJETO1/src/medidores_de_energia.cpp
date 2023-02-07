#include "medidores_de_energia.h"
#include <iostream>
//#include<string>
#include <array>

void MedidoresDeEnergia::display_medidores_de_energia()
{
    for(int i=0;i<energy_meters.size();i++)
    {
        std::cout<<energy_meters[i]<<std::endl;
    }
}

void MedidoresDeEnergia::display_linha_zeus()
{
    for(int i=0;i<zeus_products.size();i++)
    {
        std::cout<<zeus_products[i]<<std::endl;
    }
}

void MedidoresDeEnergia::display_linha_ares()
{
    for(int i=0; i<ares_products.size();i++)
    {
        std::cout<<ares_products[i]<<std::endl;
    }
}

void MedidoresDeEnergia::display_linha_cronos()
{
    for(int i=0; i<cronos_products.size();i++)
    {
        std::cout<<cronos_products[i]<<std::endl;
    }
}

void MedidoresDeEnergia::display_linha_apolo()
{
    for(int i=0; i<apolo_products.size();i++)
    {
        std::cout<<apolo_products[i]<<std::endl;
    }
}