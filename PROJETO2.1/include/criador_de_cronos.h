#pragma once

#include "medidor_de_energia.h"
#include "cronos.h"
#include "criador.h"

class ConcreteCreatorCronos : public Creator 
{

 public:
  MedidorDeEnergia* FactoryMethod() const override
  {
    return new CronosEnergyMeter();
  }
};