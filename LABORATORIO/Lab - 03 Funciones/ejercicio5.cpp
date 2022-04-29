/* Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.
*/
#include <iostream>
using namespace std;

int numero (int x){
	do{
		cout << "Por favor ingresar un numero del 0 al 100 : ";
		cin >> x;		
	}while(x > 100);
	return x;
}

int espar(int x){
	if (x % 2 == 0)
		cout << "\n x es Par";
	else{
		cout << "\n X no es Par";
		do{
			cout << "\n Por favor ingrese un numero par :";
			cin >> x;		
		}while(x % 2 != 0);
	}
	return x;	
}

int sumai(int x){
	int sum = 0;
	for (int i = 1; i <= x; i++){
		if (i % 2 != 0)
			sum = sum + i;	
	}
	return sum;
}

int main(){
	int x;
	x = numero(x);
	x = espar(x);
	cout << "\nLa suma de Impares de 0 a x es: " << sumai(x);
	
	return 0;
}
