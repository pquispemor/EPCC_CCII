/*
Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma
*/
#include <iostream>
using namespace std;

int main(){
	int m[3][3];
	int sum[]={0,0,0};
	int mayor = 0;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << "[" << i+1 << "]" << "[" << j+1 << "] :\n";
			cin >> m[i][j];
		}
	}
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			sum[i] = sum[i] + m[i][j];
		}
	}
	for (int i=0; i < 3; i++){
		cout << "La suma de la fila " << i+1 << " es: " << sum[i] << endl;	
	}
	
	for(int i=0; i < 3; i++){
		if (sum[i] > mayor){
			mayor = sum[i];
		}
	}

	cout << "La suma mayor es: " << mayor;
	
	return 0;
}
