#pragma once

#include "Menus.h"
#include "EletraEnergySolutions.h"
#include <fstream>

class Application
{
public:
    Application();
    void run_application();
private:
    Menus my_menu;
    EletraEnergySolutions ees;
    std::string file_path = ".\\meters.txt";

    std::ofstream output_file;
};