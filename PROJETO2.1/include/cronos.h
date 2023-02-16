#pragma once

#include "medidor_de_energia.h"
#include <string>

class CronosEnergyMeter : public MedidorDeEnergia
{
    public:
        std::string Operation() const override
        {
            return "Medidor Cronos";
        }
};