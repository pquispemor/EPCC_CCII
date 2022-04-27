#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "n?: ";
	cin >> n;
	for (int i=0; i < 13; i++){
		cout << n <<"x"<< i <<" : " << n*i << endl;
	}
	return 0;
}
