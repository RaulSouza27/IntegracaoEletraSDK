#pragma once

#include "medidor_de_energia.h"
#include <list>
#include <string>

class Ares : public MedidorDeEnergia
{
public:
    Ares(std::string model, std::string id);

private:
    static const std::string ARES_LINE;
    static const std::string ID;
    std::list<std::string> ares_padrao = {"APOLO 6031"};
};