#pragma once

#include "Medidor.h"
#include <string>

class MedidorDeEnergia
{
public:
    MedidorDeEnergia(std::string line, std::string model);

    bool operator==(const MedidorDeEnergia &medidor) const;
    virtual void mostrar_informacoes_do_medidor() const;
    auto get_line() const -> std::string;
    auto get_model() const -> std::string;
private:
    std::string line;
    std::string model;
};