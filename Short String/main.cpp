/*
 * program that counts the number of occurence of letter 'A' in a given string
 */
#include "shortStr_header.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    shortString stringa;
    stringa.getString();
    cout << stringa.checkString() << endl;
    stringa.showString();



    return 0;
}
