//
// Created by diogo on 06.02.20.
//

#ifndef TCF_CORE_H
#define TCF_CORE_H

#include <vector>
#include "optional"
#include "../field/Field.h"
#include <memory>
#include "../field/v2/Vendor.h"
#include "../field/v2/Created.h"

class Core {

private:
    static const std::vector<std::shared_ptr<Field>> one;
    static const std::vector<std::shared_ptr<Field>> two;
public:
    static std::optional<std::vector<std::shared_ptr<Field>>> getSequence(int tcfVersion);
    Core();
};


#endif //TCF_CORE_H
