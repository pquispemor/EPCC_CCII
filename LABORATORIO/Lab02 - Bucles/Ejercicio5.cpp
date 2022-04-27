#include <iostream>
#include <limits> //se realizo en clase de teoria
using namespace std;

int main(){
	int min (numeric_limits<int>::max()); //max valor que puede tomar un entero
    int max (numeric_limits<int>::min()); //min valor que puede tomar un entero
	int n, numeros, media=0;
	cout << "Cantidad de numeros: ";
	cin >> n;
	for (int i=0; i < n; i++){
		cin >> numeros;
		if (numeros < min)
            min = numeros;
        if (numeros > max)
            max = numeros;
        media = media + numeros;
	}
	media = media / n;
	cout << "\nEl numero menor es: " << min;	
	cout << "\nEl numero mayor es: " << max;
	cout << "\nLa media es: " << media;
	
	return 0;
}
