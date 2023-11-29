//
// Created by gagm1523 on 2023-11-29.
//

#include "CheeseRepository.h"

vector<CheeseVariety> CheeseRepository::varietiesFromCountry(const Country &country) const {
    vector<CheeseVariety> result;

    for (const CheeseVariety& variety : this->varieties) {
        if (variety.countryOfOrigin.id == country.id) {
            result.push_back(variety);
        }
    }

    return result;
}
