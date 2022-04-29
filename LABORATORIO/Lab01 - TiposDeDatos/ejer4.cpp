#include <iostream> 
#include <time.h>
using namespace std;

int main() { 
	int difmin;
	int hora;
	int minuto;
	time_t tiempoahora;
	time(&tiempoahora);
	struct tm *mitiempo = localtime(&tiempoahora);
	cout<<mitiempo->tm_hour<<":"<<mitiempo->tm_min;
	hora = mitiempo->tm_hour;
	minuto=mitiempo->tm_min;
	cout<<"\nIndicar minutos a disminuir : ";
	cin>>difmin;
	minuto= minuto - difmin;
	if (minuto> 0){
		cout<<"\n Su hora disminuida es: "<<hora<<":"<<minuto;			
	}
	else{
		cout<<"\n Su hora disminuida es: "<<hora-1-(minuto/60)<<":"<<60-(-minuto);
	}
	return 0;
}
