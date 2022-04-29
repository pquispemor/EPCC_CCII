#include <iostream>
using namespace std;

int main(){
    char fecha[7];
    int hora;
    int minutos;
    int addminutos;
    cout<<"Ingresar hora del dia (por ejemplo 12:25pm):\n";
    cin>>fecha;
    hora = (fecha[0] - '0')*10 + (fecha[1] - '0');
    minutos = (fecha[3] - '0')*10 + (fecha[4] - '0');
	cout<<"\nMinutos a aumentar : ";
	cin>>addminutos;
	minutos = minutos + addminutos;
	if (minutos < 60){
		if (minutos < 10)
			cout<<"Su nueva hora es : "<<hora<<":0"<<minutos<<" "<<fecha[5]<<fecha[6];
		else
			cout<<"Su nueva hora es : "<<hora<<":"<<minutos<<" "<<fecha[5]<<fecha[6];
	}
	else{
		hora=hora+(minutos/60);
		minutos=minutos%60;
		if(hora > 12){
			if(fecha[5] == 'a')
				if (minutos < 10)
					cout<<"Su nueva hora es : "<<hora%12<<":0"<<minutos%60<<" pm";
				else
					cout<<"Su nueva hora es : "<<hora%12<<":"<<minutos%60<<" pm";
			else
				if (minutos < 10)
					cout<<"Su nueva hora es : "<<hora%12<<":0"<<minutos%60<<" am";
				else
					cout<<"Su nueva hora es : "<<hora%12<<":"<<minutos%60<<" am";
		}
		else{
			if (minutos < 10)
				cout<<"Su nueva hora es : "<<hora<<":0"<<minutos<<" "<<fecha[5]<<fecha[6];
			else
				cout<<"Su nueva hora es : "<<hora<<":"<<minutos<<" "<<fecha[5]<<fecha[6];	
		}
	}
    return 0;
}
