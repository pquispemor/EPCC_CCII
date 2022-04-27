#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char palabra [20];
	cout << "Por favor ingrese su palabra: ";
	cin >> palabra;
	int tam = strlen(palabra);
	for(int i = tam-1 ; i >= 0; i--){
		cout << palabra[i];
	}
	return 0;
}
