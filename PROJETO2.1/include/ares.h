#pragma once

#include "medidor_de_energia.h"
#include <string>

class AresEnergyMeter : public MedidorDeEnergia
{
    public:
        std::string Operation() const override
        {
            return "Medidor Ares";
        }
};