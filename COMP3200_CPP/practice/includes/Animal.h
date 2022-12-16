//
// Created by camelcha on 2022-11-28.
//

#ifndef PRACTICE_ANIMAL_H
#define PRACTICE_ANIMAL_H
#include <iostream>

class Animal {
public:
    Animal();
    Animal(int age);
    void speak();

private:
    int mAge;

};

void AnimalExample();

#endif //PRACTICE_ANIMAL_H
