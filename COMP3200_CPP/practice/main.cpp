#include <iostream>
#include "Swap.h"
#include "Mystruct.h"
#include "String.h"
#include "Calculater.h"
#include "Calculator.h" ///class
#include "Vector.h"

int main() {

//    samples::MyStructExample();
//    samples::SwapExample();
//    samples::StringExample();
//    samples::CalculaterExample();
//    Calculator testCal;
//    testCal.ExeCal();
    Vector* list = new Vector[10];
    for(int i=0; i<10 ; i++){
        std::cout <<" list[" << i << "] , " << "size :" << sizeof(list[i]) << ", address : " << &list[i] <<std::endl; ;
    }///Vecotr 클래스는 int형 변수 mX,mY 를 가짐, 따라서 8바이트의 공간을 할당함

    Vector** array = new Vector*[10];
    for(int i=0; i<10 ; i++){
        std::cout <<" array[" << i << "] , " << "size :" << sizeof(array[i]) << ", address : " << &array[i] <<std::endl; ;
    }
    list[1].SetXY(10,10);
    std::cout << array[1]->GetX() << std::endl;
    array[1] = &list[1];
    std::cout << &array[1] << std::endl;

    return 0;
}
