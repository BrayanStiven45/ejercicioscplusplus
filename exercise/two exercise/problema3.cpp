/* Problema 3. El supermercado “El Ahorrito” necesita un programa que calcule el valor de una bolsa de monedas. 
Defina un programa que reciba el número de monedas de: $20, $50, $100, $200 y $500 que hay en la bolsa y 
devolver la cantidad de dinero que hay en ella. (Asumir que el primer parámetro corresponde a la cantidad de 
monedas de $20, el segundo a las de $50, y así sucesivamente)*/

#include<iostream>

using namespace std;

int main(){
	
	int m20, m50, m100, m200, m500, valor;
	
	cout<<"\n\t\t\tEl Ahorrito\n\n";
	
	cout<<"Digite la cantidad de mondes de cada tipo: \n";
	
	printf("Cantidad de %c20: ",36);
	cin>>m20;
	printf("Cantidad de %c50: ",36);
	cin>>m50;
	printf("Cantidad de %c100: ",36);
	cin>>m100;
	printf("Cantidad de %c200: ",36);
	cin>>m200;
	printf("Cantidad de %c500: ",36);
	cin>>m500;
	
	valor = (m20 * 20) + (m50 * 50) + (m100 * 100) + (m200 * 200) + (m500 * 500);
	
	cout<<"\nLa cantidad de pesos que hay es de: ";
	cout<<valor;
	printf("%c",36);
	
	
	
	
	
	
	return 0;
}
