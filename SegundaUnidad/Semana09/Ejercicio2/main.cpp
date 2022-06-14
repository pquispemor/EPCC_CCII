#include <iostream>
#include <vector>
#include "Ficha.h"
#include "Scrabble.h"
using namespace std;

int main(){
    int njugadores;
    string nombre;
    char letra;
    int valor;
    vector<Scrabble> jugadores;
    cout << "Por favor indique el numero de jugadores" << endl;
    cin >> njugadores;
    for(int i=0; i<njugadores; i++){
        cout << " Por favor indique el nombre del jugador : " << i+1 << endl;
        cin.ignore();
        getline(cin, nombre);
        Scrabble j = Scrabble();
        j.setNombre(nombre);
        jugadores.push_back(j);
    }

    for(int i=0; i<njugadores; i++){
        cout << " Jugador : " << i+1 << endl;
        jugadores[i].MostrarDatos(i,njugadores);

    }


    return 0;
}