
#include <iostream>
#include "./gdpr/segment/Core.h"

int main() {

    Vendor vendor;
    std::cout << "Vendor name is " << vendor.getName() << std::endl;
    std::cout << "Vendor pos is " << vendor.getPos() << std::endl;
    Core core = Core();
    const auto sequence = core.getSequence(2);
    if (sequence.has_value()) {
        std::cout << "Core is " << sequence.has_value() << std::endl;
        Field* f = sequence.value().at(0).get();
        std::cout << "Core sequence value is " << (*f).getName() << std::endl;
    }

    return 0;
}