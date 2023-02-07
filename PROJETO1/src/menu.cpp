#include "menu.h"
#include <iostream>
#include <string>

void Menu::display_introducao()
{
    std::cout<<"\nBem vindo ao portifólio de produtos eletra\n"<<std::endl;
    std::cout<<"\tabaixo segue a lista de produtos"<<std::endl;
    std::cout<<"Para acessar a linha de produtos digite o respectivo número que deseja acessar:"<<std::endl;
    std::cout<<"1-Medidores de energia"<<std::endl;
    std::cout<<"2-Medidores de água"<<std::endl;
    std::cout<<"3-Religadores"<<std::endl;
    std::cout<<"4-Todos os produtos"<<std::endl;
    std::cout<<"Aperte 5 caso deseje sair"<<std::endl;
}

void Menu::display_energy_meter()
{
    std::cout<<"Qual linha vc deseja ver?"<<std::endl;    
    std::cout<<"1-zeus\n2-cronos\n3-ares\n4-apolo"<<std::endl;
    std::cout<<"Para sair aperte 5"<<std::endl;
}

void Menu::display_selecao()
{
    std::cout<<"Deseja ver alguma das linhas de produtos?"<<std::endl;
    std::cout<<"Se sim digite 1, se não 0"<<std::endl;
}

void Menu::display_water_meter()
{
    std::cout<<"Deseja ver os produtos da linha Zlink?"<<std::endl;
    std::cout<<"Se sim digite 1, se não 0"<<std::endl;
}
