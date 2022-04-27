#include <iostream>
using namespace std;

int main (){
	int n;
	int cont, fibo, a = 0, b = 0;
	cout << "n?: ";
	cin >> n;
	while(cont < n){
		fibo = a + b;
		cout << fibo << endl;
		cont ++;
		a = b;
		b = fibo;
		if (a == 0){
			b++;
			cout << 1 << endl;
			cont ++;
		}
	}

	return 0;
}
