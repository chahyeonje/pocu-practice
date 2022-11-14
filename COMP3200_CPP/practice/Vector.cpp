//
// Created by camelcha on 2022-11-14.
//

#include "Vector.h"
Vector::Vector() {
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