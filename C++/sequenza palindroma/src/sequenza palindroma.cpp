//============================================================================
// Name        : sequenza.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 *  scrivere un programma che prende in input una
sequenza di cifre positive, a meno di uno 0 come
elemento centrale e dice se la sequenza è palindroma
oppure no. Si assuma che le lunghezze delle sequenze
prima dello 0 e dopo lo 0 siano uguali.
se capisci bene questo esercizio sei padrone della ricorsione!
 */
bool palindroma(){
    bool pal;
    int m, n;
    cin >> m;
    if (m==0) return(true);
    else{
    	pal = palindroma();
    	cin >> n;
    	pal = palindroma();
    	return((m==n)&& pal);
    }
}
int main() {
    cout << palindroma();
	return 0;
}
