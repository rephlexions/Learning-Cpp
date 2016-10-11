//
// Created by lefts on 31/08/2016.
//
#include <cstdlib>
#include <iostream>
#include "hotel_header.h"

using namespace std;

Lista::Lista(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void Lista::AddNode(string n, int g, double c, string d) {
    nodoPtr nodo = new Nodo; // creates a new node
    nodo ->next = NULL; //the last node points to nothing
    nodo ->nome = n;
    nodo ->giorni = g;
    nodo ->costo = c;
    nodo ->data = d;

    if(head !=NULL){ // if head points to something it means we have some object in out list
        curr = head; //current pointer now points where header pointer points that is in front
        while(curr ->next !=NULL){ // checks if curr is not on the end of the list
            curr = curr ->next;     //while our current node is not the last one , point it to the next
        }
        curr ->next = nodo; //connects our last node to our new node
    }
    else{
        head = nodo; // if our list was empty, the new node becomes the first node in the list
    }
}

void Lista::DeleteNode(string n) {
    nodoPtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr ->nome != n){//traverse the list until the end or until we found the data we want to delete
        temp = curr;
        curr = curr ->next;
    }
    if(curr == NULL){//if our data doesnt exist in our list
        cout << n << ".Nome inesistente \n";
        delete delPtr; // deletes since we dont ever use it
    }
    else{
        delPtr = curr; //deletion pointer now points to the node we want to delete
        curr = curr -> next; //moves curr to the next node
        temp -> next = curr;//connects the previouse node with the node pointed by curr
        if(delPtr == head){//if we delete the first element connect head to the next element
            head = head->next;
            temp = NULL;
        }
        delete delPtr; // deletes our target node
        cout << "Il nome " << n <<  " e' stato cancellato";
    }
}

void Lista::PrintList() {
    curr = head;
    while(curr != NULL){
        cout << "Nome Cognome: \n" << curr->nome << endl;
        cout << "Giorni: \n" << curr ->giorni << endl;
        cout << "Costo camera: \n" << curr ->costo << endl;
        cout << "Data prenotazione: \n" << curr ->data << endl;

        curr = curr ->next;
    }
}