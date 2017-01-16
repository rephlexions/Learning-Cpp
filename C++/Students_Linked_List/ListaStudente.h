//
// Created by lefts on 07/01/2017.
//

#ifndef LISTA_STUDENTI_LISTASTUDENTE_H
#define LISTA_STUDENTI_LISTASTUDENTE_H

#include "studente.h"

class ListaStudenti{
public:
    ListaStudenti();

    void addToHead(const std::string&m, int, double);
    void deleteNode(const std::string&);
    void printList();

private:
    PtrNodo head;
    int size;

};

#endif //LISTA_STUDENTI_LISTASTUDENTE_H
