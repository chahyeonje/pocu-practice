//
// Created by camelcha on 2022-10-31.
//

#include "String.h"
namespace samples
{
    void StringExample()
    {
        std::string firstName;
        std::string lastName;
        std::string fullName;
        std::cout << "firstName : " ;
        std::cin >> firstName;
        std::cout << "lastName : " ;
        std::cin >> lastName;
        fullName = firstName + " " + lastName;
        std::cout << fullName << std::endl;
    }
}