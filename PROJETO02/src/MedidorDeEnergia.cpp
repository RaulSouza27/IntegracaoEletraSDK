#include "MedidorDeEnergia.h"

MedidorDeEnergia::MedidorDeEnergia(std::string line, std::string model, int id, MeterLine meter_line)
    : line(line), model(model), id(id), meter_line(meter_line)
{
}

std::string MedidorDeEnergia::mostrar_informacao_completa() const
{
    return line + "  *********  " + model;
}

auto MedidorDeEnergia::get_line() const -> std::string
{
    return line;
}

auto MedidorDeEnergia::get_model() const -> std::string
{
    return model;
}

auto MedidorDeEnergia::get_id() const -> int
{
    return id;
}

auto MedidorDeEnergia::get_meter_line() const -> MeterLine
{
    return meter_line;
}

bool MedidorDeEnergia::operator==(const MedidorDeEnergia &medidor) const
{
    return (medidor.get_meter_line() == this->meter_line) && (medidor.get_line() == this->line) && (medidor.get_model() == this->model && (medidor.get_id() == this->id));
}
