//
// Created by lefts on 31/08/2016.
//

#ifndef HOTEL_ESAME_VERS_0_2_HOTEL_HEADER_H
#define HOTEL_ESAME_VERS_0_2_HOTEL_HEADER_H

#include <iostream>
#include <string>
using namespace std;
//head file

class Lista{
private:
    struct Nodo{
        string nome;
        int giorni;
        double costo;
        string data;
        Nodo* next;
    };
    typedef struct Nodo* nodoPtr;

    nodoPtr head;
    nodoPtr curr;
    nodoPtr temp;

public:
    Lista(); //default construcor

    void AddNode(string n, int g, double c, string d);
    void DeleteNode(string n);
    void PrintList();
    double MaxCosto(int g, double c);

};

#endif //HOTEL_ESAME_VERS_0_2_HOTEL_HEADER_H
