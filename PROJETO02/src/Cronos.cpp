#include "Cronos.h"

const std::string Cronos::CRONOS_LINE = "CRONOS";

Cronos::Cronos(std::string modelo, std::string id)
    : MedidorDeEnergia(CRONOS_LINE, modelo, id, MeterLine::CRONOS)
{
}
