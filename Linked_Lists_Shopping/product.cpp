//
// Created by lefts on 13/01/2017.
//
#include"product.h"
using namespace std;

Product::Product(char n[], int c, int u, double p)
    :codice(c),unita(u),prezzo(p) {
    strcpy(n,nome);
}

Product::~Product() {
    cout << "Il prodotto e' stato eliminato." << endl;
}

ostream& operator<<(ostream& os, const Product &c){
    return os << "Nome prodotto: " << c.nome
              << " Prezzo: " << c.prezzo
              << " Unita: " << c.unita <<
                                       "Codice:" << c.codice <<  endl;
}


