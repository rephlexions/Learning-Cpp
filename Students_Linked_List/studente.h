//
// Created by lefts on 07/01/2017.
//

#ifndef LISTA_STUDENTI_STUDENTE_H
#define LISTA_STUDENTI_STUDENTE_H

#include <iostream>
#include <string>

//classe nodo
class Studente{
    friend class ListaStudenti;
    friend std::ostream&operator<<(std::ostream& os, const Studente& c);

public:
    //default constructor
    Studente()= default;
    //constructor
    Studente(std::string n="Nessuno", int e=0, double m=0);
    //deconstroctur
    ~Studente();

private:
    std::string nome;
    int eta;
    double media;
    Studente* next;
};
typedef Studente* PtrNodo;

#endif //LISTA_STUDENTI_STUDENTE_H
