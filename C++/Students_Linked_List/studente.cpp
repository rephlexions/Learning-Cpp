//
// Created by lefts on 07/01/2017.
//
#include "studente.h"
using namespace std;

Studente::Studente(std::string n, int e, double m):
        nome(n), eta(e), media(m) {}

Studente::~Studente() {
    cout << "Lo studente e' stato eliminato" << endl;
}

ostream& operator<<(ostream& os, const Studente& c){
    return os << "Name: " << c.nome
                          << " Età: " << c.eta
                                     << " Media: " << c.media << endl;
}


