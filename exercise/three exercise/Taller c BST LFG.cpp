
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//Problemas 1. Dada una cantidad en dólares obtener el equivalente en pesos.
/*	double dolares, pesos;
	cout<<"Ingresa la cantidad a convertir en dolares: ";
	cin>>dolares;
	
	pesos = 4396.84 * dolares;
	
	cout<<"\nPesos: "<<pesos;
	printf("%c",36);
	*/
	
	
	/* Problema 2 Realizar funciones que me permiten la conversión de temperatura a grados Celsius, Fahrenheit y kelvin 
(6 funciones con argumentos).*/	
	
/*	float celsius , fahrenheit , kelvin;

	cout<<"Ingrese el valor en Celcius: ";
	cin>>celsius;
	cout<<"\nIngrese el valor en Fahrenheit: ";
	cin>>fahrenheit;
	cout<<"\nIngrese el valor en Kelvin: ";
	cin>>kelvin;
	
	cout<<"___________________\n";
	cout<<"|\t|\t";
	printf("%c",167);
	cout<<"C\t|\t";
	printf("%c",167);
	cout<<"F\t|\t";
	printf("%c",167);
	cout<<"K\t|\n";
	cout<<"|__|_____|_____|______|\n";
	printf("|%c",167);
	cout<<"C\t|"<<celsius<<"\t\t|"<<(9.0 / 5.0 ) * celsius + 32.0<<"\t\t|"<<celsius + 273.15<<"\t\t|\n";
	cout<<"|__|_____|_____|______|\n";
	printf("|%c",167);
	cout<<"F\t|"<<(5.0 / 9.0) * (fahrenheit - 32)<<"\t|"<<fahrenheit<<"\t\t|"<<(5.0 / 9.0) * (fahrenheit + 459.67)<<"\t|\n";
	cout<<"|__|_____|_____|______|\n";
	printf("|%c",167);
	cout<<"K\t|"<<kelvin-273.15<<"\t|"<<(9.0 / 5.0) * (kelvin - 459.67)<<"\t|"<<kelvin<<"\t\t|\n";
	cout<<"|__|_____|_____|______|"; */
	
	
	
	/* Problema 3. El supermercado “El Ahorrito” necesita un programa que calcule el valor de una bolsa de monedas. 
Defina un programa que reciba el número de monedas de: $20, $50, $100, $200 y $500 que hay en la bolsa y 
devolver la cantidad de dinero que hay en ella. (Asumir que el primer parámetro corresponde a la cantidad de 
monedas de $20, el segundo a las de $50, y así sucesivamente)*/

/*		int m20, m50, m100, m200, m500, valor;
	
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
	printf("%c",36); */
	
	
	
	
	/*Problema 4. Se desea hacer un programa que calcule las ganancias de un teatro para una presentación. 
Cada cliente paga $10.000 por entrada y cada función le cuesta al teatro $300.000 por la atención prestada 
y por cada cliente que entre, el teatro debe pagar un costo de $2.000 por aseo. Desarrolle un programa que 
reciba el número de clientes de una función y devuelve el valor de las ganancias obtenidas.*/
/*
int clientes, ganancias;
	
	cout<<"Digite la cantidad de clientes que se ingreso al teatro: ";
	cin>>clientes;
	
	ganancias = (clientes * 10000) - 300000 - 2000;

	cout<<"La ganancia que recibio el teatro es de: "<<ganancias; */
	
	
	
	/*Programa 5. Una empresa que fabrica vajillas desechables tiene costos fijos de US $3.000 mensuales, 
y el costo de la mano de obra y del material es de US $50 por vajilla. Determinar la función de costos, 
es decir el costo total como una función del número de vajillas producidas. ¿Cuál es el costo de producir 
22 vajillas?*/
/*
		int numvajillas, mano_de_obra;
	
	cout<<"Digite la cantidad de vajillas a producir: ";
	cin>>numvajillas;
	
	
	mano_de_obra = 3000 + numvajillas * 50;
	
	cout<<"\nEl costo de producir "<<numvajillas<<" vajillas es de: "<<"US";
	printf("%c",36);
	cout<<mano_de_obra; */
	
	
	
	/*Programa 6. Suponga que se espera que un objeto de arte adquirido por $50.000 aumenten su valor a una 
razón constante de $500 por año durante los próximos 40 años.
a) Escriba la función que prediga el valor de la obra de arte en los próximos cuarenta años.
b) ¿Cuál será su valor 31 años después de la fecha de adquisición?
c) ¿Cuántos años transcurren para que la obra de arte tenga un valor de $55.500?*/

