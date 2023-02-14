#include "EletraEnergySolutions.h"
#include "medidor_de_energia/medidor_de_energia.h"
#include "Menus.h"

int main()
{   
    EletraEnergySolutions ees;
    Menus my_menu;
    MeterLine line = MeterLine::ARES;
    std::string model = "8021";
    my_menu.menu_seperador();
    my_menu.menu_intro();
    my_menu.menu_seperador();
    ees.listar_medidores_de_energia();
    ees.add_meter(line,model);
    system("cls");
    my_menu.menu_seperador();
    ees.listar_medidores_de_energia();
    my_menu.menu_seperador();
    return 0;
}