#include "intro.h"
#include "medidores_de_energia.h"
#include "medidores_de_agua.h"
#include "religadores.h"
#include<iostream>



// Raul
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
    Intro my_intro;
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
            std::cout<<"Deseja ver alguma daslinhas de produtos?"<<std::endl;
            std::cout<<"Se sim digite 1, se não 0"<<std::endl;
            std::cin>>desc;
            if(desc==1)
            {
                std::cout<<"Qual linha vc deseja ver?"<<std::endl;
                std::cout<<"1-zeus\n2-cronos\n3-ares\n4-apolo"<<std::endl;
                std::cout<<"Para sair aperte 5"<<std::endl;
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
                    std::cout<<"Deseja rever alguma linha?"<<std::endl;
                    std::cout<<"1-zeus\n2-cronos\n3-ares\n4-apolo"<<std::endl;
                    std::cout<<"Para sair aperte 5"<<std::endl;
                    std::cin>>prod;
                }
            }
        }
        if(select==2)
        {
            my_medidores_de_agua.display_medidores_de_agua();
            std::cout<<"Deseja ver os produtos da linha Zlink?"<<std::endl;
            std::cout<<"Se sim digite 1, se não 0"<<std::endl;
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
            my_medidores_de_energia.display_medidores_de_energia();
            my_medidores_de_agua.display_medidores_de_agua();
            my_religadores.display_religadores();
        }
        my_intro.display_introducao();
        std::cin>>select;
    }
    return 0;
}