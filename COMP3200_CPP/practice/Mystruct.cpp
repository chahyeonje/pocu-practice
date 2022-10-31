//
// Created by cha on 2022-10-30.
//
#include "Mystruct.h"

namespace samples
{
    struct MyStruct
    {
        int Number;
        int NotNumber;
    };

    void MyStructExample()
    {
        MyStruct myStruct;
        myStruct.Number = 100;
        Increase(myStruct);
        std::cout << myStruct.Number << std::endl;

        PIncrese(&myStruct);
        std::cout << myStruct.Number << std::endl
                  << &myStruct<< std::endl
                  << &myStruct.Number<< std::endl
                  <<&myStruct.NotNumber <<std::endl;
    }
    void Increase(MyStruct argument)
    {
        argument.Number = argument.Number + 9;
    }

    void PIncrese(MyStruct* argument)
    {
        argument->Number = argument->Number +9;
    }
}