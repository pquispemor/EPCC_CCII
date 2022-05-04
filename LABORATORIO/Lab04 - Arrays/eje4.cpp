/*
Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
*/

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

void Odesc(int n[], int z){
	int aux;
	for (int i=0; i < z; i++){
		for(int j=0; j < z; j++){
			if (n[j] > n[j+1]){
				aux = n[j];
				n[j] = n[j+1];
				n[j+1] = aux;
			}
		}
	}
	cout << "\n Orden Descendente: \n";
	for (int i=z; i > 0; i--){
		cout << n[i] << endl;
	}
}
int main(){
	
	int n[100], z=0;
	for (int i=1; i < 101; i++){
		if (esprimo(i) == true){
			n[z] = i;
			z++;
		}
	}
	Odesc(n, z);
	return 0;	
}
