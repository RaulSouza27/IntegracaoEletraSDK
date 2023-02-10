#include "controle.h"
#include "menu.h"
#include "medidores_de_energia.h"
#include "medidores_de_agua.h"
#include "religadores.h"
#include <iostream>

int main()
{   
    Religadores my_religadores;
    Menu my_intro;
    Controle my_controle;
    int select;
    int prod;
    my_intro.display_introducao();
    my_controle.selection();
    //select=my_controle.get_select();
    /*if(select==1)
    {
        my_controle.control_code_energy(); 
    }
    if (select==2)
    {
        my_controle.control_code_water();
    }
    if(select==3)
    {
        my_controle.control_code_religador();
    }
    if(select==4)
    {
        my_controle.all_products();
    }*/


    /*while(select!=5)
    {
        system("cls");
        if(select==1)
        {
            my_medidores_de_energia.display_medidores_de_energia();
            my_intro.display_selecao();
            select=my_controle.get_select();
            if(select==1)
            {
                my_intro.display_energy_meter();
                select=my_controle.get_select();
                while(select!=5)
                {
                    system("cls");
                    if(select==1)
                    {
                        my_medidores_zeus.display_linha_zeus();
                    }
                    if(select==2)
                    {
                        my_medidores_cronos.display_linha_cronos();
                    }
                    if(select==3)
                    {
                        my_medidores_ares.display_linha_ares();
                    }
                    if(select==4)
                    {
                        my_medidores_apolo.display_linha_apolo();
                    }
                    my_intro.display_energy_meter();
                    select=my_controle.get_select();
                }
            }
        }
        if(select==2)
        {
            my_medidores_de_agua.display_medidores_de_agua();
            my_intro.display_water_meter();
            select=my_controle.get_select();
            if(select==1)
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
        select=my_controle.get_select();
    }*/
    return 0;
}