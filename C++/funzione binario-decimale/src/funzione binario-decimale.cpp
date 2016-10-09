//============================================================================
// Name        : funzione.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 *
 *  scrivere una funzione che legge un numero binario da
tastiera e lo stampa in decimale
 */

#include <iostream>
#include <cmath>

using namespace std;

 /* Function to convert binary to decimal.*/
int binario_decimale (int n);

int main() {
	int n;
	cout << "Inserisci un numero binario \n";
	cin >> n;
	cout << binario_decimale (n);

	return 0;
}
int binario_decimale(int n)
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem * pow (2,i);
        ++i;
    }
    return decimal;
}
