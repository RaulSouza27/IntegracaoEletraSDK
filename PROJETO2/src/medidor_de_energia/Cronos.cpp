#include "medidor_de_energia/Cronos.h"

const std::string Cronos::Cronos_LINE = "CRONOS";

Cronos::Cronos(std::string modelo)
    :   MedidorDeEnergia(Cronos_LINE, modelo)
{
}