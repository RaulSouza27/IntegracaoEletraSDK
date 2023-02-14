#include "medidor_de_energia/Zeus.h"

const std::string Zeus::ZEUS_LINE = "ZEUS";

Zeus::Zeus(std::string modelo)
    :   MedidorDeEnergia(ZEUS_LINE, modelo)
{
}