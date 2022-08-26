/*Problema 4. Se desea hacer un programa que calcule las ganancias de un teatro para una presentación. 
Cada cliente paga $10.000 por entrada y cada función le cuesta al teatro $300.000 por la atención prestada 
y por cada cliente que entre, el teatro debe pagar un costo de $2.000 por aseo. Desarrolle un programa que 
reciba el número de clientes de una función y devuelve el valor de las ganancias obtenidas.*/

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
