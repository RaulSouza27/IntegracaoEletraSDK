#pragma once

#include "MedidorDeEnergia.h"

class Cronos : public MedidorDeEnergia
{
public:
    Cronos(std::string model, int id);

private:
    static const std::string CRONOS_LINE;
};