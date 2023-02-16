#pragma once

#include <string>

enum class LinhasDeMedidores
{
    ZEUS,
    CRONOS,
    ARES,
    APOLO,
    SAIR,
    UNKNOWN
};

class MedidorDeEnergia
{   
    public:
        virtual ~MedidorDeEnergia(){};
        virtual std::string Operation() const = 0;
        void listar_medidores();
        void adicionar_medidores();
};