//
// Created by gagm1523 on 2023-11-29.
//

#ifndef FROMAGERIE_CHEESEVARIETY_H
#define FROMAGERIE_CHEESEVARIETY_H

#include <string>
#include "Country.h"

using std::string;

enum CheeseTexture {
    Hard,
    SemiHard,
    SemiSoft,
    Soft
};

struct CheeseVariety {
    long int id;
    string name;
    Country countryOfOrigin;
    CheeseTexture texture;
    int calories;
    int saturatedFatMg;
    int cholesterolMg;

    bool operator==(const CheeseVariety &rhs) const;
    bool operator!=(const CheeseVariety &rhs) const;
};


#endif //FROMAGERIE_CHEESEVARIETY_H
