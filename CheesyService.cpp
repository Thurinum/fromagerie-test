//
// Created by gagm1523 on 2023-11-29.
//

#include "CheesyService.h"

enum CheeseHealth {
    Healthy,
    Neutral,
    Unhealthy,
};

// https://www.darkcheese.com/cheese-comparison/
CheeseHealth CheesyService::IsHealthy(const CheeseVariety &variety) const {
    CheeseHealth health = Healthy;

    if (variety.calories >= 410
      & variety.saturatedFatMg >= 20
      & variety.cholesterolMg >= 100)
        return Unhealthy;

    if (variety.calories >= 270)
        return Neutral;

    return Healthy;
}
