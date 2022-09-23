/* 				Taller de condicional while.

		Universidad Tecnologica de Pereira.
		Itegrantes: Brayan Stiven Valencia
					Felipe Garzon
					Jhonatan Gaviria
					
		Profesor: Luis Eduardo Muñoz Guerrero
		2 Semestre.
		Prog. 2222	 Grupo 3.*/
		
#include<iostream>
#include<cstdlib>
#include<locale.h>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	fflush(stdin);
	int op, i;
	cout<<"1.Programa\n";
	cout<<"2.Programa\n";
	cout<<"3.Programa\n";
	cout<<"4.Programa\n";
	cout<<"5.Programa\n";
	cout<<"6.Programa\n";
	cout<<"7.Programa\n";
	cout<<"8.Programa\n";
	cout<<"9.Programa\n";
	cout<<"10.Programa\n";
	cout<<"11.Programa\n";
	cout<<"12.Salir\n";
	cout<<"Opcion: ";cin>>op;
	
	if(op == 12){
		return 0;
	}
	
	switch(op){
		case 1:
			/*Programa No 1. Realizar un algoritmo que permita escribir los
			n primeros múltiplos de m, su suma y su producto el algoritmo
			ha de tener la posibilidad de volver a empezar.
			Ejemplo. Escribir los 7 primeros múltiplos de 3 mostrar su
			suma y su producto. Se debe mostrar lo siguiente
			3 6 9 12 15 18 21
			Suma 84
			Producto 11022480
			Se tiene la posibilidad de volver a solicitar los valores de m y n
			y realizar los respectivos cálculos.*/
			
			system("cls");
			int n, m, suma, producto;
			suma = 0;
			producto = 1;
			i = 1;
	
			cout<<"Digite el numero al cual le desea sacar los multiplos: ";cin>>m;cout<<endl;
			cout<<"Digite la cantida de multiplos que desea: ";cin>>n;cout<<endl;
			
			
			while(i <= n){
				
				cout<<" "<<m * i;
				
				suma += (m * i);
				producto *= (m * i);
				
				i++;
			}
			
			cout<<"\nSuma: "<<suma;
			cout<<"\nProducto: "<<producto<<endl;
			break;
		case 2:
			/*Problema No 2. Diseñe un algoritmo que reciba un número
			entero positivo y produzca en la pantalla la tabla de multiplicar,
			la tabla del div (división entera) y la tabla del mod (residuo de la
			división entera) correspondientes a ese número. Por ejemplo, si
			el usuario digita como entrada el número 5, las tablas que debe
			producir el programa son:
			5 * 1 = 5 5 div 1 = 5 5 mod 1 = 0
			5 * 2 = 10 5 div 2 = 2 5 mod 2 = 1
			5 * 3 = 15 5 div 3 = 1 5 mod 3 = 2
			5 * 4 = 20 5 div 4 = 1 5 mod 4 = 1
			5 * 5 = 25 5 div 5 = 1 5 mod 5 = 0
			5 * 6 = 30 5 div 6 = 0 5 mod 6 = 5
			5 * 7 = 35 5 div 7 = 0 5 mod 7 = 5
			5 * 8 = 40 5 div 8 = 0 5 mod 8 = 5
			5 * 9 = 45 5 div 9 = 0 5 mod 9 = 5
			5 * 10 = 50 5 div 10 = 0 5 mod 10 = 5*/
			
			system("cls");
			int num;
			i = 1;
			
			cout<<"Digite un numero positivo: ";cin>>num;
			if(num < 0){
				cout<<"El numero digitado no es un número positivo";
				system("pause");
				system("cls");
				return main();
			}
			
			if(num >= 0){
			}else{
				cout<<"!!!El numero no es valido¡¡¡¡\n";
				cout<<"Vuelve a intentarlo\n";
				system("pause");
				system("cls");
				return main();
			}
			
			while(i <= 10){
				cout<<num<<" * "<<i<<" = "<<num*i<<"\t";
				cout<<num<<" div "<<i<<" = "<<num/i<<"\t";
				cout<<num<<" mod "<<i<<" = "<<num%i<<endl;
				i++;
			}
			break;
		case 3:
			/*Problema No 3. Diseñe un algoritmo que lea caracteres, uno
			por uno, hasta que el usuario digite el carácter punto. Después
			de que el usuario haya digitado el carácter punto, el programa
			debe mostrar las siguientes estadísticas, en las cuales el punto no
			se considera:
			? Número de letras
			? Números de dígitos
			? Números de otros símbolos (aquellos que no son ni
			dígitos ni letras)
			? Número total de símbolos leídos
			Por ejemplo, si el usuario digita las siguientes entradas:

			M
			G
			4
			b
			6
			1
			#
			%
			.
			El programa debe escribir:

			Número de letras : 3
			Número de dígitos : 3
			Otros símbolos : 2
			Total de símbolos : 8*/
			
			system("cls");
			char letra, i;
			int numle, numdi, otsim; 
			numle = 0;
			numdi = 0;
			otsim = 0;
			
			i = 'a';
			cout<<"Digite cualquier valor: ";
			cin>>letra;
			
			
			while (letra != '.'){
				
				if(isalpha(letra)){
					numle++;
				}else{
					if(isdigit(letra)){
						numdi++;
					}else otsim++;
				}
				
				cout<<"Digite cualquier valor: ";
				cin>>letra;
			}
			
			cout<<"Numero de letras: "<<numle<<endl;
			cout<<"Numero de digitos: "<<numdi<<endl;
			cout<<"Otros simbolos: "<<otsim<<endl;
			break;
			
		case 4:
			/* Problema No 4. Calcular factorial y la sumatoria de un numero entero par introducido 
			por teclado*/
			system("cls");
			int entero, facto, sumatoria;
			sumatoria = 0;
			facto = 1;
			i = 1;
			
			cout<<"Digite un numero: ";cin>>entero;
			
			if((entero % 2) == 0){
				while(i <= entero){
					facto *= i;
					sumatoria += i;
					i++;
				}
				cout<<"El factorial del numero "<<entero<<" es: "<<facto<<endl;
				cout<<"Y la sumatoria del numero "<<entero<<" es: "<<sumatoria<<endl;
			}else{
				while(i <= entero){
					facto *= i;
					i++;
				}
				cout<<"El factorial del numero "<<entero<<" es: "<<facto<<endl;
			}
			break;
		case 5:
			/*Problema No 5. Calcular de la suma y la media aritmetica de N numeros reales. Solicitar
			el valor de N al usuario y cada uno de los N  numeros reales*/
			system("cls");
			int n5, i5, n25, ac5;
			i5=1;
			ac5=0;
			cout<<"Ingrese el numero de valores"<<endl;
			cin>>n5;
			cout<<"Ingrese los numeros"<<endl;
			while(i5<=n5){
				cin>>n25;
				ac5=ac5+n25;
				i5++;
			}
			cout<<"La suma es: "<<ac5<<endl<<"La media aritmetica es: "<<ac5/n5<<endl;
			break;
		case 6:
			/*Problema No 6. Escribir un programa que lea desde teclado un valor N, seguido de N numeros, 
			y calcule la media de los numero positivos, y la media de los numeros negativos.*/
			
			system("cls");
			int n6, i6, n26, ac61, ac62, acvp, acvn;
			i6=1;
			ac61=0;
			ac62=0;
			acvp=0;
			acvn=0;
			cout<<"Ingrese el numero de valores"<<endl;
			cin>>n6;
			cout<<"Ingrese los numeros"<<endl;
			while(i6<=n6){
				cin>>n26;
				if(n26>=0){
					acvp++;
					ac61=ac61+n26;
				}else{
					acvn++;
					ac62=ac62+n26;
				}
				i6++;
			
			}
			if(acvn==0){
				cout<<"La media de numeros positivos es de: "<<ac61/acvp<<endl
					<<"No existen valores negativos";
				return 0;
			}else{
				if(acvp==0){
					cout<<"La media de valores negativos es de: "<<ac62/acvn<<endl
						<<"No existen valores positivos";
					system("pause");
					system("cls");
					return main();
				}else{
					cout<<"La media de valores negativos es de: "<<ac62/acvn<<endl
					<<"La media de numeros positivos es de: "<<ac61/acvp<<endl;
				}
			}
			break;
		
		case 7:
			
			/* Problema No 7. Escribir un programa que pidiendo un valor N seguido de N números, calcule el
			máximo y el mínimo de ese conjunto de N números*/
			system("cls");
			int i7, n7, n27, nmenor7, nmayor7;
			i7=1;
			cout<<"Ingrese la cantidad de numeros "<<endl;
			cin>>n7;
			cout<<"Ingrese los numeros"<<endl;
			cin>>n27;
			nmenor7=n27;
			nmayor7=n27;
			
			while(i7 < n7){
				cin>>n27;
				if(n27<nmenor7){
					nmenor7=n27;
				}else{
					if(n27>nmayor7){
						nmayor7=n27;
					}
				}
				i7++;
			}
			cout<<"El mayor es: "<<nmayor7<<endl
				<<"El menor es: "<<nmenor7<<endl;
			break;
		case 8:
			/* Problema No 8. Leer n valores desde teclado y mostrar la
			media de los pares y la media de los impares.*/
			system("cls");
			int n8, i8, n28, ac8p, ac8i, acvp8, acvi8;
			i8=1;
			acvp8=0;
			ac8i=0;
			acvp8=0;
			acvi8=0;
			cout<<"Ingrese el numero de valores"<<endl;
			cin>>n8;
			cout<<"Ingrese los numeros"<<endl;
			while(i8<=n8){
				cin>>n28;
				if((n28%2)==0){
					acvp8++;
					ac8p=ac8p+n28;
				}else{
					acvi8++;
					ac8i=ac8i+n28;
				}
				i8++;
			}
			if(acvi8==0){
				cout<<"La media de numeros pares es de: "<<ac8p/acvp8<<endl
					<<"No existen valores impares\n";
			}else{
				if(acvp8==0){
				cout<<"La media de valores impares es de: "<<ac8i/acvi8<<endl
					<<"No existen valores pares\n";
				}else{
					cout<<"La media de valores impares es de: "<<ac8i/acvi8<<endl
					<<"La media de numeros pares es de: "<<ac8p/acvp8<<endl;
				}
			}
			break;
		case 9:
			/*Problema 9  La
			forma de pago incluye las siguientes clÃ¡usulas:
			1. El monto de la cuota inicial debe ser como mÃ­nimo del 20%
			del valor total del carro.
			2. El valor restante (valor total menos valor de la cuota inicial)
			se puede pagar en 12, 24 o 36 cuotas mensuales.
			3. A cada cuota mensual se le carga un interÃ©s del 5% sobre el
			saldo de la deuda.
			Escriba un programa que reciba como entrada el costo del
			Ferrari, el valor de la cuota inicial, y el plazo del crÃ©dito, y
			produzca como salida el valor de cada una de las cuotas
			mensuales.
			Por ejemplo, si el Ferrari cuesta 10000 (dÃ³lares, por ejemplo), la
			cuota inicial es de 4000 y el plazo es de 12 meses, el programa
			deberÃ­a producir como salida: */
			
			system("cls");
			setlocale(LC_CTYPE, "spanish");
	
			int valor_ferrary, cuota_inicial, meses, cuota_mensual, op;
			i = 1;
		
			cout<<"Digite el costo del ferrary: "; cin>>valor_ferrary;
			cout<<"\nLA CUOTA INICIAL NO PUEDE SER MENOR A "<<valor_ferrary * 0.2;
			cout<<"\nDigite el valor de la cuota inicial: "; cin>>cuota_inicial;
			if(cuota_inicial > (valor_ferrary * 0.2)){
				valor_ferrary -= cuota_inicial;	
			}else{
				cout<<"El valor de la cuato inicial no es posible";
				system("pause");
				system("cls");
				return main();
			}
			
			cout<<"Digite el plazo en meses del credito.\n";
			cout<<"1-12 meses.\n";
			cout<<"2-24 meses.\n";
			cout<<"3-36 meses.\n";
			cout<<"Opcion: "; cin>>op;
			
			switch(op){
				case 1: meses = 12; break;
				case 2: meses = 24; break;
				case 3: meses = 36; break;
				default: cout<<"La opción es erronea";
				system("pause");
				system("cls");
				return main();
			}
			
			while(meses != 0){
				cuota_mensual = (valor_ferrary / meses) + (valor_ferrary * 0.05);
				valor_ferrary -= (valor_ferrary / meses);
				cout<<"Cuota "<<i<<" ="<<cuota_mensual<<endl;
				meses--;
				i++;
			}
			break;
			
		case 10:
			/*Problema No 10.
			La Universidad desea saber cuál será su promedio general de N
			alumnos en las tres materias más difíciles que cursan y cuál
			será el promedio que obtendrá en cada una de ellas (materias)
			los N alumnos.
			Estas materias se evalúan como se muestra a continuación:
			? La calificación de matemáticas se obtiene de la
			siguiente manera: Examen 90%. Promedio de las tares
			10%; En esta materia se pidió un total de tres tareas.
			? La calificación de física se obtiene de la siguiente
			manera: Examen 80%. Promedio de tares 20%; En esta
			materia se pidió un total de dos tareas.
			? La calificación de química se obtiene de la siguiente
			manera: Examen 85%. Promedio de tareas 15%; En
			esta materia se pidió un total de tres tareas.
			Además se debe visualizar las 2 materias con la nota de mayor
			y menor de cada alumno.
			El promedio general de la carrera de cada alumno donde a la
			mayor se le aplica un 50 %, a la menor un 20% y a la intermedio
			un 30%
			Por último el promedio general de los N alumnos.*/
			system("cls");
			float me, mt1, mt2, mt3, fe, ft1, ft2, qe, qt1, qt2, qt3, pm, pf, pq,  pg,alumnos, pt;
			i = 1;
			pt = 0;

			cout<<"ingrese la cantidad de alumnos\n";
			cin>>alumnos;
			
			while (i<=alumnos){
				cout<<"Alumno " <<i;
				cout<<" Ingrese su nota de examen en matematicas \n ";
				cin>>me;
				cout<<" Ingrese su nota de las tres tareas de matematica \n ";
				cin>>mt1 >>mt2 >>mt3;
				pm= (me*0.9)+ ((mt1*0.0333)+ (mt2*0.033) + (mt3*0.0333));
				
				
				cout<<" Ingrese su nota de examen en fisica \n ";
				cin>> fe;
				cout<<" Ingrese sus notas de las dos tareas en fisica \n ";
				cin>>ft1 >>ft2;
				pf= (fe*0.8)+ ((ft1*0.1)+ (ft2*0.1));
				 
				
				cout<<" Ingrese su nota de examen en quimica \n ";
				cin>> qe;
				cout<<" Ingrese sus notas de las tres tareas en quimica \n ";
				cin>>qt1 >>qt2 >>qt3;
				pq= (qe*0.85)+ ((qt1*0.05)+ (qt2*0.05) + (qt3*0.05));
			
				
				cout<<"Promedio Mate   \t" <<pm <<"\n";
				cout<<"Promedio Fisica \t" <<pf <<"\n";
				cout<<"Promedio Quimica\t" <<pq <<"\n\n";
				
				if ((pm>pf) and (pm>pq)){  
					if (pq>pf){
						 pg= (pm*0.5) + (pq*0.3) + (pf*0.2);
					} else { 
						pg= (pm*0.5) + (pf*0.3) + (pq*0.2);
 					 }
				} else{ 
					if ((pf>pm) and (pf>pq)){ 
						if (pq>pm){ 
							pg= (pf*0.5) + (pq*0.3) + (pm*0.2);
						} else{ 
							pg= (pf*0.5) + (pm*0.3) + (pq*0.2);
						}
				    } else {
						if ((pq>pf) and (pq>pm)){ 
							 if (pm>pf){ 
							 	pg= (pq*0.5) + (pm*0.3) + (pf*0.2);
							}else { 
								pg= (pq*0.5) + (pf*0.3) + (pm*0.2);
  							}
						}	
					}
				}
				pt=pt+pg;
				i++;
				
			}
			cout<<"El promedio de los alumnos es " <<pt/alumnos <<endl;
			break;
		case 11:
			/*Problema No 11. Desarrollar un programa que permita
			encontrar el término n-esimo con su valor y su sumatoria hasta
			ese término de la serie de la forma:
			Se debe garantizar que x este entre 1 y 10.*/
			system("cls");
			double suma1, x, result, ap;
			suma1 = 0;
			facto = 1;
			ap = 1;
			x = 1;
			m = 1;
			cout<<"Ingrese la potencia ";
			cin>>n;
			
			while(m<=n){
				facto *= m;
				result= pow((x-1),m);
				result = result / facto;
				suma1 += result;
				cout<<"("<<"("<<x<<"-"<<"1"<<")"<<"^"<<m<<")"<<"/"<<facto<<" + ";
				if(x == 10){
					x = 0;
				}
				m++;
				x++;
			}
			m--; 
			x--;
			result= pow((x-1),m);
			result = result / facto;
			cout<<"\nEl n-esimo valor es: "<<result;
			cout<<"\nLa suma hasta la potencia n es \n" <<suma1 <<endl;
			break;
	}
	
	system("pause");
	system("cls");
	return main();
}
	
