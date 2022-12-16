//
// Created by camelcha on 2022-11-28.
//

#include "Animal.h"
#include "Cat.h"
Animal::Animal()
    :mAge(0)
{
}

Animal::Animal(int age)
    :mAge(age)
{
}

void Animal::speak() {
    std::cout << "aniaml speak" << std::endl;
}

void AnimalExample(){
//    std::string tempName = "navi";
//    Cat cat(2, tempName);
//    cat.speak();
//    cat.GetName();
    Cat* myCat = new Cat();
    Animal* yourCat = new Cat();
    myCat->speak();
    yourCat->speak();

};