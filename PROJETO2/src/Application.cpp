#include "Application.h"
#include <iostream>

Application::Application()
    : output_file(file_path, std::ios::app)
{
}

void Application::run_application()
{   
    my_menu.menu_seperador();
    my_menu.menu_seletor();
    
    std::string model;
    bool run_app = true;

    while(run_app)
    {   
        my_menu.menu_seperador();
        my_menu.menu_seletor();
        int numero_da_selecao = 0;
        // Seletor seletor = my_menu.get_seletor(numero_da_selecao);
        std::cin >> numero_da_selecao;

        Seletor seletor = my_menu.get_seletor(numero_da_selecao);

        switch(seletor)
        {
            case Seletor::ZEUS:
                my_menu.menu_insercao();
                std::cin>>model;
                ees.add_meter(MeterLine::ZEUS, model);
                break;
            case Seletor::CRONOS:    
                my_menu.menu_insercao();
                std::cin>>model;
                ees.add_meter(MeterLine::CRONOS, model);
                break;
            case Seletor::ARES:
                my_menu.menu_insercao();
                std::cin>>model;
                ees.add_meter(MeterLine::ARES, model);
                break;
            case Seletor::SAIR:
                run_app=false;
                break;
            case Seletor::UNKNOWN:
                std::cout<<"Digite apenas linhas Validas"<<std::endl;
                break;    
        }
    }

    for (const auto &meter : ees.get_lista_de_medidores())
    {
        output_file.write(meter.mostrar_informacoes_do_medidor().data(), meter.mostrar_informacoes_do_medidor().size());
        output_file.write("\n", 1);
    }

    output_file.close();
}