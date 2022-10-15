#include<iostream>
#include<cstdlib>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"SPANISH");
	int n, i, m;
	// Se pide el tamaño del vector;
	cout<<"Dígite el tamaño del vector: "; cin>>n;
	int vec[n];
	
	// Se introducen valores al vector (valores que el usuario quiera)
	for(i=0; i < n; i++){
		cout<<"Ingrese un valor: "; cin>>m;
		vec[i] = m;
	}
	// se muestra el vector de forma ascendente
	i = 0;
	while(i < n){
		cout<<vec[i]<<endl;
		i++;
	}
	
	// Cambiar las posiciones 
	int contador, repeticiones, ultimo_dato;
	int contador_posicion;
	i = 0;
	while(i < n){
		ultimo_dato = vec[(n - 1)];
		contador_posicion = 2;
		contador = 1;
		for(repeticiones = (n - 1); repeticiones > i; repeticiones--){
			vec[(n - contador)] = vec[(n - contador_posicion)];
			contador_posicion++;
			contador++;
		}
		vec[(n - contador)] = ultimo_dato;
		i++;
	}
	
	// Mostrar vector
	i = 0;
	cout<<endl;
	while(i < n){
		cout<<vec[i]<<endl;
		i++;
	}
	
	
	
	return 0;
}
