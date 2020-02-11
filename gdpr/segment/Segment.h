//
// Created by diogo on 12.02.20.
//

#ifndef TCF_SEGMENT_H
#define TCF_SEGMENT_H

#include "../TCModel.h"

class Segment {
public:
    virtual void decode(const std::string& someVal, TCModel& model) = 0;
};

#endif //TCF_SEGMENT_H