/*	int anos , valor;
	anos = 40;
//a) Escriba la función que prediga el valor de la obra de arte en los próximos cuarenta años.
	valor = 50000 + 500 * anos;
	cout<<"\n\nResultado1\n";
	printf("El valor que tendra la obra de arte adquirida dentro de 40 a%cos es de: ",164);
	printf("%c",36);
	cout<<valor; 
//final a)

//  b) ¿Cuál será su valor 31 años después de la fecha de adquisición?
	anos = 31;
	valor = 50000 + 500 * anos;
	cout<<"\n\nResultado2\n";
	printf("El valor que tendra la obra de arte adquirida dentro de 31 a%cos es de: ",164);
	printf("%c",36);
	cout<<valor;
//final b)

// c) ¿Cuántos años transcurren para que la obra de arte tenga un valor de $55.500?
	
	anos= (55500 - 50000) / 500;
	
	cout<<"\n\nResultado3\n";
	printf("El tiempo que debe transcurrir para que la obra tenga un valor de $55.500 es de: ");
	cout<<anos;
	printf(" a%cos",164);
//final c)
	*/
	
	
	
	/* Programa 7. Una planta tiene la capacidad para producir desde 0 a 100 computadoras por día. El costo 
fijo diario de la planta son 5.000 dólares, y el costo variable (mano de obra y materiales) para 
producir un computador es 805 dólares.
a) Escriba la función de costo total de producir x computadores en un día.
b) Escriba la función de costo unitario (costo promedio por computador) en un día. */
/*
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
	
	*/
	
	
	
	/* Problema 8. El crecimiento de un feto de más de 12 semanas de gestación se calcula mediante la función
L(t) =1,53 × t - 6,7 , donde L es la longitud (en cm) y t es el tiempo (en semanas). Calcula la edad de un feto 
cuya longitud es 28 centímetros.*/
	
/*	double longitud = 28, tiempo;
	
	
	tiempo = (longitud + 6.7) / 1.53;
	
	cout<<"La edad del feto con una longitud de 28cm es de: "<<tiempo<<" semanas"; */
	
	
	
	/* Problema 9. Admitamos que el costo de producción de un número x de periódicos es:
C(x)= 200.000 + 400x pesos
a) ¿Cuál es el costo de producir 30.000 periódicos?
b) ¿Cuántos periódicos se han producido si el costo total fue de $520.000? */

/*	int periodico, costo;
	
//a) ¿Cuál es el costo de producir 30.000 periódicos?

	periodico = 30000;
	costo = 200000 + 400 * periodico;
	
	cout<<"El costo de producir 30000 periodicos es de: ";
	printf("%c",36);
	cout<<costo<<" pesos";
//final a)

//b) ¿Cuántos periódicos se han producido si el costo total fue de $520.000?

	costo = 520000;
	periodico = (costo - 200000) / 400;
	
	cout<<"\n\nSon "<<periodico<< " periodicos para un coto total de $520000"; */
	
	
	/* Problema 10. Un proyectil se lanza directamente hacia arriba desde el suelo. Después de transcurridos t 
segundos su distancia en metros por encima del suelo está dada por la función d(t) = 144t -16t^2.
a) ¿Después de cuántos segundos estará el proyectil a 128 metros del suelo?
b) ¿En qué momento toca el suelo el objeto?*/

	/* double distancia, tiempo1, tiempo2;
	
//a) ¿Después de cuántos segundos estará el proyectil a 128 metros del suelo?

	distancia = 128;
	
	tiempo1 = (144 + sqrt(pow(144,2) - (4 * 16 * distancia))) / (2 * 16);
	tiempo2 = (144 - sqrt(pow(144,2) - (4 * 16 * distancia))) / (2 * 16);
	
	cout<<"El proyectil estara a 128 metros del suelo despues de "<<tiempo1<<" segundos y "<<tiempo2<<" segundos\n";
//final a)

//b) ¿En qué momento toca el suelo el objeto?

	distancia = 0;
	
	tiempo1 = (144 + sqrt(pow(144,2) - 4 * 16 * distancia)) / (2 * 16);
	
	cout<<"El objeto toca el suelo despues de "<<tiempo1<<" segundos";  */


