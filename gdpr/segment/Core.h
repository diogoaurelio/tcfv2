//
// Created by diogo on 06.02.20.
//

#ifndef TCF_CORE_H
#define TCF_CORE_H

#include <vector>
#include "optional"
#include "../field/Field.h"

class Core {

private:
    std::in_place_t one = {};
    std::in_place_t two = {};
public:
    std::optional<std::vector<Field>> getSequence(int tcfVersion);
};


#endif //TCF_CORE_H
