/*
9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.
*/
#include <iostream>
using namespace std;

int main(){
    int datos[9];
    int sum = 0;
    cout<<"Porfavor ingresar 10 numeros positivos o negativos \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> datos[i];
        if (datos[i] < 0) {
            sum = sum + datos[i];
        }
    }
    cout << "la suma de negativos es: " << sum;
    return 0;
}
