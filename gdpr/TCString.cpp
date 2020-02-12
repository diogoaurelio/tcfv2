//
// Created by diogo on 11.02.20.
//

#include "TCString.h"
#include "StringUtils.h"

Core TCString::coreSegment = Core();

std::optional<TCModel*> TCString::decode(const std::string& someVal) {
    if (someVal.empty()) {
        return std::nullopt;
    }
    const auto segments = StringUtils::split(someVal);
    if (segments.empty()) {
        return std::nullopt;
    }

    TCModel model = TCModel();

    for (std::vector<int>::size_type i = 0; i != segments.size(); i++) {
        if (i == 0) {
           coreSegment.decode(segments[i], model);
           continue;
        }
        std::cout << "i is: " << i << " and segment is " << segments[i] << std::endl;
    }


    return &model;
}
