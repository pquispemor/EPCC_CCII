#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char contra [30];
	char newcontra [30];
	int aux = 0;
	cout << "Por favor ingrese su contraseña: ";
	cin >> contra;
	int tam = strlen(contra);
	do{
		aux=0;
		cout << "Por favor vuelva a ingresar su contraseña: ";
		cin >> newcontra;
		for (int i = 0; i < tam; i++){
			if (contra [i] == newcontra[i])
				aux++;
		}
	}while(aux!=tam);
	return 0;
}
