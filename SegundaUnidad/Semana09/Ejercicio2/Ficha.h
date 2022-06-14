#ifndef FICHA_H
#define FICHA_H
#include <iostream>

using namespace std;

class Ficha
{
private:
    char letra;
    int valor;
public:
    Ficha();
    Ficha(char,int);
    ~Ficha();
    char getLetra();
    void setLetra(char);
    int getValor();
    void setValor(int);
    void imprimir();
};

Ficha::Ficha(/* args */){}

Ficha::Ficha(char letra, int valor){
    this->letra = letra;
    this->valor = valor;
}
char Ficha::getLetra(){
    return letra;
}
void Ficha::setLetra(char letra){
    this->letra = letra;
}

int Ficha::getValor(){
    return valor;
}

void Ficha::setValor(int valor){
    this->valor = valor;
}

void Ficha::imprimir(){
    cout << "Letra: " << getLetra() << ", Valor: " << getValor() << endl;
}

Ficha::~Ficha(){}

#endif


