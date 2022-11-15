//
// Created by camelcha on 2022-11-14.
//

#ifndef PRACTICE_VECTOR_H
#define PRACTICE_VECTOR_H


class Vector {
public:
    Vector();
    Vector(double x, double y);
    int GetX();
    int GetY();
    void SetXY(const int num1, const int num2);
private:
    double mX;
    double mY;
    double mZ;
};///클래스 닫을 때는 세미콜론 붙이자!


#endif //PRACTICE_VECTOR_H
