#include "Zeus.h"

const std::string Zeus::ZEUS_LINE = "ZEUS";

Zeus::Zeus(std::string modelo, std::string id)
    : MedidorDeEnergia(ZEUS_LINE, modelo, id, MeterLine::ZEUS)
{
}