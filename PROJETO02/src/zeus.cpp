#include "Zeus.h"

const std::string Zeus::ZEUS_LINE = "ZEUS";

Zeus::Zeus(std::string modelo, int id)
    : MedidorDeEnergia(ZEUS_LINE, modelo, id, MeterLine::ZEUS)
{
}