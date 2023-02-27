#include "Apolo.h"
#include <iostream>

const std::string Apolo::APOLO_LINE = "Apolo";

Apolo::Apolo(std::string modelo, std::string id)
    : MedidorDeEnergia(APOLO_LINE, modelo, id, MeterLine::APOLO)
{
}

auto Apolo::get_lista_padrao() -> std::list<std::string> &
{
    return apolo_padrao;
}

void Apolo::display_lista()
{
    get_lista_padrao();
    for (auto x : apolo_padrao)
    {
        std::cout << x << std::endl;
    }
}
