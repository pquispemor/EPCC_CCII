#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <random>
#include <sstream>
using namespace std;


class Robot
{
private:
    string nombre;
public:
    Robot();
    ~Robot();
    string getNombre();
    void setNombre(string);
    //*! string generarNombre(); estaba creando un metodo para generar el nombre pero 
    //*! tengo problemas al enviar la variable gen - mt19937 gen(rd()); del main a la clase
};
Robot::Robot()
{
}

Robot::~Robot()
{
}

string Robot::getNombre(){
    return nombre;
}

void Robot::setNombre(string nombre){
    this->nombre = nombre;
}

#endif