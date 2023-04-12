#pragma once

#include <string>

enum class MeterLine
{
    ZEUS,
    APOLO,
    ARES,
    CRONOS
};

class MedidorDeEnergia
{
private:
    MeterLine meter_line;
    std::string line;
    std::string model;
    int id;
public:
    MedidorDeEnergia(std::string line, std::string model, int id, MeterLine meter_line = MeterLine::ZEUS);
    auto get_id() -> int;
    auto get_model() -> std::string;
    auto get_line() -> std::string;
    auto get_meter_line() -> MeterLine;
    auto all_info() -> std::string;
};