/*	Problema 11. Un fabricante determina que el ingreso R obtenido por la producción y venta de x artículos está dado por la
función: R = 350x - 0,25x2


b) Si el ingreso obtenido es 120.000, determine la cantidad de artículos vendidos.
*/
/*
 float r, x; 
   //a) Calcule el ingreso cuando se venden 100 artículos. 
  cout<<" El ingreso  cuando las ventas son 100 es \n ";  
  r=(350*100)-(0.25*10000);
   cout<<r <<"\n"; 
   
//b) Si el ingreso obtenido es 120.000, determine la cantidad de artículos vendidos. 
  
   cout<<" La cantidad de articulos vendidos es \n ";  
   x= ((-0.25)+sqrt(((-350)*(-350))-(4*0.25*120000)))/2*0.25;
	 cout<<x;  	 
	 */
	 
//Programa 12  Escribir una función que calcule el número de horas, minutos y segundos que hay en N segundos. 	 
	 //Ejemplos En 3601 segundos equivale 1 hora 0 minuto 1 segundo
	 /*
	 int s, rs, rm,  m, h;
	 cout<<"Ingrese el valor en segundos\n";
	 cin>>s;
	 m= s/60;
	 rs= m % 60;
	 h=m/60;
	 rm= h%60;
	 cout<<"El resultado es " <<h <<"horas " <<rs <<"minutos " <<rm <<"segundos "; */
	 
	
	
 /*Problema 13. Un alumno desea saber cuál será su promedio general en las tres materias más difíciles que
cursa y cuál será el promedio que obtendrá en cada una de ellas. Estas materias se evalúan como se muestra a
continuación:
La calificación de matemáticas se obtiene de la siguiente manera:
Examen 90%. Promedio de las tares 10%; En esta materia se pidió un total de tres tareas.
La calificación de física se obtiene de la siguiente manera:
examen 80%. Promedio de tares 20%; En esta materia se pidió un total de dos tareas.
La calificación de química se obtiene de la siguiente manera:
Examen 85%. Promedio de tareas 15%; En esta materia se pidió un total de tres tareas. */
/*
float me, mt, fe, ft, qe, qt, pm, pf, pq,  pg ;
cout<<" Ingrese su nota de examen en matematicas \n ";
  
cin>> me;
cout<<" Ingrese su promedio de tareas en matematicas \n "; 
cin>>mt;
pm= (me*0.9)+ (mt*0.1);
cout<<" Su promedio en matematicas es  " <<pm <<"\n" ; 

cout<<" Ingrese su nota de examen en fisica \n "; 
cin>> fe;
cout<<" Ingrese su promedio de tareas en fisica \n "; 
cin>>ft;
pf= (fe*0.9)+ (ft*0.1);
cout<<" Su promedio en fisica es  " <<pf <<"\n" ; 

cout<<" Ingrese su nota de examen en quimica \n "; 
cin>> qe;
cout<<" Ingrese su promedio de tareas en quimica \n "; 
cin>>qt;
pq= (qe*0.9)+ (qt*0.1);
cout<<" Su promedio en quimica es  " <<pq <<"\n" ; 
pg= (pm+pf+pq)/3;
cout<<"\n El promedio general es  " <<pg;
*/

/*Problema 14. El dueño de una tienda compra un artículo a un precio determinado. Obtener el precio en lo que debe
vender para obtener una ganancia del 30% */

/*float pc,pf;
cout<<" ingrese a cuanto el dueño compro inicialmente el articulo \n ";
cin>>pc;
pf= pc+ (pc*0.3);
cout<<" El dueño deberia venderlo a \n " <<pf ;*/

/*Problemas 15. En un hospital existen tres áreas; Ginecología, Pediatría, traumatología. El presupuesto anual del hospital
se reparte conforme a la siguiente tabla.
ginecologia 40%
traumatologia 30%
pediatria 30% */
/*int ptt, pg, pt, pp;

cout<<" ingrese el presupuesto general de el hospital \n ";
cin>>ptt;
pg=  (ptt*0.4);
pt=  (ptt*0.3);
pp=  (ptt*0.3);

cout<<" El dinero dirigido para ginecologia es   " <<pg <<"\n" <<" El dinero dirigido para traumatologia es   " <<pt <<"\n"  <<" El dinero dirigido para pediatria es   " <<pp <<"\n"     ;

Brayan Stiven Valencia y Luis Felipe Garzon*/

	return 0;
	
	
	
	
	
	
	
	
}

