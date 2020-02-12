//
// Created by diogo on 12.02.20.
//

#include <sstream>
#include "StringUtils.h"

std::vector<std::string> StringUtils::split(const std::string& someVal) {
        std::istringstream iss(someVal);
        std::vector<std::string> tokens;
        std::string token;
        while (std::getline(iss, token, '.')) {
            if (!token.empty())
                tokens.push_back(token);
        }
        return tokens;
}
