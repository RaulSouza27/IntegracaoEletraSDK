#include "controle.h"
#include "medidores_de_energia.h"
#include "medidores_de_agua.h"
#include "menu.h"
#include "religadores.h"

#include <iostream>
#include <string>

MedidoresDeAgua my_medidores_agua;
MedidoresDeAgua my_zlink;
MedidoresDeAgua my_hidro;
MedidoresDeEnergia my_medidores_de_energia;
MedidoresDeEnergia zeus_line;
MedidoresDeEnergia apolo_line;
MedidoresDeEnergia ares_line;
MedidoresDeEnergia cronos_line;
Menu my_display_agua;
Menu my_display_energy;
Menu my_display_return;
Menu my_display_selecao;
Religadores my_display_religadores;
int Controle::get_select()
{
    int select;
    std::cin>>select;
    return select;
}

void Controle::control_code_energy()
{   
    system("color 06");
    system("cls");
    my_display_energy.display_energy_meter();
    zeus_line.display_linha_zeus();
    apolo_line.display_linha_apolo();
    ares_line.display_linha_ares();
    cronos_line.display_linha_cronos();
}

void Controle::control_code_water()
{
    system("color 01");
    system("cls");
    my_hidro.display_medidores_de_agua();
    my_zlink.display_linha_zlink();
}
void Controle::control_code_religador()
{
    system("color 03");
    system("cls");
    my_display_religadores.display_religadores();
}

void Controle::all_products()
{
    system("color 07");
    system("cls");
    my_display_religadores.display_religadores();
    my_zlink.display_linha_zlink();
    zeus_line.display_linha_zeus();
    cronos_line.display_linha_cronos();
    ares_line.display_linha_ares();
    apolo_line.display_linha_apolo();

}

void Controle::selection()
{
    int select;
    select=get_select();
    system("cls");
    while (1)
    {
        if(select==1)
        {
            control_code_energy();
        }
        if(select==2)
        {
            control_code_water();
        }
        if(select==3)
        {
            control_code_religador();
        }
        if(select==4)
        {
            all_products();
        }
        if(select==5)
        {
            break;
        }

        my_display_selecao.display_selecao();
        select=get_select();        
    }   
}


