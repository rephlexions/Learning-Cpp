#include <iostream>
#include "hotel_header.h"

using namespace std;

int main() {
    Lista Clienti;
    char answer;
    string nc;
    int g;
    double c;
    string dat;

    cout << "Inserisci dati cliente. Nome Cognome. Data prenotazione. Numero giorno. Costo della stanza \n";
    getline(cin,nc);
    getline(cin, dat);
    cin >> g;
    cin >> c;

    Clienti.AddNode(nc,g,c,dat);

    getline(cin,nc);
    getline(cin, dat);
    cin >> g;
    cin >> c;

    Clienti.AddNode(nc,g,c,dat);

    Clienti.PrintList();

    return 0;
}