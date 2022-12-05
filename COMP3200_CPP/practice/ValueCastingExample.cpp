//
// Created by camelcha on 2022-12-05.
//

#include <iostream>
#include <iomanip>
#include "ValueCastingExample.h"

namespace samples
{
    void ValueCastingExample()
    {
        const int intNumber = 10;

        const float floatNumber = static_cast<float>(intNumber);
        const short shortNumber = static_cast<float>(intNumber);

        std::cout << std::showbase << std::hex << std::uppercase;
        std::cout << "int : " << intNumber
                << ", short : " << shortNumber
                << std::endl;
        std::cout << "int : " << intNumber
                << ", float : " << *(int*)(&floatNumber)
                << std::endl;
    }
}
