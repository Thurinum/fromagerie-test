//
// Created by gagm1523 on 2023-11-29.
//

#ifndef FROMAGERIE_CHEESEREPOSITORY_H
#define FROMAGERIE_CHEESEREPOSITORY_H


#include <vector>
#include "CheeseVariety.h"

using std::vector;

class CheeseRepository {
public:
//    vector<CheeseVariety> allVarieties();
//    vector<CheeseVariety> varietyByName(string name);
    vector<CheeseVariety> varietiesFromCountry(const Country& country) const;

private:
    vector<CheeseVariety> varieties;
    vector<Country> countries;
};


#endif //FROMAGERIE_CHEESEREPOSITORY_H
