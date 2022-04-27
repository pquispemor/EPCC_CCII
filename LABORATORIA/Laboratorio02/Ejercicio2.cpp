#include <iostream>
using namespace std;

int main(){
	int n=1, cont=1, aux=0;
	while (cont < 51){
		for (int i = 1; i <= n; i++){
			if (n % i == 0)
				aux++;
		}
		if (aux == 2){
			cout << n << endl;
			cont++;
		}
		n++;
		aux=0;
	}
	
	return 0;
}
