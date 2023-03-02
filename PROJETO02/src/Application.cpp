#include "Application.h"
#include "fabrica_de_medidor.h"

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
        try
        {
            my_menu.menu_seperador();
            my_menu.menu_seletor();
            int decision = my_menu.get_int_by_terminal();

            Seletor seletor = my_menu.get_seletor(decision);
            
            my_menu.menu_insercao();
            model = my_menu.get_string_by_terminal();
            id = ees.create_id();

            auto meter = create_meter(seletor, model, id);

            ees.adicionar_medidor(*meter);
        }
        catch(const std::exception& e)
        {
            run_app = false;
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
            my_menu.menu_seperador();
            my_menu.menu_meters_info();
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_de_energia();
            my_menu.menu_seperador();
            my_menu.menu_decision();
            break;
        case Action::ARES_METERS:
            my_menu.menu_seperador();
            my_menu.menu_meter_info("ARES");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::ARES);
            my_menu.menu_decision();
            break;
        case Action::APOLO_METERS:
            my_menu.menu_seperador();
            my_menu.menu_meter_info("APOLO");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::APOLO);
            my_menu.menu_decision();
            break;
        case Action::CRONOS_METERS:
            my_menu.menu_seperador();
            my_menu.menu_meter_info("CRONOS");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::CRONOS);
            my_menu.menu_decision();
            break;
        case Action::ZEUS_METERS:
            my_menu.menu_seperador();
            my_menu.menu_meter_info("ZEUS");
            my_menu.menu_seperador();
            my_menu.menu_indicador();
            ees.listar_medidores_by_line(MeterLine::ZEUS);
            my_menu.menu_decision();
            break;
        case Action::ADD_METER:
            my_menu.menu_seperador();
            add_meter();
            my_menu.menu_seperador();
            my_menu.menu_decision();
            break;
        case Action::DELETE_METER:
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
        case Action::CLEARSCREEN:
            system("cls");        
            my_menu.menu_decision();
            my_menu.menu_start_choice();
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
                my_menu.menu_warning();
                break;
            }
        }
    }
    while(descision!=0);
}
