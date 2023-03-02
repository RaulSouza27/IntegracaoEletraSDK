#pragma once

#include "MedidorDeEnergia.h"

class Zeus : public MedidorDeEnergia
{
public:
    Zeus(std::string model, int id);

private:
    static const std::string ZEUS_LINE;
};