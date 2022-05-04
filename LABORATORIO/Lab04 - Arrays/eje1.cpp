/*Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.
*/
#include <iostream>
#include <string>
using namespace std;


int main (){
	string nom[3];
	string ape[3];
	string edad[3];
	string dni[3];
	
	cout << "Por favor ingrese la siguiente informacion: \n";
	for(int i=0; i < 3; i++){
		cout <<"\n Persona" << i+1  << ":\n";
		cout << "Nombre:";
		getline(cin, nom[i]);
		cout << "\nApellido:";
		getline(cin, ape[i]);
		cout << "\nEdad:";
		getline(cin, edad[i]);
		cout << "\nDNI:";
		getline(cin, dni[i]);
	}
	for(int i=0; i < 3; i++){
		cout <<"\n Persona" << i+1  << ":\n";
		cout << " Nombre: " << nom[i];
		cout << "\nApellido: " << ape[i];
		cout << "\nEdad: " << edad[i];
		cout << "\nDNI: " << dni[i];
	}	
	
	return 0;
}
