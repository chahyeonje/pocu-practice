//
// Created by camelcha on 2022-11-28.
//

#include "Animal.h"
#include "Cat.h"
Animal::Animal(int age)
    :mAge(age)
{
}

void AnimalExample(){
    std::string tempName = "navi";
    Cat cat(2, tempName);
    cat.speak();
    cat.GetName();
};