#pragma once

#include "medidor_de_energia.h"
#include <iostream>

class Creator 
{
 public:
  virtual ~Creator(){};
  virtual MedidorDeEnergia* FactoryMethod() const = 0;

  std::string SomeOperation() const 
  {
    MedidorDeEnergia* MedidorDeEnergia = this->FactoryMethod();
    std::string result = "Acabamos de criar o " + MedidorDeEnergia->Operation();
    delete MedidorDeEnergia;
    return result;
  }
};