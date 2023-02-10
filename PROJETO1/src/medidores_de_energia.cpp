#include "medidores_de_energia.h"
#include "utilidades.h"
#include <iostream>

void MedidoresDeEnergia::display_medidores_de_energia()
{
    print_vetores_string(energy_meters);
}

void MedidoresDeEnergia::display_linha_zeus()
{
    print_vetores_string(zeus_products);
}

void MedidoresDeEnergia::display_linha_ares()
{
    print_vetores_string(ares_products);
}

void MedidoresDeEnergia::display_linha_cronos()
{
    print_vetores_string(cronos_products);
}

void MedidoresDeEnergia::display_linha_apolo()
{
    print_vetores_string(apolo_products);
}