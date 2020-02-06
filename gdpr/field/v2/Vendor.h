//
// Created by diogo on 06.02.20.
//

#ifndef TCF_VENDOR_H
#define TCF_VENDOR_H

#include "../Field.h"

class Vendor : public Field  {
private:
    const int pos = 6;
    const std::string name = "vendor";
public:
    Vendor();
};


#endif //TCF_VENDOR_H
