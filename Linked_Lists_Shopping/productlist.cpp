//
// Created by lefts on 24/01/2017.
//
#include "productlist.h"
using namespace std;

ProductList::ProductList() {
    head = NULL;
    size = 0;
    cout << "Benvenuto su Amazon.it." << endl;
}

void ProductList::addToHead(char nome[], int codice, int unita, double prezzo) {
    PtrNodo newNodo = new Product(nome,codice,unita,prezzo);
    if(head == NULL){
        head = newNodo;
    }
    else{
        newNodo->next = head;
        head = newNodo;
    }
    size++;
}

void ProductList::deleteNode(char nome[]) {
    if(head == NULL){
        cout << "Carello vuoto \n";
    } else{
        PtrNodo curr = head;
        PtrNodo prev = NULL;

        //scandisci la lista finche non trovi il nodo da eliminare
        while(curr != NULL){
            if(curr->nome == nome){
                break;
            } else{
                prev = curr;
                curr = curr->next;
            }
        }
        if(curr == NULL){
            cout << "Il prodotto " << nome << " non esiste o e' stato gia' eliminato" << endl;
        } else{
            if(head == curr){
                head=head->next;
            } else{
                prev->next = curr->next;
            }
            delete curr;
            size--;
        }
    }
}

void ProductList::printList() {
    PtrNodo iterr = head;
    while(iterr != NULL){
        cout << *iterr << endl;
        iterr=iterr->next;
    }
}