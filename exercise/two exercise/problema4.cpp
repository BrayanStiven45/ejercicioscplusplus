/*Problema 4. Se desea hacer un programa que calcule las ganancias de un teatro para una presentaci�n. 
Cada cliente paga $10.000 por entrada y cada funci�n le cuesta al teatro $300.000 por la atenci�n prestada 
y por cada cliente que entre, el teatro debe pagar un costo de $2.000 por aseo. Desarrolle un programa que 
reciba el n�mero de clientes de una funci�n y devuelve el valor de las ganancias obtenidas.*/

#include<iostream>

using namespace std;

int main(){
	
	int clientes, ganancias;
	
	cout<<"Digite la cantidad de clientes que se ingreso al teatro: ";
	cin>>clientes;
	
	ganancias = (clientes * 10000) - 300000 - 2000;
	
	cout<<"La ganancia que recibio el teatro es de: "<<ganancias;
	
	
	
	return 0;
}
