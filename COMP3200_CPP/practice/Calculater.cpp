//
// Created by camelcha on 2022-11-08.
//

#include "Calculater.h"
namespace samples
{
    void CalculaterExample()
    {
        double num1;
        double num2;
        double ans;
        char operation;
        std::ofstream fout;

        std::cout << " num1 : " ;
        std::cin >> num1 ;
        std::cout << "num2 : " ;
        std::cin >> num2 ;
        std::cout << "operation : " ;
        std::cin >> operation ;
        samples::Calculate(num1,num2,operation,&ans);
        std::cout << num1 << " " << operation << " " << num2 << " = " << ans << std::endl;
    }

    void Calculate(double& num1, double& num2, char& operation, double* ans)
    {
        switch(operation)
        {
            case '+' :
                *ans = num1 + num2;
                break;
            case '-' :
                *ans = num1 - num2;
                break;
            case '*' :
                *ans = num1 * num2;
                break;
            case '/' :
                *ans = num1 / num2;
                break;
        }
    }
}