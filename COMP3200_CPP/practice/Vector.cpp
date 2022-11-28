//
// Created by camelcha on 2022-11-14.
//

#include "Vector.h"
Vector::Vector()
    : mX(0)
    , mY(0)
{
}

Vector::Vector(double x, double y)
    : mX(x)
    , mY(y)
{
}

Vector Vector::operator+(const Vector &rhs)
{
    Vector sum;
    sum.mX = mX + rhs.mX;
    sum.mY = mY + rhs.mY;
    return sum;
}

int Vector::GetX() const
{
    return mX;
}

int Vector::GetY() const
{
    return mY;
}

void Vector::SetXY(const int num1, const int num2)
{
    mX = num1;
    mY = num2;
}

int Vector::test() const {
    double a;
    double b;
    a = mX;
    b = mY;
    return a+b;
}/// 지역 변수를 만들어서 하는건 가능, 멤버 변수를 바꿀수 없다는 말

void VectorExample()
{
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

    Vector v1(1.0, 2.0);
    Vector v2(3.0, 4.0);

    Vector summation = v1 + v2;
    std::cout << summation << std::endl;

    Vector copyV(v1);
    std::cout << "copyV : " << copyV << std::endl;

}

std::ostream& operator<<(std::ostream& os, const Vector& rhs)
{
    os << rhs.mX << ", " << rhs.mY;
}