//
// Created by diogo on 06.02.20.
//

#include "Core.h"
#include "../field/v2/Vendor.h"

std::optional<std::vector<Field>> Core::getSequence(int tcfVersion) {
    if (tcfVersion == 1) {
        return std::optional<std::vector<Field>> {one};
    } else if (tcfVersion == 2) {
        return std::optional<std::vector<Field>> {two};
    } else {
        return std::nullopt;
    }
}
