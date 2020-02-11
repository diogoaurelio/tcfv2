//
// Created by diogo on 06.02.20.
//

#ifndef TCF_FIELD_H
#define TCF_FIELD_H

#include <string>
#include <variant>


class Field {
protected:
    int pos;
    std::string name;
public:
    int getPos(){
        return pos;
    }

    std::string getName() {
        return name;
    }

    // todo: make this virtual
    std::variant<std::string, int> decode();
};


#endif //TCF_FIELD_H
