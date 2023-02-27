#pragma once

#include "Menus.h"
#include "EletraEnergySolutions.h"
#include <fstream>

class Application
{
public:
    Application();
    void add_meter();
    void delete_meter();
    void run_application();
private:
    Menus my_menu;
    EletraEnergySolutions ees;
};