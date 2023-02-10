#include "controle.h"
#include "menu.h"
#include "medidores_de_energia.h"
#include "medidores_de_agua.h"
#include "religadores.h"
#include <iostream>

int main()
{   
    Religadores my_religadores;
    Menu my_intro;
    Controle my_controle;
    int select;
    int prod;
    my_intro.display_introducao();
    my_controle.selection();
    
    return 0;
}