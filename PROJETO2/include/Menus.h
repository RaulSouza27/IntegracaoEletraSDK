#pragma once

enum class Seletor
{
    ZEUS,
    CRONOS,
    ARES,
    SAIR,
    UNKNOWN
};

class Menus
{
    public:
        void menu_seletor();
        void menu_insercao();
        void menu_intro();
        void menu_seperador();
        auto get_seletor(int n1) -> Seletor;
        void menu_choice();
};