#pragma once

#include "MedidorDeEnergia.h"

class Ares : public MedidorDeEnergia
{
public:
    Ares(std::string model, int id);

private:
    static const std::string ARES_LINE;
};