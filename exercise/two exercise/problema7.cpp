/* Programa 7. Una planta tiene la capacidad para producir desde 0 a 100 computadoras por d�a. El costo 
fijo diario de la planta son 5.000 d�lares, y el costo variable (mano de obra y materiales) para 
producir un computador es 805 d�lares.
a) Escriba la funci�n de costo total de producir x computadores en un d�a.
b) Escriba la funci�n de costo unitario (costo promedio por computador) en un d�a. */

#include<iostream>

using namespace std;

int main(){
	
	int costo, computadores;
	
// a) Escriba la funci�n de costo total de producir x computadores en un d�a.
	
	cout<<"Digite el total de computadores realizados en el dia: ";
	cin>>computadores;
	
	costo = 5000 + 805 * computadores;
	
	cout<<"\nEl costo total de porducir "<<computadores<<" computadores en el dia es de: "<<costo<<" dolares";
// final a)

//b) Escriba la funci�n de costo unitario (costo promedio por computador) en un d�a.

	costo = (5000 + 805 * computadores) / computadores;
	
	cout<<"\n\nEl costo promedio por computador en un dia es de: "<<costo<< " dolares";
	
	
	
	return 0;
}
