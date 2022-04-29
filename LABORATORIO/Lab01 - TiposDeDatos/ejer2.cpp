/*2.Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).
*/
#include <iostream>
using namespace std;

int main(){
    char nom[10],apM[10];
    string apP;
    cout << "Porfavor ingrese su nombre: ";
    cin >> nom;
    cout << "\nPorfavor ingrese su apellido paterno: ";
    cin >> apP;
    cout<<"\nPorfavor ingrese su apellido materno: ";
    cin >> apM;
    cout << "\nCorre Unsa: "<<nom[0]+apP+apM[0]<<"@unsa.edu.pe";

    return 0;
}
