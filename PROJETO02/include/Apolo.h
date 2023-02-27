#pragma once

#include "medidor_de_energia.h"
#include <list>
#include <string>

class Apolo : public MedidorDeEnergia
{
public:
    Apolo(std::string model, std::string id);
    auto get_lista_padrao() -> std::list<std::string> &;
    void display_lista();

private:
    static const std::string APOLO_LINE;
    std::list<std::string> apolo_padrao = {"APOLO 6031"};
};