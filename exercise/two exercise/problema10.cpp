/* Problema 10. Un proyectil se lanza directamente hacia arriba desde el suelo. Despu�s de transcurridos t 
segundos su distancia en metros por encima del suelo est� dada por la funci�n d(t) = 144t -16t^2.
a) �Despu�s de cu�ntos segundos estar� el proyectil a 128 metros del suelo?
b) �En qu� momento toca el suelo el objeto?*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	double distancia, tiempo1, tiempo2;
	
//a) �Despu�s de cu�ntos segundos estar� el proyectil a 128 metros del suelo?

	distancia = 128;
	
	tiempo1 = (144 + sqrt(pow(144,2) - (4 * 16 * distancia))) / (2 * 16);
	tiempo2 = (144 - sqrt(pow(144,2) - (4 * 16 * distancia))) / (2 * 16);
	
	cout<<"El proyectil estara a 128 metros del suelo despues de "<<tiempo1<<" segundos y "<<tiempo2<<" segundos\n";
//final a)

//b) �En qu� momento toca el suelo el objeto?

	distancia = 0;
	
	tiempo1 = (144 + sqrt(pow(144,2) - 4 * 16 * distancia)) / (2 * 16);
	
	cout<<"El objeto toca el suelo despues de "<<tiempo1<<" segundos";

	return 0;
}
