/*7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.
*/
#include <iostream>
using namespace std;

int main (){
	int n1,n2;
	cout << "n1? = ";
	cin >> n1;
	cout << "n2? = ";
	cin >> n2;
	if (n1 % n2 == 0)
		cout << n2 << " es divisor de " << n1;
	else if(n2 % n1 == 0)
		cout << n1 << " es divisor de " << n2;
	else
		cout << "No son divisores";
	
}
