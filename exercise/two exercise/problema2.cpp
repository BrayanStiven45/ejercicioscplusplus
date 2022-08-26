/* Problema 2 Realizar funciones que me permiten la conversión de temperatura a grados Celsius, Fahrenheit y kelvin 
(6 funciones con argumentos).*/

#include<iostream>

using namespace std;

int main(){
	
	float celsius , fahrenheit , kelvin;

	cout<<"Ingrese el valor en Celcius: ";
	cin>>celsius;
	cout<<"\nIngrese el valor en Fahrenheit: ";
	cin>>fahrenheit;
	cout<<"\nIngrese el valor en Kelvin: ";
	cin>>kelvin;
	
	cout<<"_________________________________________________________\n";
	cout<<"|\t|\t";
	printf("%c",167);
	cout<<"C\t|\t";
	printf("%c",167);
	cout<<"F\t|\t";
	printf("%c",167);
	cout<<"K\t|\n";
	cout<<"|_______|_______________|_______________|_______________|\n";
	printf("|%c",167);
	cout<<"C\t|"<<celsius<<"\t\t|"<<(9.0 / 5.0 ) * celsius + 32.0<<"\t\t|"<<celsius + 273.15<<"\t\t|\n";
	cout<<"|_______|_______________|_______________|_______________|\n";
	printf("|%c",167);
	cout<<"F\t|"<<(5.0 / 9.0) * (fahrenheit - 32)<<"\t|"<<fahrenheit<<"\t\t|"<<(5.0 / 9.0) * (fahrenheit + 459.67)<<"\t|\n";
	cout<<"|_______|_______________|_______________|_______________|\n";
	printf("|%c",167);
	cout<<"K\t|"<<kelvin-273.15<<"\t|"<<(9.0 / 5.0) * (kelvin - 459.67)<<"\t|"<<kelvin<<"\t\t|\n";
	cout<<"|_______|_______________|_______________|_______________|";

	
	
	return 0;
}


