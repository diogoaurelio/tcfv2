//
// Created by diogo on 12.02.20.
//

#ifndef TCF_TCSTRING_H
#define TCF_TCSTRING_H

#include <string>
#include <sstream>
#include <iostream>
#include "TCModel.h"
#include "segment/Core.h"

class TCString {
private:
    // prevent instantiation
    explicit TCString() {}
    static Core coreSegment;
public:
    static boost::optional<TCModel*> decode(const std::string& someVal);
};


#endif //TCF_TCSTRING_H
