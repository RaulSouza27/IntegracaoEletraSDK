#pragma once

#include "medidor_de_energia/medidor_de_energia.h"

class Cronos : public MedidorDeEnergia
{
private:
    static const std::string Cronos_LINE;
public:
    Cronos(std::string modelo);
};