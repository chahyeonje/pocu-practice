//
// Created by cha on 2022-10-30.
//
#include "Swap.h"

namespace samples
{
    void SwapExample()
    {
        int number1 = 1;
        int number2 = 2;

        std::cout << "Before swap : " << number1 <<" , "<< number2 << std::endl;
        Swap(number1, number2);
        std::cout << "After swap : " << number1 <<" , "<< number2 << std::endl;
    }

    void Swap(int& num1, int& num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
}
