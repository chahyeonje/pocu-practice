//
// Created by camelcha on 2022-11-28.
//

#ifndef PRACTICE_ANIMAL_H
#define PRACTICE_ANIMAL_H
#include <iostream>

class Animal {
public:
    Animal(int age);
    virtual void speak() = 0;

private:
    int mAge;

};

void AnimalExample();

#endif //PRACTICE_ANIMAL_H
