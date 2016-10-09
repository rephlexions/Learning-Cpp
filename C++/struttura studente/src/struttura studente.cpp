//============================================================================
// Name        : struttura.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* scrivere un programma che definisce una struct studente, chiede all'utente di inserire
i dati di uno studente e stampa poi il nome dello studente e la media dei suoi voti
*/

#include <iostream>
using namespace std;

struct studente{
	char nome[30];
    char cognome[30];
    char matricola[30];
    double analisi, progr, arch, logica;
    };
double media (studente s);
int main() {
     studente x;
     cout << "Inserisci nome: \n";
     cin >> x.nome;
 	cout << "Cognome: ";
 	cin >> x.cognome;
 	cout << "Matricola: ";
 	cin >> x.matricola;
 	cout << "Voto Programmazione: ";
 	cin >> x.progr;
 	cout << "Voto Architettura: ";
 	cin >> x.arch;
 	cout << "Voto Logica: ";
 	cin >> x.logica;
 	cout << "Voto Analisi Matematica: ";
 	cin >> x.analisi;

 	cout << x.nome << " " << x.cognome << "\n" << x.matricola << "\n";
 	cout << " Media dei voti: \n";
 	cout << media(x);

	return 0;
}
double media (studente s){
	return(s.analisi + s.progr + s.arch + s.logica) /4.0;
}
