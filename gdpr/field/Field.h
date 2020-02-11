//
// Created by diogo on 06.02.20.
//

#ifndef TCF_FIELD_H
#define TCF_FIELD_H

#include <string>

class Field {
protected:
    int pos;
    std::string name;
public:
    int getPos();
    std::string getName();
    Field();
};


#endif //TCF_FIELD_H
