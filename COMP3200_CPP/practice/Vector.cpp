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

int Vector::GetX() {
    return mX;
}

int Vector::GetY() {
    return mY;
}

void Vector::SetXY(const int num1, const int num2) {
    mX = num1;
    mY = num2;
}