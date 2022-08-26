/* Problema 9. Admitamos que el costo de producción de un número x de periódicos es:
C(x)= 200.000 + 400x pesos
a) ¿Cuál es el costo de producir 30.000 periódicos?
b) ¿Cuántos periódicos se han producido si el costo total fue de $520.000? */


#include<iostream>

using namespace std;

int main(){
	
	int periodico, costo;
	
//a) ¿Cuál es el costo de producir 30.000 periódicos?

	periodico = 30000;
	costo = 200000 + 400 * periodico;
	
	cout<<"El costo de producir 30000 periodicos es de: ";
	printf("%c",36);
	cout<<costo<<" pesos";
//final a)

//b) ¿Cuántos periódicos se han producido si el costo total fue de $520.000?

	costo = 520000;
	periodico = (costo - 200000) / 400;
	
	cout<<"\n\nSon "<<periodico<< " periodicos para un coto total de $520000";
	
	
	return 0;
}
