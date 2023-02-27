#include "App.h"
#include "Apolo.h"
#include <iostream>
#include <string>

Application::Application()
{

}

void Application::add_meter()
{
    my_menu.menu_seperador();
    my_menu.menu_de_introducao();
    std::string model_local;
    std::string id_local;
    std::string model;
    std::string id;
    bool run_app = true;

    while(run_app)
    {   
        my_menu.menu_seperador();
        my_menu.menu_seletor();
        int decision = 0;
        my_menu.get_action_add_meter(decision);

        Seletor seletor = my_menu.get_seletor(decision);

        switch(seletor)
        {
            case Seletor::ZEUS:
                my_menu.menu_insercao();
                std::cin>>model;
                my_menu.menu_de_id();
                std::cin>>id;
                ees.adicionar_medidor(MeterLine::ZEUS, model, id);
                break;
            case Seletor::ARES:    
                my_menu.menu_insercao();
                std::cin>>model;
                my_menu.menu_de_id();
                std::cin>>id;
                ees.adicionar_medidor(MeterLine::CRONOS, model, id);
                break;
            case Seletor::CRONOS:
                my_menu.menu_insercao();
                std::cin>>model;
                my_menu.menu_de_id();
                std::cin>>id;
                ees.adicionar_medidor(MeterLine::ARES, model, id);
                break;
            case Seletor::APOLO:
                my_menu.menu_insercao();
                std::cin>>model;
                my_menu.menu_de_id();
                std::cin>>id;
                ees.adicionar_medidor(MeterLine::APOLO, model, id);
                break;
            case Seletor::SAIR:
                run_app=false;
                break;
            case Seletor::UNKNOWN:
                my_menu.menu_warning();
                break;
        }
    }    
}

void Application::run_application()
{
    my_menu.menu_seperador();
    my_menu.menu_start();
    my_menu.menu_seperador();
    bool app_run = true;
    int action;
    while(app_run)
    {   
        my_menu.menu_start_choice();
        std::cin>>action;
        Action act = my_menu.get_action(action);

        switch (act)
        {
        case Action::LINES:
            my_menu.menu_seperador();
            my_menu.menu_lines();
            break;
        case Action::ENERGY_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_meters_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_de_energia();
            my_menu.menu_seperador();
            break;
        case Action::ARES_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_ares_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.lista_de_medidores_ares();
            my_menu.menu_seperador();
            break;
        case Action::APOLO_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_apolo_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.lista_de_medidores_apolo();
            my_menu.menu_seperador();
            break;
        case Action::CRONOS_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_cronos_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.lista_de_medidores_cronos();
            my_menu.menu_seperador();
            break;
        case Action::ZEUS_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_zeus_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.lista_de_medidores_zeus();
            my_menu.menu_seperador();
            break;
        case Action::ADD_METER:
            system("cls");
            my_menu.menu_seperador();
            add_meter();
            my_menu.menu_seperador();
            break;
        case Action::DELETE_METER:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_de_energia();
            my_menu.menu_seperador();
            delete_meter();
            break;
        case Action::EXIT:
            app_run = false;
            break;
        case Action::UNKNOWN:
            my_menu.menu_warning();
            break;
        }
        my_menu.menu_seperador();
        my_menu.menu_decision();
        my_menu.menu_seperador();
    }
}

void Application::delete_meter()
{
    std::string descision = "sim";
    my_menu.menu_delete();
    while(descision!="fim")
    {
        my_menu.menu_info_delete();
        std::cin>>descision;
        for (auto it = ees.get_lista_de_medidores().begin(); it!=ees.get_lista_de_medidores().end(); ++it)
        {
            if(it -> id == descision)
            {
                it=ees.get_lista_de_medidores().erase(it);
            }
        }
    }
}
