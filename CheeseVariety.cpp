//
// Created by gagm1523 on 2023-11-29.
//

#include "CheeseVariety.h"

bool CheeseVariety::operator==(const CheeseVariety &rhs) const {
    return id == rhs.id;
}

bool CheeseVariety::operator!=(const CheeseVariety &rhs) const {
    return !(rhs == *this);
}
