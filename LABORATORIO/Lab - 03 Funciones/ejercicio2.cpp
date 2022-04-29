/*Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.*/

#include <iostream>
using namespace std;

void bisiesto(int year){
	if (year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0)
				cout << "Es Bisiesto";
			else
				cout << "No es Bisiesto";	
		}
		else
			cout << "Es Bisiesto";
	}
	else
		cout << "No es Bisiesto";
}

int main(){
	int year;
	cout << "Por favor ingresar el año: ";
	cin >> year;
	cout << "\nEl año :";
	bisiesto(year);
	
	return 0;
}
