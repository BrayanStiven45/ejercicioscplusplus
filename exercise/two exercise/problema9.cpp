/* Problema 9. Admitamos que el costo de producci�n de un n�mero x de peri�dicos es:
C(x)= 200.000 + 400x pesos
a) �Cu�l es el costo de producir 30.000 peri�dicos?
b) �Cu�ntos peri�dicos se han producido si el costo total fue de $520.000? */


#include<iostream>

using namespace std;

int main(){
	
	int periodico, costo;
	
//a) �Cu�l es el costo de producir 30.000 peri�dicos?

	periodico = 30000;
	costo = 200000 + 400 * periodico;
	
	cout<<"El costo de producir 30000 periodicos es de: ";
	printf("%c",36);
	cout<<costo<<" pesos";
//final a)

//b) �Cu�ntos peri�dicos se han producido si el costo total fue de $520.000?

	costo = 520000;
	periodico = (costo - 200000) / 400;
	
	cout<<"\n\nSon "<<periodico<< " periodicos para un coto total de $520000";
	
	
	return 0;
}
