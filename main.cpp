
#include <iostream>
#include "./gdpr/segment/Core.h"


int main() {
    Core core = Core();
    const auto sequence = core.getSequence(1);
    std::cout << "Core is " << sequence.has_value() << std::endl;
    return 0;
}