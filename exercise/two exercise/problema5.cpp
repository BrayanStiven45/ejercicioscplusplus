/*Programa 5. Una empresa que fabrica vajillas desechables tiene costos fijos de US $3.000 mensuales, 
y el costo de la mano de obra y del material es de US $50 por vajilla. Determinar la función de costos, 
es decir el costo total como una función del número de vajillas producidas. ¿Cuál es el costo de producir 
22 vajillas?*/

#include<iostream>

using namespace std;

int main(){
	
	int numvajillas, mano_de_obra;
	
	cout<<"Digite la cantidad de vajillas a producir: ";
	cin>>numvajillas;
	
	
	mano_de_obra = 3000 + numvajillas * 50;
	
	cout<<"\nEl costo de producir "<<numvajillas<<" vajillas es de: "<<"US";
	printf("%c",36);
	cout<<mano_de_obra;
	
	
	
	
	return 0;
}
