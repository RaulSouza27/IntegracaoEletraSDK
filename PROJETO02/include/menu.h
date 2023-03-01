#pragma once

#include "medidor_de_energia.h"
#include <string>

enum class Seletor
{
    ZEUS,
    ARES,
    CRONOS,
    APOLO,
    SAIR,
    UNKNOWN
};

enum class Action
{
    LINES,
    ENERGY_METERS,
    ARES_METERS,
    APOLO_METERS,
    CRONOS_METERS,
    ZEUS_METERS,
    ADD_METER,
    DELETE_METER,
    EXIT,
    UNKNOWN
};

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
};