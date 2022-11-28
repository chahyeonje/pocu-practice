//
// Created by camelcha on 2022-10-31.
//
//#include <cstring>
#include "String.h"

namespace samples
{

    String::String(const char *str)
//        :mSize(strlen(str)+1)
    {
        mString = new char[mSize];
        memcpy(mString, str, mSize);
    }

    String::String(const String& str)
        :mSize(str.mSize)
    {
        mString = new char[mSize];
        memcpy(mString, str.mString, mSize);
    }

    String::~String()
    {
        delete[] mString;
    }

    void StringExample()
    {
        std::string firstName;
        std::string lastName;
        std::string fullName;
        std::cout << "firstName : " ;
        std::cin >> firstName;
        std::cout << "lastName : " ;
        std::cin >> lastName;
        fullName = firstName + " " + lastName;
        std::cout << fullName << std::endl;
    }
}