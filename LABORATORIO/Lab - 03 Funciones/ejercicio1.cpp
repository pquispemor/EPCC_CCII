/*Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).*/

#include <iostream>
using namespace std;


int potencia (int base, int pot){
	int x = 1;
	for (int i=1; i <= pot; i++){
		x = x * base;
	}
	return x;
}

int main (){
	int base, pot;
	cout << "Ingresar base: ";
	cin >> base;
	cout << "\nIngresar potencia: ";
	cin >> pot;
	cout << "\nRespuesta: " << potencia(base,pot);
	
	return 0;
}
