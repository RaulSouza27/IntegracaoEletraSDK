#pragma once

#include "EletraEnergySolutions.h"
#include "Menu.h"

class Application
{
public:
    Application();
    void add_meter();
    void delete_meter();
    void run_application();
private:
    Menu my_menu;
    EletraEnergySolutions ees;
};