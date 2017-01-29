#include <iostream>
#include "productlist.h"
using namespace std;

int main() {
    ProductList* item = new ProductList();
    char nome[maxstr];
    int codice;
    int unita;
    double prezzo;

    cout << "Inserisci il prodotto che vuoi comprare \n" << endl;
    cin >> nome >> codice >> unita >> prezzo;
    item->addToHead(nome, codice, unita, prezzo);
    cin >> nome >> codice >> unita >> prezzo;
    item->addToHead(nome, codice, unita, prezzo);

    item->printList();

    return 0;
    }