#pragma once

#include "CElectricityConsumption.h"
#include "CPrices.h"

class CMultiZoneElectricityConsumption : public CElectricityConsumption {
public:
    double GetElectricityBill(double dConsumptionPerHours[24U]) const override;
};