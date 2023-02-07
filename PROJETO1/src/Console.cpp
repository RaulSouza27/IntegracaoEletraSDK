#include "controle.h"
#include "menu.h"
#include "medidores_de_energia.h"
#include "medidores_de_agua.h"
#include "religadores.h"
#include<iostream>

int main()
{
    MedidoresDeEnergia my_medidores_de_energia;
    MedidoresDeEnergia my_medidores_zeus;
    MedidoresDeEnergia my_medidores_cronos;
    MedidoresDeEnergia my_medidores_ares;
    MedidoresDeEnergia my_medidores_apolo;
    MedidoresDeAgua my_medidores_de_agua;
    MedidoresDeAgua my_medidor_zlink;
    Religadores my_religadores;
    Menu my_intro;
    Controle my_desc;
    Controle my_prod;
    Controle my_select;
    int select=0;
    int desc;
    int prod;
    my_intro.display_introducao();
    std::cin>>select;
    while(select!=5)
    {
        system("cls");
        if(select==1)
        {
            my_medidores_de_energia.display_medidores_de_energia();
            my_intro.display_selecao();
            std::cin>>desc;
            if(desc==1)
            {
                my_intro.display_energy_meter();
                std::cin>>prod;
                while(prod!=5)
                {
                    system("cls");
                    if(prod==1)
                    {
                        my_medidores_zeus.display_linha_zeus();
                    }
                    if(prod==2)
                    {
                        my_medidores_cronos.display_linha_cronos();
                    }
                    if(prod==3)
                    {
                        my_medidores_ares.display_linha_ares();
                    }
                    if(prod==4)
                    {
                        my_medidores_apolo.display_linha_apolo();
                    }
                    my_intro.display_energy_meter();
                    std::cin>>prod;
                }
            }
        }
        if(select==2)
        {
            my_medidores_de_agua.display_medidores_de_agua();
            my_intro.display_water_meter();
            std::cin>>desc;
            if(desc==1)
            {
                my_medidor_zlink.display_linha_zlink();
            }
        }
        if(select==3)
        {
            my_religadores.display_religadores();
        }
        if(select==4)
        {
            my_medidores_apolo.display_linha_apolo();
            my_medidores_ares.display_linha_ares();
            my_medidores_cronos.display_linha_cronos();
            my_medidores_zeus.display_linha_zeus();
            my_medidor_zlink.display_linha_zlink();
            my_religadores.display_religadores();
        }
        my_intro.display_introducao();
        std::cin>>select;
    }
    return 0;
}