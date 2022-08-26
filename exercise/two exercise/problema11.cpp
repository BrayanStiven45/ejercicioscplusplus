/* Problema 11. Un fabricante determina que el ingreso R obtenido por la producci�n y venta de x art�culos est� 
dado por la funci�n: R = 350x - 0,25x^2
a) Calcule el ingreso cuando se venden 100 art�culos.
b) Si el ingreso obtenido es 120.000, determine la cantidad de art�culos vendidos. */

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	double articulo1, articulo2, ingreso;

//a) Calcule el ingreso cuando se venden 100 art�culos.
	
	articulo1 = 100;
	
	ingreso = (350 * articulo1) - (0.25 * pow(articulo1 , 2));
	
	cout<<"El ingreso del fabricante por 100 articulos es de: "<< ingreso;
	
//b) Si el ingreso obtenido es 120.000, determine la cantidad de art�culos vendidos. 

	ingreso = 120000;
	
	articulo1 = (350 + sqrt(pow(350,2) - 4 * 0.25 * ingreso)) / (2 * 0.25); 
	articulo2 = (350 - sqrt(pow(350,2) - 4 * 0.25 * ingreso)) / (2 * 0.25);
	
	cout<<"\n\nLa cantidad de articulos que el fabricante vendio para un ingreso de 120.000 fue de "<<articulo1;
	printf(" %c ",149);
	cout<<articulo2 << " articulos";
	
	return 0;
}
