#include "medidor_de_energia/Ares.h"

const std::string Ares::ARES_LINE = "ARES";

Ares::Ares(std::string modelo)
    :   MedidorDeEnergia(ARES_LINE, modelo)
{
}