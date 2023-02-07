#pragma once
#include <string>
#include<iostream>

class MedidoresDeAgua
{
    public:
    void display_medidores_de_agua();
    void display_linha_zlink();

    private:
    const std::string Zlink_Line = "Linha Zlink";
    const std::string Ultra_hidro = "Hidrômetros Ultrasôicos";
};