/*Programa 6. Suponga que se espera que un objeto de arte adquirido por $50.000 aumenten su valor a una 
raz�n constante de $500 por a�o durante los pr�ximos 40 a�os.
a) Escriba la funci�n que prediga el valor de la obra de arte en los pr�ximos cuarenta a�os.
b) �Cu�l ser� su valor 31 a�os despu�s de la fecha de adquisici�n?
c) �Cu�ntos a�os transcurren para que la obra de arte tenga un valor de $55.500?*/

#include<iostream>

using namespace std;

int main(){
	
	int anos , valor;
	anos = 40;
//a) Escriba la funci�n que prediga el valor de la obra de arte en los pr�ximos cuarenta a�os.
	valor = 50000 + 500 * anos;
	cout<<"\n\nResultado1\n";
	printf("El valor que tendra la obra de arte adquirida dentro de 40 a%cos es de: ",164);
	printf("%c",36);
	cout<<valor; 
//final a)

//  b) �Cu�l ser� su valor 31 a�os despu�s de la fecha de adquisici�n?
	anos = 31;
	valor = 50000 + 500 * anos;
	cout<<"\n\nResultado2\n";
	printf("El valor que tendra la obra de arte adquirida dentro de 31 a%cos es de: ",164);
	printf("%c",36);
	cout<<valor;
//final b)

// c) �Cu�ntos a�os transcurren para que la obra de arte tenga un valor de $55.500?
	
	anos= (55500 - 50000) / 500;
	
	cout<<"\n\nResultado3\n";
	printf("El tiempo que debe transcurrir para que la obra tenga un valor de $55.500 es de: ");
	cout<<anos;
	printf(" a%cos",164);
//final c)

	return 0;
}
