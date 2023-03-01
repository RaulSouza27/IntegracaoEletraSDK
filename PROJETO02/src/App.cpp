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
    std::string model;
    int id;
    bool run_app = true;

    while(run_app)
    {   
        my_menu.menu_seperador();
        my_menu.menu_seletor();
        int decision = my_menu.get_int_by_terminal();

        Seletor seletor = my_menu.get_seletor(decision);

        switch(seletor)
        {
            case Seletor::ZEUS:
                my_menu.menu_insercao();
                model = my_menu.get_string_by_terminal();
                id = ees.create_id();
                ees.adicionar_medidor(MeterLine::ZEUS, model, id);
                break;
            case Seletor::ARES:    
                my_menu.menu_insercao();
                model = my_menu.get_string_by_terminal();
                id = ees.create_id();
                ees.adicionar_medidor(MeterLine::CRONOS, model, id);
                break;
            case Seletor::CRONOS:
                my_menu.menu_insercao();
                model = my_menu.get_string_by_terminal();
                id = ees.create_id();
                ees.adicionar_medidor(MeterLine::ARES, model, id);
                break;
            case Seletor::APOLO:
                my_menu.menu_insercao();
                model = my_menu.get_string_by_terminal();
                id = ees.create_id();
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
    while(app_run)
    {   
        my_menu.menu_start_choice();
        int action = my_menu.get_int_by_terminal();
        Action act = my_menu.get_action(action);

        switch (act)
        {
        case Action::LINES:
            my_menu.menu_seperador();
            my_menu.menu_lines();
            my_menu.menu_decision();
            break;
        case Action::ENERGY_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_meters_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_de_energia();
            my_menu.menu_seperador();
            my_menu.menu_decision();
            break;
        case Action::ARES_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_meter_info("ARES");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::ARES);
            my_menu.menu_decision();
            break;
        case Action::APOLO_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_meter_info("APOLO");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::APOLO);
            my_menu.menu_decision();
            break;
        case Action::CRONOS_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_meter_info("CRONOS");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::CRONOS);
            my_menu.menu_decision();
            break;
        case Action::ZEUS_METERS:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_meter_info("ZEUS");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::ZEUS);
            my_menu.menu_decision();
            break;
        case Action::ADD_METER:
            system("cls");
            my_menu.menu_seperador();
            add_meter();
            my_menu.menu_seperador();
            my_menu.menu_decision();
            break;
        case Action::DELETE_METER:
            system("cls");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_de_energia();
            my_menu.menu_seperador();
            delete_meter();
            my_menu.menu_decision();
            break;
        case Action::EXIT:
            app_run = false;
            break;
        case Action::UNKNOWN:
            my_menu.menu_warning();
            break;
        }
    }
}

void Application::delete_meter()
{
    int descision;
    my_menu.menu_delete();
    int num;
    do
    {
        my_menu.menu_info_delete();
        descision = my_menu.get_int_by_terminal();
        for (auto it = ees.get_lista_de_medidores().begin(); it!=ees.get_lista_de_medidores().end(); ++it)
        {
            if(it -> get_id() == descision)
            {
                it=ees.get_lista_de_medidores().erase(it);
                break;
            }
            try
            {
                int convert = descision;
                int convert2 = ees.get_lista_de_medidores().size();
                if (convert>convert2)
                {
                    my_menu.menu_warning();
                    break;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                break;
            }
        }
    }
    while(descision!=0);
}
