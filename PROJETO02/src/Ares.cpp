#include "Ares.h"

const std::string Ares::ARES_LINE = "ARES";

Ares::Ares(std::string modelo, std::string id)
    : MedidorDeEnergia(ARES_LINE, modelo, id, MeterLine::ARES)
{
}
