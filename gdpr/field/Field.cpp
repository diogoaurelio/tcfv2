//
// Created by diogo on 10.02.20.
//
#include "Field.h"

std::string Field::getName() {
    return name;
}

int Field::getPos() {
    return pos;
}

Field::Field() {
    name = "field";
    pos = 0;
}
