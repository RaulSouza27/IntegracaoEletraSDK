#include "fabrica_de_medidor.h"
#include "Apolo.h"
#include "AresMeter.h"
#include "Cronos.h"
#include "Zeus.h"

auto create_meter(const MeterLine &meter_line, std::string model, int id) -> std::unique_ptr<MedidorDeEnergia>
{
    switch (meter_line)
    {
    case MeterLine::APOLO:
        return std::make_unique<Apolo>(model, id);
    case MeterLine::ARES:
        return std::make_unique<Ares>(model, id);
    case MeterLine::CRONOS:
        return std::make_unique<Cronos>(model, id);
    case MeterLine::ZEUS:
        return std::make_unique<Zeus>(model, id);
    }
    throw std::exception("\n A INFORMAÇÃO INSERIDA É INVÁLIDA!!!");
}