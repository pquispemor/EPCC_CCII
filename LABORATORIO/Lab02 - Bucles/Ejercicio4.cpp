#include <iostream> 
using namespace std;

int main(){
	int x, y;
	cout << "Por favor ingrese 2 numero X y Y tal que X < Y: \n";
	cin >> x;
	cin >> y;
	while(x > y){
		cout << "Por favor ingrese 2 numero X y Y tal que X < Y: \n";
		cin >> x;
		cin >> y;
	}
	int aux = 0, primos = 0;
	int rest = (y -x ) - 1; 
	if (rest > 1){
		while (x != y){
			for (int i = 1; i <= x; i++){
				if (x % i == 0)
					aux++;
			}
			if (aux == 2){
				cout << x << endl;
				x++;
				primos++;
			}
			x++;
			aux=0;
		}
	}
	
	return 0;			
}
