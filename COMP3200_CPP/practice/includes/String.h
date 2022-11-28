//
// Created by camelcha on 2022-10-31.
//
#ifndef PRACTICE_STRING_H
#define PRACTICE_STRING_H
#include <iostream>

namespace samples
{
    class String
    {
    public:
        String(const char* str);
        String(const String& str);
        ~String();

    private:
        char* mString;
        size_t mSize;
    };

    void StringExample();
}
#endif //PRACTICE_STRING_H
