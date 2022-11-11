//
// Created by camelcha on 2022-11-08.
//

#ifndef PRACTICE_CALCULATOR_H
#define PRACTICE_CALCULATOR_H
#include <iostream>

class Calculator {
public:
    Calculator();
    void ExeCal();

private:
    void calculate(const double& num1, const double& num2, const char& op);


private:
    double mNum1;
    double mNum2;
    double mResult;
};


#endif //PRACTICE_CALCULATOR_H
