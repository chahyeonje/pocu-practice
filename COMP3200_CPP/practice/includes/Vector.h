//
// Created by camelcha on 2022-11-14.
//

#ifndef PRACTICE_VECTOR_H
#define PRACTICE_VECTOR_H

#include <iostream>

class Vector {
    friend std::ostream& operator<<(std::ostream& os, const Vector& rhs);

public:
    Vector();
    Vector(double x, double y);
//    Vector(const Vector& other);
    Vector operator+(const Vector& rhs);
    int GetX() const;
    int GetY() const;
    void SetXY(const int num1, const int num2);
    int test() const;
private:
    double mX;
    double mY;
    double mZ;
};///클래스 닫을 때는 세미콜론 붙이자!

void VectorExample();

#endif //PRACTICE_VECTOR_H
