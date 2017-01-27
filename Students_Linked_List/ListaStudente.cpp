//
// Created by lefts on 07/01/2017.
//
#include "ListaStudente.h"
using namespace std;

ListaStudenti::ListaStudenti():head(nullptr), size(0) {}

void ListaStudenti::addToHead(const std::string &nome, int eta, double media) {
    PtrNodo newNodo = new Studente(nome,eta,media);
    if(head == nullptr){
        head = newNodo;
    }
    else{
        newNodo->next = head;
        head = newNodo;
    }
    ++size;
}

void ListaStudenti::printList() {
    PtrNodo it = head;
    while( it!= nullptr){
        cout << *it << endl;
        it= it -> next;
    }
}

void ListaStudenti::deleteNode(const std::string &nome) {
    //caso 1:lista vuota
    if(head == nullptr){
        cout << "Lista vuota \n";
    }
    else {
        PtrNodo curr = head;
        PtrNodo previous = nullptr;

        //scandisci la lista finche trovi il nodo da eliminare
        while (curr != nullptr){
            if (curr->nome == nome)
                break;
            else {
                previous = curr;
                curr = curr ->next;
            }
        }
        //case 2: il nome non esiste sulla lista
        if(curr == nullptr){
            cout << "Lo studente con il nome " << nome << " non esiste" << endl;
        }
        else{
            if(head == curr){//elimina il primo nodo
                head = head->next;
            }
            else{
                previous->next = curr -> next;
            }
            delete curr;
            --size;
        }

    }

}
