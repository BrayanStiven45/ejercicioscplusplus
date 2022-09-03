/*1. realizar los siguientes programas

volumen de un conotruma = pi(R^2 + r^2 + R*r)* (h / 3)
fahrenheit a celcius = (F * 32) * (5/9)
distancia entre dos puntos = sqrt((x2 - x1)^2 + (y2-y1))
pendiente de una recta = (y2 - y1) / (x2-x1)*/


#include<iostream>
#include<math.h>
#include<cmath>
#define PI 3.14126
using namespace std;

int main(){
	/*//volumen de un cono truma 
	double radio_mayor, radio_menor, volumen, altura;
	cout<<"Digite el valor del radio mayor en metros: ",
	cin>>radio_mayor;
	cout<<"\nDigite el valor del radio menor en metros: ";
	cin>>radio_menor;
	cout<<"\nDigite la altura en metros: ";
	cin>>altura;
	
	volumen = PI*(pow(radio_mayor,2) + pow(radio_menor,2) + radio_mayor * radio_menor) * (altura / 3);
	
	cout<<"\nEl volumen del cono truma es de: "<<volumen<<" m^3";
	//final program volumen trono truma*/
	
	/*//Fahrenheit a celcius
	 double fahrenheit, celcius, a;
	 
	 cout<<"Digite el valor en Fahrenheit: ";
	 cin>>fahrenheit;
	 
	 celcius = (fahrenheit * 32) * (5.0 / 9.0);
	 
	 printf("Fahrenheit a celcius: ");
	 cout<<celcius;
	 printf("%cC",167);
	 //final fahrenheit a celcius*/
	 
	 /*//distancia entre dos puntos
	 double x1, x2, y1, y2, distancia;
	 
	 cout<<"Ingrese los valores del primer punto (x,y) respectivamente: ";
	 cout<<"\nx:";
	 cin>>x1;
	 cout<<"\ny: ";
	 cin>>y1;
	 
	 cout<<"Ingrese los valores del segundo punto (x,y) respectivamente: ";
	 cout<<"\nx:";
	 cin>>x2;
	 cout<<"\ny: ";
	 cin>>y2;
	 
	 distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	 
	 cout<<"La distancia entre los dos puntos es igual a: "<<distancia;
	 //final distancia entre dos puntos*/
	 
	/* //pendiente de una recta
	
	double x1r, x2r, y1r, y2r, pendiente;
	
	cout<<"Ingrese los valores del  punto inicial de la recta (x,y) respectivamente: ";
	 cout<<"\nx:";
	 cin>>x1r;
	 cout<<"\ny: ";
	 cin>>y1r;
	 
	 cout<<"Ingrese los valores del  punto final (x,y) respectivamente: ";
	 cout<<"\nx:";
	 cin>>x2r;
	 cout<<"\ny: ";
	 cin>>y2r;
	 
	 pendiente = (y2r - y1r) / (x2r - x1r);
	 
	 cout<<"La pendiente de la recta es igual a: "<<pendiente;
	 //pendiente de una recta*/
	 
	 //2. realizar la siguiente tabla pidiendo 3 valores
	 double cm, mt , km ;
	 
	 cout<<"Ingrese el valor en cm: ";
	 cin>> cm;
	 cout<<"\nIngrese el valor en mt: ";
	 cin>>mt;
	 cout<<"\nIngrese el valor en km: ";
	 cin>>km;
	 
	 cout<<"_________________________________________________________________________________\n";
	 cout<<"Valor\t|\t" "Convercion\t|\t" "Cm\t|\t" "Mt\t|\t" "Km\t|\t\n";
	 cout<<"________|_______________________|_______________|_______________|_______________|\n";
	 cout<<"  "<<cm<<"\t|\t""Cm\t\t|\t"<<cm<<"\t|\t"<<cm/100<<"\t|\t"<<cm/100000<<"\t|\t\n";
	 cout<<"________|_______________________|_______________|_______________|_______________|\n";
	 cout<<"  "<<mt<<"\t|\t""Mt\t\t|\t"<<mt*100<<"\t|\t"<<mt<<"\t|\t"<<mt/1000<<"\t|\t\n";
	 cout<<"________|_______________________|_______________|_______________|_______________|\n";
	 cout<<"  "<<km<<"\t|\t""Km\t\t|\t"<<cm /100000<<"\t|\t"<<mt/1000<<"\t|\t"<<km<<"\t|\t\n";
	 cout<<"________|_______________________|_______________|_______________|_______________|\n";
	 
	 
	 
	 
	 
	 /*//3.tomar 2 numeros de 3 cifras y sumarlos de la siguiente manera
	 
	 int num1, num2, a, b, c;
	 
	 cout<<"Digite dos numeros de tres cifras cada uno: ";
	 cout<<"\nNumero 1: ";
	 cin>>num1;
	 cout<<"\nNumero 2: ";
	 cin>>num2;
	 
	 a = num1 % 10;
	 num1 = num1 / 10;
	 b = num1 % 10;
	 num1 = num1 / 10;
	 num1 = a * 100 + b * 10 + num1;
	 
	 a = num2 / 100;
	 num2 = num2 % 100;
	 b = num2 / 10;
	 num2 = num2 % 10;
	 num2 = b * 100 + a * 10 + num2;
	 
	 a = ((num1 / 100) + (num2 / 100)) * 100;
	 b = (((num1 % 100) / 10) +  ((num2 % 100)/ 10)) * 10;
	 c = (num1 % 10) + (num2 % 10);
	
	 
	 cout<<"El resultado es: "<< a + b + c;*/
	 
	 
	 

	 
	 
		
return 0;
}
