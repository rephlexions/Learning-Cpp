//
// Created by lefts on 13/01/2017.
//

#ifndef LINKED_LISTS_SHOPPING_PRODUCT_H
#define LINKED_LISTS_SHOPPING_PRODUCT_H

#include <cstring>
#include <iostream>

const int maxstr = 50;

class Product{
    friend class ProductList;
    friend std::ostream&operator<<(std::ostream& os, const Product& c);

public:
    Product()= default;
    Product(char n[], int c, int u, double p);
    ~Product();

protected:
    char nome[maxstr];
    int codice;
    int unita;
    double prezzo;
    Product* next;
};
typedef Product* PtrNodo;

#endif //LINKED_LISTS_SHOPPING_PRODUCT_H
