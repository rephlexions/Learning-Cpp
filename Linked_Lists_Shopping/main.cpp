#include <iostream>
#include "productlist.h"
using namespace std;

int main() {
    ProductList* item = new ProductList();
    char nome[maxstr];
    int codice;
    int unita;
    double prezzo;
    char repeat;

    // BEWARE! Buffer Overlow!
    while(true){
        cout << "Inserisci il prodotto che vuoi comprare \n" << endl;
        cin.getline(nome,maxstr);
                cin >> codice >> unita >> prezzo;
        item->addToHead(nome,codice,unita,prezzo);
        cout << "Vuoi ripetere? \n";
        cin >> repeat;
        }
    return 0;
    }