#include "Apolo.h"

const std::string Apolo::APOLO_LINE = "APOLO";

Apolo::Apolo(std::string modelo, std::string id)
    : MedidorDeEnergia(APOLO_LINE, modelo, id, MeterLine::APOLO)
{
}