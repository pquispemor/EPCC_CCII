#include <iostream>
using namespace std;

int main(){
	int n, aux=1;
	cout << "Por favor ingresar un numero entero: ";
	cin >> n;
	for (int i=0; i < n; i++){
		for(int j=0; j < aux; j++){
			cout << "*";
		}
		cout << endl;
		aux++;
	}
	
	return 0;
}
