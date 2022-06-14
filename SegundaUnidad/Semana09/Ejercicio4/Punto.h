#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
using namespace std;

class Punto
{
private:
    int x,y;
public:
    Punto(int, int);
    ~Punto();
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void imprimirPunto();

};

Punto::Punto(int x, int y)
{
    this->x = x;
    this->y = y;
}

Punto::~Punto()
{
}

void Punto::setX(int x){
    this->x = x;
}

int Punto::getX(){
    return this->x;
}

void Punto::setY(int y){
    this->y = y;
}

int Punto::getY(){
    return this->y;
}

#endif