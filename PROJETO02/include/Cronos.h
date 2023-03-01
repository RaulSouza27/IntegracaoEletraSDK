#pragma once

#include "medidor_de_energia.h"

class Cronos : public MedidorDeEnergia
{
public:
    Cronos(std::string model, int id);

private:
    static const std::string CRONOS_LINE;
};