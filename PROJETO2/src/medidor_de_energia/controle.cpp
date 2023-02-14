#include "EletraEnergySolutions.h"
#include "medidor_de_energia/Ares.h"
#include "medidor_de_energia/Zeus.h"
#include "medidor_de_energia/Cronos.h"
#include "medidor_de_energia/controle.h"
#include "medidor_de_energia/medidor_de_energia.h"
#include "Menus.h"
#include <iostream>
#include <string>

void Controle::controlador()
{
    Menus my_menu;
    my_menu.get_seletor();
    int n;
    while(1)
    {
        switch(n)
        {
            case 1:
                my_menu.menu_seperador();
                my_menu.menu_seletor();
                //lista_de_medidores.push_back(Zeus(model));
            case 2:
                my_menu.menu_seperador();
                my_menu.menu_seletor();
                //lista_de_medidores.push_back(Cronos(model));
            case 3:
                my_menu.menu_seperador();
                my_menu.menu_seletor();
                //lista_de_medidores.push_back(Cronos(model));
            default:
            break;
        }
    }

}