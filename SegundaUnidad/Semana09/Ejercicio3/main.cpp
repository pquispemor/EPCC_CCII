#include <iostream>
#include <random>
#include <sstream>
#include <vector>
#include "Robot.h"

using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());
    vector<Robot> robots;
    string nombre;
    int nRobots;
    cout << "Indicar numero de Robots: " << endl;
    cin >> nRobots;
    int cont = 0;
    for(int i = 0; i < nRobots; i++){
        Robot r = Robot();
        uniform_int_distribution<char> robotLetra('A','Z');
        uniform_int_distribution<> robotNumero(0,999);
        stringstream ss{};
        ss << robotLetra(gen) <<  robotLetra(gen) << robotNumero(gen);
        nombre = ss.str();
        for(int j = 0; j < i; j++){  
            if(robots[j].getNombre() == nombre) //*Verificar nombres repetidos
            cont++;
        }
        if(cont == 0){
           r.setNombre(nombre);
           robots.push_back(r); 
        }
        else{
            i--;
        }
    }
    for(int i = 0; i < nRobots; i++){
        cout << "Robot " << i+1 << " -> Nombre : " << robots[i].getNombre() << endl;
    }
    cout << "Nombres Repetidos : " << cont << endl;

    return 0;
}
