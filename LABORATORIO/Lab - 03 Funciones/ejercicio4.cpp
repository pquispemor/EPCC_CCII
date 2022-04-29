/*Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/
#include <iostream>
using namespace std;

bool esprimo (int i){
	int aux = 0;
	for (int j = 1; j <= i; j++){
		if (i % j == 0)
			aux++;
	}
	if (aux == 2)
		return true;
	else
		return false;
}

int main (){
	int x;
	cout << "x?: ";
	cin >> x;
	for (int i = 1; i <= x; i++){
		if (esprimo(i) == true){
			cout << i << endl;
		}
	}
	
	return 0;
}
