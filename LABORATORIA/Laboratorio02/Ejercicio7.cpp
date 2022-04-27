#include <iostream>
using namespace std;

int main(){
	int nota, prom = 0;
	int n;
	cout << "Por favor ingresar la cantidad de estudiantes : ";
	cin >> n;
	for (int i=0; i < n; i++){
		cout << "Por favor ingrese las notas del " << i+1 <<"° Estudiante: \n";
		for (int j=0; j < 3; j++){
			cin >> nota;
			prom += nota;
		}
		cout << "El promedio del " << i+1 <<"° Estudiante es: " << prom/3 << endl; 
	}
	return 0;
}
