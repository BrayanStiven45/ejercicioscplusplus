/*Problema 12. Escribir una función que calcule el número de horas, minutos y segundos que hay en N segundos.

Ejemplos En 3601 segundos equivale 1 hora 0 minuto 1 segundo*/

#include<iostream>

using namespace std;

int main(){
	
	int hora, minuto, segundos1, segundos;
	
	cout<<"Digite los segundos a convertir: ";
	cin>>segundos1;
	
	segundos = segundos1;
	
	hora = segundos / 3600;
	segundos = segundos - 3600 * hora;
	minuto = segundos / 60;
	segundos = segundos - 60 * minuto;
	
	cout<<endl;
	cout<<segundos<<"segundos es equivalente a "<< hora<<" horas "<<minuto<<" minutos "<<segundos<<" segundos";

	
	
	
	
	return 0;
}
