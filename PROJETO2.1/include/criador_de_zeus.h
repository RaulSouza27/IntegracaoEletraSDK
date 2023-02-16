#pragma once

#include "medidor_de_energia.h"
#include "zeus.h"
#include "criador.h"

class ConcreteCreatorZeus : public Creator 
{

 public:
  MedidorDeEnergia* FactoryMethod() const override
  {
    return new ZeusEnergyMeter();
  }
};