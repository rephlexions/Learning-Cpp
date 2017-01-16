#include <iostream>
#include "ListaStudente.h"

using namespace std;


int main() {
    ListaStudenti* pinco = new ListaStudenti();
    string nome;
    int eta;
    double media;

    while(true){
        cout << "Inserisci nome, eta, media del studente: \n";
        cin >> nome >> eta >> media;
        if(nome == "q")
            break;
        pinco->addToHead(nome,eta,media);
    }

    while(true){
        cout << "Inserisci nome da eliminare: \n";
        cin >> nome;
        if(nome == "e")
            break;
        pinco->deleteNode(nome);
        pinco->printList();
    }

    return 0;
}