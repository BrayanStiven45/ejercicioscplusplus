/* Problema 8. El crecimiento de un feto de m�s de 12 semanas de gestaci�n se calcula mediante la funci�n
L(t) =1,53 � t - 6,7 , donde L es la longitud (en cm) y t es el tiempo (en semanas). Calcula la edad de un feto 
cuya longitud es 28 cent�metros.*/

#include<iostream>
using namespace std;

int main(){
	
	double longitud = 28, tiempo;
	
	
	tiempo = (longitud + 6.7) / 1.53;
	
	cout<<"La edad del feto con una longitud de 28cm es de: "<<tiempo<<" semanas";
	
	return 0;
}
