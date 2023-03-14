#pragma once

#include "Utils.h"
#include <string>
#include <vector>
#include "MedidorDeEnergia.h"

class Menu
{
public:
    void menu_seletor();
    void menu_insercao();
    void menu_de_introducao();
    void menu_seperador();
    auto get_seletor(int n) -> Seletor;
    auto get_action(int n) -> Action;
    void menu_start();
    void menu_lines();
    void menu_decision();
    void menu_indicador();
    void menu_warning();
    void menu_delete();
    void menu_info_delete();
    void menu_start_choice();
    void menu_meter_info(const std::string &meter_name);
    void menu_meters_info();
    auto get_int_by_terminal() -> int;
    std::string get_string_by_terminal();
    void print_meter_information(std::string complete_information, int id);
    void print_list_of_meters(const std::vector<MedidorDeEnergia> &lista_de_medidores_de_energia);
    auto convert_to_meter_line(int n) -> MeterLine;
};