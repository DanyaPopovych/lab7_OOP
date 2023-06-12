#include "CMultiZoneElectricityConsumption.h"

double CMultiZoneElectricityConsumption::GetElectricityBill(double dConsumptionPerHours[24U]) const {
    double sum = 0;
    for (int i = 0; i < 24; i++) {
        if ((i >= 0 && i < 7) || i == 23) {
            sum += dConsumptionPerHours[i] * CPrices::socialPriceOfKilowat;
        }
        else if (i == 7 || (i >= 11 && i < 17)) {
            sum += dConsumptionPerHours[i] * CPrices::normalPriceOfKilowat;
        }
        else
        {
            sum += dConsumptionPerHours[i] * CPrices::peekPrice;
        }
    }
    return sum;
}