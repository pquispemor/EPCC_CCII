/*
Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo enc
*/
#include <iostream>
using namespace std;

bool busqueda (int num [8], int x){
	for (int i=0; i < 8; i++){
		if(num[i] == x){
			return true;
		}	
	}
	return false;
}

int main(){
	int num[8];
	int x;
	cout << "Ingrese 8 numeros : \n";
	for (int i=0; i < 8; i++){
		cin >> num[i];
	}
	cout << "Ingrese el numero que desea buscar: \n";
	cin >> x;
	if (busqueda(num, x) == true)
		cout << "\nEl numero si esta";
	else
		cout << "\nEl numero no esta";
	
	return 0;
}


