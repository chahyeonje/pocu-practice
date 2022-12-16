//
// Created by camelcha on 2022-11-28.
//

#ifndef PRACTICE_CAT_H
#define PRACTICE_CAT_H
#include <string>
#include "Animal.h"

class Cat: public Animal{
public:
    Cat();
    Cat(int age, std::string name);
    void speak();
    void GetName();
private:
    std::string mName;
};


#endif //PRACTICE_CAT_H
