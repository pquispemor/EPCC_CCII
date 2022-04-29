/*Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.*/
#include <iostream>
using namespace std;

void edad (char f_a[], char f_n[]){
	int mes = 0, anio = 0;
	int aactual = (f_a[6] - '0') * 1000 + (f_a[7] - '0') * 100 + (f_a[8] - '0') * 10 + (f_a[9] - '0');
	int anacimiento= (f_n[6] - '0') * 1000 + (f_n[7] - '0') * 100 + (f_n[8] - '0') * 10 + (f_n[9] - '0');
	int mact = (f_a[3] - '0') * 10 + f_a[4] - '0';
	int mnac = (f_n[3] - '0') * 10 + f_n[4] - '0';
	int dact = (f_a[0] - '0') * 10 + f_a[1] - '0';
	int dnac = (f_n[0] - '0') * 10 + f_n[1] - '0';
	int diat = 31 - dnac;
	int mest = 12 - mact;
	if (diat + dact > 31){
		diat = diat % 31;
		mes = 1;
	}
	if (mest + mact > 12){
		mest = mest % 12;
		anio = 1;
	}
	cout << "Usted tiene : " << (aactual - anacimiento)-1 + anio << " años, " << (mest) + mes<< "  meses, " << diat << " dias." ;
}
int main (){
	char f_a[20]; // fecha actual
	char f_n[20]; // fecha nacimiento
	cout << "Ingresar la fecha actual ejem: 28/04/2022 : ";
	cin >> f_a;
	cout << "Ingresar la fecha de nacimiento ejem: 27/06/1997 : ";
	cin >> f_n;
	edad(f_a,f_n);
	
	return 0;
}

