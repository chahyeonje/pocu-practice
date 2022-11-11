//
// Created by camelcha on 2022-11-08.
//

#include "Calculator.h"

Calculator::Calculator()
{
    mNum1 = 0;
    mNum2 = 0;
}

void Calculator::calculate(const double& num1, const double& num2, const char& op) {
    mNum1 = num1;
    mNum2 = num2;

    switch(op){
        case('+'):
            mResult = mNum1 + mNum2;
            break;

        case('-'):
            mResult = mNum1 - mNum2;
            break;

        case('*'):
            mResult = mNum1 * mNum2;
            break;

        case('/'):
            mResult = mNum1 / mNum2;
            break;
    }
}

void Calculator::ExeCal() {
    double num1;
    double num2;
    int exitNum;
    char op;

    while(true)
    {
        std::cout << "=== calculator ===" << std::endl;
        std::cout << "num1 : " ;
        std::cin >> num1;
        std::cout << "num2 : " ;
        std::cin >> num2;
        std::cout << "operation : ";
        std::cin >> op;
        calculate(num1,num2,op);
        std::cout << "reseult : " << mResult << std::endl;
        std::cout << "if you want to exit, put 9999 : ";
        std::cin >> exitNum;
        if(exitNum == 9999){break;}

    }
}
