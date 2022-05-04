/*
Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par
*/
#include <iostream>
using namespace std;

int main(){
	int m[5][3];
	int sum;
	for(int i=0; i < 5; i++){
		for(int j=0; j < 3; j++){
			cout << "[" << i+1 << "]" << "[" << j+1 << "] :\n";
			cin >> m[i][j];
		}
	}
	for(int i=0; i < 5; i++){
		for(int j=0; j < 3; j++){
			if (i%2 != 0){
				sum = sum + m[i][j];
			}
		}
	}
	cout << "La suma de filas pares es: " << sum;
	
	return 0;
}
