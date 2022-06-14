#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <cstring>
#include "Punto.h"
using namespace std;

class Robot
{
private:
    Punto coordenada;
    char dir;
public:
    Robot(int,int,char);
    void setDir(char);
    char getDir();
    void robotMov(char[]);
    ~Robot();
};

Robot::Robot(int x, int y, char dir): coordenada(x,y){
    this->dir = dir;
}

void Robot::setDir(char dir){
    this->dir = dir;
}
char Robot::getDir(){
    return this->dir;
}


void Robot::robotMov(char cadena[]){
    int aux = 0;
    int x = coordenada.getX();
    int y = coordenada.getY();
    int tam = strlen(cadena);
    char dir = getDir();
    for(int i=0; i<tam; i++){
        if(cadena[i]=='A'){
            if(dir=='N')
                y++;
            else if(dir=='O')
                x--;
            else if(dir=='S')
                y--;
            else if(dir=='E')
                x++;
        }
        else if(cadena[i]=='I'){
            if(dir=='N')
                dir = 'O';
            else if(dir=='O')
                dir = 'S';
            else if(dir=='S')
                dir = 'E';
            else if(dir=='E')
                dir = 'N';
        }
        else if(cadena[i]=='D'){
            if(dir=='N')
                dir = 'E';
            else if(dir=='O')
                dir = 'N';
            else if(dir=='S')
                dir = 'O';
            else if(dir=='E')
                dir = 'S';
        }
        else{
            cout << "La cadena tiene caracteres invalidos\n";
            aux = 1;
            break;
        }
    }
    if(aux==0){
        cout << "El robot se encuentra en la coordenada: (" << x << "," << y << ")" <<endl; 
        cout << "El robot apunta al : " << dir;    
    }
    else{
        return;
    }
}


Robot::~Robot(){}

#endif