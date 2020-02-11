//
// Created by diogo on 11.02.20.
//

#ifndef TCF_FIELDENCODER_H
#define TCF_FIELDENCODER_H

#include <string>

template <typename T>
class FieldEncoder {
    T decode(std::string someVal);
};
#endif //TCF_FIELDENCODER_H
