#pragma once

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

class Menus
{
public:
    void menu_seletor();
    void menu_insercao();
    void menu_de_introducao();
    void menu_seperador();
    auto get_seletor(int n) -> Seletor;
    auto get_action(int n) -> Action;
    void menu_action();
    void menu_choice();
    void menu_de_id();
    void menu_start();
    void menu_lines();
    void menu_decision();
    void menu_indicador();
    auto get_action_add_meter(int &decision) -> int;
    void menu_warning();
    void menu_delete();
    void menu_info_delete();
    void menu_start_choice();
    void menu_zeus_info();
    void menu_cronos_info();
    void menu_apolo_info();
    void menu_ares_info();
    void menu_meters_info();
};