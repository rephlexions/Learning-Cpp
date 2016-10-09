//============================================================================
// Name        : fibonacci.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int x, n0, n1, n2;
    cin >> x;
    n0=1;
    n1=1;
    n2=1;
    while (x-2>=0){
    	n2=n1 + n0;
    	n0=n1;
    	n1=n2;
    	x=x-1;
    }
    cout << n2;
	return 0;
}
