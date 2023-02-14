#include "medidor_de_energia/medidor_de_energia.h"
#include <iostream>

MedidorDeEnergia::MedidorDeEnergia(std::string line, std::string model)
    : line(line), model(model)
{
}

void MedidorDeEnergia::mostrar_informacoes_do_medidor() const 
{
    std::cout << line + " " + model << std::endl;
}

auto MedidorDeEnergia::get_line() const -> std::string
{
    return line;
}

auto MedidorDeEnergia::get_model() const -> std::string
{
    return model;
}

bool MedidorDeEnergia::operator==(const MedidorDeEnergia &medidor) const
{
    return (medidor.get_line() == this->line) && (medidor.get_model() == this->model);
}