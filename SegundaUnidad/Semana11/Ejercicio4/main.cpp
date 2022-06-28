#include <iostream>
#include "Nodo.h"
#include "Pila.h"
#include "windows.h"
#include "conio.h"

using namespace std;

int Menu(){
    int opcion;
    do
    {
        cout<<"\tMENU\n";

        cout << " [1] Top" << endl;
        cout << " [2] Pop" << endl;
        cout << " [3] Push" << endl;
        cout << " [4] Clear" << endl;
        cout << " [5] Size" << endl;
        cout << " [6] Full" << endl;
        cout << " [7] Empty" << endl;
        cout << " [8] Imprimir" << endl;
        cout << " [9] Salir" << endl;
        cout<<"Opcion : ";
        cin>>opcion;
        if ((opcion < 1) || (opcion > 9)){
            system("cls");
            cout<<"Opcion invalida\n";
            cout << "\n\nPresione cualquier tecla para continuar...";
            getch();
            system("cls");
        }
    } while ((opcion < 1) || (opcion > 9));
    return opcion;
}

int main(){
    int opcion;
    int tamMax;
    cout << " Indicar el tamMax de la pila: " << endl;
    cin >> tamMax;
    Pila p = Pila(tamMax);
    do
    {
        opcion = Menu();
        system("cls");
        switch (opcion){
            case 1:
                p.top();
                break;
            
            case 2:
                p.pop();
                break;

            case 3:
                int n;
                cout << "Ingrese el nuevo dato :" << endl;
                cin >> n;
                p.push(n);
                break;

            case 4:
                p.clear();
                break;
            case 5:
                p.size();
                break;
            case 6:
                if(p.full()){
                    cout << "La pila esta llena\n";
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                else{
                    cout << "La pila NO esta llena\n";
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                break;
            case 7:
                if(p.empty()){
                    cout << "La pila esta vacia\n";
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                else{
                    cout << "La pila NO esta vacia\n";
                    cout << "\n\nPresione cualquier tecla para continuar..."; 
                }
                break;
            case 8:
                cout << "Pila: " << endl;
                p.imprimir();
                break;
                        
            case 9:
                cout << "Fin" << endl;
                cout << "\n\nPresione cualquier tecla para continuar..."; 
                break;
        }
        getch();
        system("cls");
    } while (opcion != 9);
    

    return 0;
}