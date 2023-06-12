#include "CFixedElectricityConsumption.h"

double CFixedElectricityConsumption::GetElectricityBill(double dConsumptionPerHours[24U]) const {
    double sum = 0;
    for (int i = 0; i < 24; i++) {
        sum += dConsumptionPerHours[i] * CPrices::normalPriceOfKilowat;
    }
    return sum;
}