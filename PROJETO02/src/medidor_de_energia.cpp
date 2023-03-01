#include "medidor_de_energia.h"
#include <iostream>

MedidorDeEnergia::MedidorDeEnergia(std::string line, std::string model, std::string id, MeterLine meter_line)
    : line(line), model(model), id(id), meter_line(meter_line)
{
}

std::string MedidorDeEnergia::mostrar_informacao_completa() const
{
    return line + "  #  " + model;
}

auto MedidorDeEnergia::get_line() const -> std::string
{
    return line;
}

auto MedidorDeEnergia::get_model() const -> std::string
{
    return model;
}

auto MedidorDeEnergia::get_id() const -> std::string
{
    return id;
}

bool MedidorDeEnergia::operator==(const MedidorDeEnergia &medidor) const
{
    return (medidor.get_line() == this->line) && (medidor.get_model() == this->model && (medidor.get_id() == this->id));
}

void MedidorDeEnergia::adicionar_lista(std::string line, std::string model, std::string id)
{
    lista_de_medidores.emplace_back(line, model, id);
}
