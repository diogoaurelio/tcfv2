//
// Created by diogo on 06.02.20.
//

#ifndef TCF_FIELD_H
#define TCF_FIELD_H


class Field {

private:
    const int pos;
    const std::string name;

public:
    int getPos();
    std::string getName();
};


#endif //TCF_FIELD_H
