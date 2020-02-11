//
// Created by diogo on 06.02.20.
//

#include "Core.h"
#include <iostream>
#include <boost/assign/list_of.hpp>


const std::vector<std::shared_ptr<Field>> Core::one = boost::assign::list_of( std::make_shared<Vendor>() );
const std::vector<std::shared_ptr<Field>> Core::two = boost::assign::list_of<std::shared_ptr<Field>>( std::make_shared<Vendor>() )( std::make_shared<Created>() );

std::optional<std::vector<std::shared_ptr<Field>>> Core::getSequence(int tcfVersion) {
    if (tcfVersion == 1) {
        return one;
    } else if (tcfVersion == 2) {
        return two;
    } else {
        return std::nullopt;
    }
}

Core::Core() {
};