#pragma once

#include "medidor_de_energia.h"
#include <list>
#include <string>

class Apolo : public MedidorDeEnergia
{
public:
    Apolo(std::string model, std::string id);

private:
    static const std::string APOLO_LINE;
};