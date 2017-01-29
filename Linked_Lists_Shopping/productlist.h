//
// Created by lefts on 13/01/2017.
//

#ifndef LINKED_LISTS_SHOPPING_PRODUCTLIST_H
#define LINKED_LISTS_SHOPPING_PRODUCTLIST_H

#include "product.h"

class ProductList{
public:
    ProductList();

    void addToHead(char nome[], int codice, int unita, double prezzo);
    void deleteNode(char nome[]);
    void printList();

protected:
    PtrNodo head;
    int size;
};


#endif //LINKED_LISTS_SHOPPING_PRODUCTLIST_H
