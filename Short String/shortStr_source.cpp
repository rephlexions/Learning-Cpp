//
// Created by lefts on 25/08/2016.
//
#include "shortStr_header.h"
using namespace std;

    shortString::shortString(char s[]){
        strcpy(s,my_string);

    }
    shortString::shortString():my_string() {
        cout << "String is empty" << endl;
}

void shortString::getString() {
    cout << "Please enter a string:" << endl;
    cin.getline(my_string, 21);

}

void shortString::showString() {
    cout << my_string << endl;

}

int shortString::checkString() {
    int count;
    for (int i = 0; i < 21; i++) {
        if(my_string[i] == 'a' || my_string[i] == 'A'){
            count++;
        }
    }
    return count;
    }
