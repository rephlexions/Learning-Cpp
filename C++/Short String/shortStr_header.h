//
// Created by lefts on 25/08/2016.
//

#ifndef SHORTSTRING_ESAME_SHORTSTR_HEADER_H
#define SHORTSTRING_ESAME_SHORTSTR_HEADER_H
#include <iostream>
#include <cstring>
#include <cstdlib>

    class shortString{
    public:
        //constructor
        shortString(char s[]);
        shortString();

    void getString();
    void showString();
    int checkString();

    private:
        char my_string[21];
    };

#endif //SHORTSTRING_ESAME_SHORTSTR_HEADER_H
