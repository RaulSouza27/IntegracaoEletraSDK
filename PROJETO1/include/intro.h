#include "string"
#include<iostream>

class Intro
{
    public:
    void display_introducao()
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

};
