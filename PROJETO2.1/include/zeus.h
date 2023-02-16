#pragma once

#include "medidor_de_energia.h"
#include <string>

class ZeusEnergyMeter : public MedidorDeEnergia
{
    public:
        std::string Operation() const override
        {
            return "Medidor Zeus";
        }
};

