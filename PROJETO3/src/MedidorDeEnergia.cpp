#include "MedidorDeEnergia.h"
#include <iostream>

MedidorDeEnergia::MedidorDeEnergia(std::string line, std::string model, int id, MeterLine meter_line = MeterLine::ZEUS)
    :line(line),model(model),id(id),meter_line(meter_line)
{    
}

auto MedidorDeEnergia::get_id() -> int
{
    return id;
}

auto MedidorDeEnergia::get_line() -> std::string
{
    return line;
}

auto MedidorDeEnergia::get_model() -> std::string
{
    return model;
}

auto MedidorDeEnergia::get_meter_line() -> MeterLine
{
    return meter_line;
}

auto MedidorDeEnergia::all_info() -> std::string
{
    return line + " - " + model;
}