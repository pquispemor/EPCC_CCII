#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include "Punto.h"
using namespace std;

class Robot
{
private:
    char cadena;
public:
    Robot();
    Robot(char);
    void setcadena(char);
    char getcadena();
    ~Robot();
};

Robot::Robot(/* args */)
{
}

Robot::~Robot()
{
}

#endif