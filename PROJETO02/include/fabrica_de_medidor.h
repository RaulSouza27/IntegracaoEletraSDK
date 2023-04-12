#pragma once

#include "MedidorDeEnergia.h"
#include "Utils.h"
#include <memory>

auto create_meter(const MeterLine &meter_line, std::string model, int id) -> std::unique_ptr<MedidorDeEnergia>;