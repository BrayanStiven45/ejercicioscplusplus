/* Programa 7. Una planta tiene la capacidad para producir desde 0 a 100 computadoras por día. El costo 
fijo diario de la planta son 5.000 dólares, y el costo variable (mano de obra y materiales) para 
producir un computador es 805 dólares.
a) Escriba la función de costo total de producir x computadores en un día.
b) Escriba la función de costo unitario (costo promedio por computador) en un día. */

#include<iostream>

using namespace std;

int main(){
	
	int costo, computadores;
	
// a) Escriba la función de costo total de producir x computadores en un día.
	
	cout<<"Digite el total de computadores realizados en el dia: ";
	cin>>computadores;
	
	costo = 5000 + 805 * computadores;
	
	cout<<"\nEl costo total de porducir "<<computadores<<" computadores en el dia es de: "<<costo<<" dolares";
// final a)

//b) Escriba la función de costo unitario (costo promedio por computador) en un día.

	costo = (5000 + 805 * computadores) / computadores;
	
	cout<<"\n\nEl costo promedio por computador en un dia es de: "<<costo<< " dolares";
	
	
	
	return 0;
}
