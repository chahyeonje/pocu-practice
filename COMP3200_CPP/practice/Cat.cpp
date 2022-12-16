//
// Created by camelcha on 2022-11-28.
//

#include "Cat.h"
Cat::Cat() : Animal()
{
}

Cat::Cat(int age, std::string name)
    : Animal(age)
    , mName(name)
{
}

void Cat::speak() {
    std::cout << "meawmeaw" << std::endl;
}

void Cat::GetName() {
    std::cout << mName << std::endl;
}
