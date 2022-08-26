/*Programa 6. Suponga que se espera que un objeto de arte adquirido por $50.000 aumenten su valor a una 
razón constante de $500 por año durante los próximos 40 años.
a) Escriba la función que prediga el valor de la obra de arte en los próximos cuarenta años.
b) ¿Cuál será su valor 31 años después de la fecha de adquisición?
c) ¿Cuántos años transcurren para que la obra de arte tenga un valor de $55.500?*/

#include<iostream>

using namespace std;

int main(){
	
	int anos , valor;
	anos = 40;
//a) Escriba la función que prediga el valor de la obra de arte en los próximos cuarenta años.
	valor = 50000 + 500 * anos;
	cout<<"\n\nResultado1\n";
	printf("El valor que tendra la obra de arte adquirida dentro de 40 a%cos es de: ",164);
	printf("%c",36);
	cout<<valor; 
//final a)

//  b) ¿Cuál será su valor 31 años después de la fecha de adquisición?
	anos = 31;
	valor = 50000 + 500 * anos;
	cout<<"\n\nResultado2\n";
	printf("El valor que tendra la obra de arte adquirida dentro de 31 a%cos es de: ",164);
	printf("%c",36);
	cout<<valor;
//final b)

// c) ¿Cuántos años transcurren para que la obra de arte tenga un valor de $55.500?
	
	anos= (55500 - 50000) / 500;
	
	cout<<"\n\nResultado3\n";
	printf("El tiempo que debe transcurrir para que la obra tenga un valor de $55.500 es de: ");
	cout<<anos;
	printf(" a%cos",164);
//final c)

	return 0;
}
