#pragma once

#include "medidor_de_energia.h"
#include "ares.h"
#include "criador.h"

class ConcreteCreatorAres : public Creator 
{

 public:
  MedidorDeEnergia* FactoryMethod() const override
  {
    return new AresEnergyMeter();
  }
};