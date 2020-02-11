
#include <iostream>
#include <variant>
#include "./gdpr/segment/Core.h"
#include "gdpr/encoder/IntegerEncoder.h"
#include "gdpr/TCString.h"
#include "gdpr/StringUtils.h"



int main() {
    // merdas aleatorias para testes mui rapidos ;)
    std::string myInt = "int";
    std::variant<int, float, std::string, IntegerEncoder> someVar;
    someVar = "hello";

    Version version;
    std::cout << "Version name is " << version.getName() << std::endl;
    std::cout << "Version pos is " << version.getPos() << std::endl;
    Core core = Core();
    const auto sequence = core.getSequence(2);
    if (sequence.has_value()) {
        std::cout << "Core is " << sequence.has_value() << std::endl;
        Field* f = sequence.value().at(0).get();
        std::cout << "Core sequence value is " << (*f).getName() << std::endl;
    }

    std::string someVal = "hello.world";
    const auto result = StringUtils::split(someVal);
    for(auto const& value: result) {
        std::cout << "Value is " << value << std::endl;
    }

    const auto model = TCString::decode(someVal);

    return 0;
}