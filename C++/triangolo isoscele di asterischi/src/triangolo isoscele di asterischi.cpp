//============================================================================
// Name        : triangolo.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	int h, i, j;
	cin >> h ;
	for (i = 0 ; i<=h ; i=i+1){
		for (j = 1 ; j <= (h + i +1); j=j+1)
			if ((j>= 1) && (j <= (h-i))) cout << ' ';
			else cout << '*' ;
		cout << endl ;
	}
	return(0) ;
}

