#include <iostream>
#include "Punto.h"
#include "Robot.h"


using namespace std;

int main(){
    Robot r1 = Robot(0,0,'N');
    char cadena[30];
    cout << "El Robot esta en las coordenadas : (0,0)" << endl;
    cout << "El robot esta aputando al: " << r1.getDir() << endl;
    cout << "------------------------------------------------\n";
    cout << "Movimientos del robot A: Avanzar, I: Izquierda, D: derecha\n";
    cout << "------------------------------------------------\n";
    cout << "Ingrese la cadena con movimientos:\n";
    cin >> cadena;
    r1.robotMov(cadena);



    return 0;
}