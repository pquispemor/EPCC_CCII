#ifndef SCRABBLE_H
#define SCRABBLE_H

#include <iostream>
#include <random>
#include "Ficha.h"
using namespace std;

class Scrabble
{
private:
    string nombre;
    vector<Ficha> fichas;
public:
    Scrabble();
    ~Scrabble();
    string getNombre();
    void setNombre(string);
    void generarFichas(int);
    void MostrarDatos(int,int);
};

Scrabble::Scrabble(){
}

string Scrabble::getNombre(){
    return this->nombre;
}

void Scrabble::setNombre(string nombre){
    this->nombre = nombre;
}

void Scrabble::generarFichas(int n_){
    int n = n_;
    random_device rd;
    mt19937 gen(rd());
    for (int i=0; i<7*n; i++){
        uniform_int_distribution<char> scrabbleLetra('A','Z');
        uniform_int_distribution<> scrabbleValor(1,10);
        Ficha f = Ficha(scrabbleLetra(gen),scrabbleValor(gen));
        fichas.push_back(f);
    }
}

void Scrabble::MostrarDatos(int indice, int njugadores){
    int n = indice*7;
    int n_ = njugadores;
    cout << "Nombre del Jugador: " << getNombre() << endl;
    cout << "Fichas: " << endl;
    generarFichas(n_);
    int cont = 0;
    while(cont < 7){
        fichas[n].imprimir();
        n++;
        cont++;
    }
}

Scrabble::~Scrabble(){}

#endif