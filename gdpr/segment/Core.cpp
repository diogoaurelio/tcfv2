//
// Created by diogo on 06.02.20.
//

#include "Core.h"
#include <iostream>
#include <boost/assign/list_of.hpp>


const std::vector<std::shared_ptr<Field>> Core::one = boost::assign::list_of( std::make_shared<Version>() );
const std::vector<std::shared_ptr<Field>> Core::two = boost::assign::list_of<std::shared_ptr<Field>>( std::make_shared<Version>() )(std::make_shared<Created>() );

boost::optional<std::vector<std::shared_ptr<Field>>> Core::getSequence(int tcfVersion) {
    if (tcfVersion == 1) {
        return boost::make_optional(one);
    } else if (tcfVersion == 2) {
        return boost::make_optional(two);
    } else {
        return boost::none;
    }
}

void Core::decode(const std::string& someVal, TCModel& model) {
    std::cout << "Decoding Core String segment now " << someVal << std::endl;
    //const BitParser bitParser = BitParser(someVal);

}

Core::Core() {
};
