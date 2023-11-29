//
// Created by gagm1523 on 2023-11-29.
//

#ifndef FROMAGERIE_CHEESYSERVICE_H
#define FROMAGERIE_CHEESYSERVICE_H


#include <vector>
#include "CheeseVariety.h"
#include "Country.h"

class CheesyService {
public:
    CheeseHealth IsHealthy(const CheeseVariety &variety) const;
    std::vector<CheeseVariety> varietiesPerCountry(Country country);
};


#endif //FROMAGERIE_CHEESYSERVICE_H
