#include "fabrica_de_medidor.h"
#include "Apolo.h"
#include "Ares.h"
#include "Cronos.h"
#include "Zeus.h"

auto create_meter(const Seletor &seletor, std::string model, int id) -> std::unique_ptr<MedidorDeEnergia>
{
    switch (seletor)
    {
    case Seletor::APOLO:
        return std::make_unique<Apolo>(model,id);
    case Seletor::ARES:
        return std::make_unique<Ares>(model,id);
    case Seletor::CRONOS:
        return std::make_unique<Cronos>(model,id);
    case Seletor::ZEUS:
        return std::make_unique<Zeus>(model, id);
    }
    throw std::exception("\n A INFORMAÇÃO INSERIDA É INVÁLIDA!!!");
}