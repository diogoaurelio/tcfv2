//
// Created by diogo on 06.02.20.
//

#ifndef TCF_CORE_H
#define TCF_CORE_H

#include <vector>
#include "optional"
#include <memory>
#include "Segment.h"
#include "../field/Field.h"
#include "../field/Version.h"
#include "../field/Created.h"

class Core : public Segment {

private:
    static const std::vector<std::shared_ptr<Field>> one;
    static const std::vector<std::shared_ptr<Field>> two;
    static const Core coreSegment;
public:
    std::optional<std::vector<std::shared_ptr<Field>>> getSequence(int tcfVersion);
    // override
    void decode(const std::string& someVal, TCModel& model);
    Core();
};


#endif //TCF_CORE_H
