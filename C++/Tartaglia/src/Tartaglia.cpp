//============================================================================
// Name        : Tartaglia.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){

	// uso double per trattare numeri interi piu grandi
	double n_fatt, k_fatt, n_minus_k_fatt;
	int n, k;
	k = 0; cin >> n;

	// Righe a partire da n=0
	for(int current_n = 0; current_n <= n; current_n++){
		// Calcolo n! e inizializzo n_fatt alla prima iterazione
		if (current_n ==0) n_fatt=1 ; else n_fatt = n_fatt * current_n ;

		// Debbo tabulare di n - current_n posizioni
		for (int s=0; s<n-current_n; s++) cout << "\t";

		// Calcolo k! e inizializzo k_fatt alla prima iterazione
		// ad ogni iterazione moltiplico k_fatt per il valore di current_k
		for (int current_k = 0; current_k <= k; current_k++){
			if (current_k == 0) k_fatt = 1 ; else k_fatt = k_fatt * current_k ;

			// Calcolo (n-k)! e inizializzo n_minus_k_fatt alla prima iterazione
			for (int current_nk = 0 ; current_nk <= current_n - current_k; current_nk++)
				if (current_nk == 0) n_minus_k_fatt = 1;
				else n_minus_k_fatt = n_minus_k_fatt * current_nk;

			// Stampa numero di Combinazioni n su k
			// poi bisogna saltare al prossimo tabulatore che bisogna
			// lasciare vuoto e poi risaltare al successivo: due tabulatori
			cout << n_fatt/(k_fatt*n_minus_k_fatt) << "\t\t";
			}
		cout << endl;
		k = k + 1;
	}

	return 0;
}
