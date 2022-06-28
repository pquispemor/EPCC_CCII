#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Nodo.h"

using namespace std;

class Pila
{
    
public:
    Nodo* inicio;
    int tam;
    int tamMax;
    Pila(int);
    ~Pila();
    void top();
    void pop();
    void push(int);
    void clear();
    void size();
    bool full();
    bool empty();
    void imprimir();
};

Pila::Pila(int tamMax){
    this->tamMax = tamMax;
    this->tam = 0;
    this->inicio = NULL;
}

Pila::~Pila(){}

void Pila::top(){
    if (empty() == true){
        cout << "La pila esta vacia\n";
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
    else{
        Nodo* aux1 = this->inicio;
        Nodo* aux2 = NULL;
        while (aux1->siguiente != NULL)
        {
            aux2 = aux1;
            aux1 = aux1->siguiente;
        }
        cout << "Ultimo elemento : " << aux1->dato << endl;
        cout << "\n\nPresione cualquier tecla para continuar...";
    }
}

void Pila::pop(){
    if (empty() == true){
        cout << "La pila esta vacia\n";
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
    else{
        Nodo* aux1 = this->inicio;
        Nodo* aux2 = NULL;
        while (aux1->siguiente != NULL)
        {
            aux2 = aux1;
            aux1 = aux1->siguiente;
        }
        aux2->siguiente = NULL;
        cout << "Elemento eliminado correctamente \n";
        delete aux1;
        this->tam--;
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
}

void Pila::push(int n){
    if (full() == true){
        cout << "La pila ya esta llena, ya no se pueden ingresar datos ";
        cout << "\n\nPresione cualquier tecla para continuar...";
    }
    else{
        Nodo* nuevo = new Nodo();
        nuevo->dato = n;
        nuevo->siguiente = this ->inicio;
        this->inicio = nuevo;
        cout << "Elemento = " << n << " insertado correctamente" << endl;
        cout << "\n\nPresione cualquier tecla para continuar...";
        this->tam++;
    }
}

void Pila::clear(){
    if (empty() == true){
        cout << "La pila ya esta vacia\n";
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
    else{
        for(int i=0; i<this->tam; i++){
            Nodo* aux = this->inicio;
            if(aux != NULL){
                this->inicio = aux->siguiente;
                delete aux; 
            }
        }
        cout << "Se eliminaron todos los elementos, ahora la pila esta vacia" << endl;
        cout << "\n\nPresione cualquier tecla para continuar..."; 
    }
}

void Pila::size(){
    cout << "La pila tiene " << this->tam << " Elementos\n";
    cout << "\n\nPresione cualquier tecla para continuar...";
}

bool Pila::full(){
    if(tam == tamMax)
        return true;
    else
        return false;
}

bool Pila::empty(){
    Nodo* aux = this->inicio;
    if(aux == NULL)
        return true;
    else
        return false;

}

void Pila::imprimir(){
    Nodo* aux = this->inicio;
    int cont = 1;
    while(aux != NULL){
        cout << "[" << cont << "] Elemento: " << aux->dato << endl;
        aux = aux->siguiente;
        cont++;
    }
    cout << "\n\nPresione cualquier tecla para continuar...";
}

#endif