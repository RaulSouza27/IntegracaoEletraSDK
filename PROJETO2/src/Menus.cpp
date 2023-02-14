#include "Menus.h"
#include <iostream>

void Menus::menu_seletor()
{   
    std::cout<<"Em qual linha vc deseja inserir um novo modelo?: "<<std::endl;
    std::cout<<"1-ZEUS\n2-CRONOS\n3-ARES\n4-Sair da aplicação"<<std::endl;
}

void Menus::menu_insercao()
{
    std::cout<<"Agora insira o numero do modelo que deseja inserir: "<<std::endl;
}

void Menus::menu_intro()
{
    std::cout<<"Bem vindo ao portifolio de medidores de energia"<<std::endl;
    std::cout<<"Abaixo vemos os medidores de energia disponivéis"<<std::endl;
}

void Menus::menu_seperador()
{
    std::cout<<"\n*****************************************************\n"<<std::endl;
}

auto Menus::get_seletor(int n) -> Seletor
{
    switch (n) 
    {
    case 1:
        return Seletor::ZEUS;
    case 2:
        return Seletor::CRONOS;
    case 3:
        return Seletor::ARES;
    case 4:
        return Seletor::SAIR;    
    }
    return Seletor::UNKNOWN;
}

void Menus::menu_choice()
{
    int n1;
    std::cin>>n1;
    Seletor n=get_seletor(n1);
}