#pragma once

#include <string>
#include <list>

enum class MeterLine
{
    ARES,
    APOLO,
    CRONOS,
    ZEUS,
    UNKNOWN
};

class MedidorDeEnergia
{
public:
    MedidorDeEnergia(std::string line, std::string model, int id, MeterLine meter_line = MeterLine::APOLO);

    bool operator==(const MedidorDeEnergia &Medidor) const;
    virtual std::string mostrar_informacao_completa() const;
    auto get_id() const -> int;
    auto get_line() const -> std::string;
    auto get_model() const -> std::string;
    auto get_meter_line() const -> MeterLine;

private:
    int id;
    std::string line;
    std::string model;
    MeterLine meter_line;
};