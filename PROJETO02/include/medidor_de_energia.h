#pragma once

#include "medidor.h"
#include <string>
#include <list>

enum class MeterLine
{
    ARES,
    APOLO,
    CRONOS,
    ZEUS,
};

class MedidorDeEnergia
{
public:
    MedidorDeEnergia(std::string line, std::string model, std::string id, MeterLine meter_line = MeterLine::APOLO);
    std::list<MedidorDeEnergia> lista_de_medidores;
    void adicionar_lista(std::string line, std::string model, std::string id);
    std::string id;

    bool operator==(const MedidorDeEnergia &Medidor) const;
    virtual std::string mostrar_informacao_completa() const;
    auto get_id() const -> std::string;
    auto get_line() const -> std::string;
    auto get_model() const -> std::string;


    std::string line;
    std::string model;
    MeterLine meter_line;
private:
};