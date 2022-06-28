
#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class Nodo
{

public:
    int dato;
    Nodo *siguiente;
    Nodo();
    Nodo(int);
    ~Nodo();
};

Nodo::Nodo(/* args */){
    this->dato = 0;
    this->siguiente = NULL;
}

Nodo::Nodo(int dato){
    this->dato = dato;
    this->siguiente = siguiente;
}

Nodo::~Nodo(){}

#endif