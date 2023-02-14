#include "EletraEnergySolutions.h"
#include "medidor_de_energia/Ares.h"
#include "medidor_de_energia/Zeus.h"
#include "medidor_de_energia/Cronos.h"
#include "Menus.h"
#include <string>
#include <iostream>

EletraEnergySolutions::EletraEnergySolutions()
{
    
}

void EletraEnergySolutions::listar_medidores_de_energia()
{
    for(const auto &medidor : lista_de_medidores)
    {
        medidor.mostrar_informacoes_do_medidor();
    }
    my_menu.menu_intro();
}

auto EletraEnergySolutions::get_lista_de_medidores() -> std::vector<MedidorDeEnergia>&
{
    return lista_de_medidores;
}

void EletraEnergySolutions::add_meter(MeterLine line, std::string model)
{
    bool run_app = true;

    /* while(run_app)
    {   
        my_menu.menu_seperador();
        my_menu.menu_seletor();

        int numero_da_selecao = 0;
        Seletor seletor = my_n.get_seletor(numero_da_selecao);

        switch(seletor)
        {
            case Seletor::ZEUS:
                my_menu.menu_insercao();
                std::cin>>model;
                lista_de_medidores.push_back(Zeus(model));
                break;
            case Seletor::CRONOS:    
                my_menu.menu_insercao();
                std::cin>>model;
                lista_de_medidores.push_back(Zeus(model));
                break;
            case Seletor::ARES:
                my_menu.menu_insercao();
                std::cin>>model;
                lista_de_medidores.push_back(Cronos(model));
                break;
            case Seletor::SAIR:
                run_app = false;
                break;
            case Seletor::UNKNOWN:
                std::cout<<"Digite apenas linhas Validas"<<std::endl;
                break;    
        }
    }    */
}

void run_application()
{

}