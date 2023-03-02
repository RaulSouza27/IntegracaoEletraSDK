#pragma once

#include "MedidorDeEnergia.h"

class Apolo : public MedidorDeEnergia
{
public:
    Apolo(std::string model, int id);

private:
    static const std::string APOLO_LINE;
};