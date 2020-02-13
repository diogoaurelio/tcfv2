//
// Created by diogo on 12.02.20.
//

#ifndef TCF_STRINGUTILS_H
#define TCF_STRINGUTILS_H


#include <vector>
#include <string>

class StringUtils {
private:
    // disallow class instantiation
    explicit StringUtils(){}
public:
    static std::vector<std::string> split(const std::string& someVal);
};


#endif //TCF_STRINGUTILS_H
