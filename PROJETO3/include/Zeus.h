#pragma once

#include "MedidorDeEnergia.h"

class Zeus : public MedidorDeEnergia
{
private:
    Zeus(std::string model, int id);
public:
    std::string zeus_line;
};

