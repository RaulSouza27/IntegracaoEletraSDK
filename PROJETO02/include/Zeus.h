#pragma once

#include "medidor_de_energia.h"

class Zeus : public MedidorDeEnergia
{
public:
    Zeus(std::string model, std::string id);

private:
    static const std::string ZEUS_LINE;
};