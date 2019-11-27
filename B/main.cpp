#include <iostream>
#include "A/lib.h"


std::string hello(std::string target) {
    return "Hello, " + target + "!!!";
}

int main() {
    std::cout << hello(world()) << std::endl << hello(everyone()) << std::endl;
    return 0;
}