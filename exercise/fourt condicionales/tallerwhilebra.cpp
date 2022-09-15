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
	cout<<"11.Salir\n";
	cout<<"Opcion: ";cin>>op;
	
	if(op == 11){
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
			int n2, suma5;
			suma5 = 0;
			i = 1;
			
			cout<<"Digite la cantidad de numero a ingresar: ";cin>>n;cout<<endl;
			
			while(i <= n){
				cout<<"Digite número: ";cin>>n2;
				suma5 += n2;
				i++;
			}
			
			cout<<"La suma de los numero es: "<<suma5<<endl;
			cout<<"La media aritmetica es: "<<suma5 / n<<endl;
			break;
		case 6:
			/*Problema No 6. Escribir un programa que lea desde teclado un valor N, seguido de N numeros, 
			y calcule la media de los numero positivos, y la media de los numeros negativos.*/
			
			system("cls");
			int contp, contn, sumap, suman;
			suman = 0;
			sumap = 0;
			contp = 0;
			contn = 0;
			i = 1;
			
			cout<<"Digite la cantidad de número a ingresar: ";cin>>n;cout<<endl;
			
			while(i <= n){
				cout<<"Digite número: ";cin>>n2;
				
				if(n2 > 0){
					sumap += n2;
					contp++;
				}else{
					suman += n2;
					contn++;
				}
				i++;
			}
			if(suman == 0){
				cout<<"La media de los números positivos es: "<<sumap / contp<<endl;
			}else{
				if(sumap == 0){
					cout<<"La media de los números netgativos es: "<<suman / contn<<endl;
				}else{
					cout<<"La media de los números positivos es: "<<sumap / contp<<endl;
					cout<<"La media de los números netgativos es: "<<suman / contn<<endl;
				}
			}
			break;
		
		case 7:
			
			/* Problema No 7. Escribir un programa que pidiendo un valor N seguido de N números, calcule el
			máximo y el mínimo de ese conjunto de N números*/
			system("cls");
			int nummayor, nummenor;
			i = 1;
			
			cout<<"Digite cuantos valores desea ingresar: "; cin>>m;
			
			cout<<"Digite número: ";cin>>n;
			nummayor = n;
			nummenor = n;
			while(i < m){
				cout<<"Digite número: ";cin>>n;
				
				if(n > nummayor){
					nummayor = n;
				}else{
					if(n < nummenor){
						nummenor = n;
					}
				}
				i++;
			}
			
			cout<<"El número mayor es: "<<nummayor;
			cout<<"\nEl número menor es: "<<nummenor<<endl;
			break;
		case 8:
			/* Problema No 8. Leer n valores desde teclado y mostrar la
			media de los pares y la media de los impares.*/
			system("cls");
			int mediapar, mediaimpar, contpar, contimpar;
			mediapar = 0;
			mediaimpar = 0;
			contpar = 0;
			contimpar = 0;
			
			cout<<"Para detener ingrese un numero negativo.\n";
			cout<<"Digite un número: ";cin>>n;
			while(n > 0){
				if ((n % 2) == 0){
					mediapar += n;
					contpar++;
				}else{
					mediaimpar += n;
					contimpar++;
				}
				cout<<"Digite un número: "; cin>>n;
			}
			
			if(mediapar == 0){
				mediaimpar = mediaimpar / contimpar;
				cout<<"\nLa media de los número impares es: "<<mediaimpar<<endl;
			}else{
				if(mediaimpar == 0){
					mediapar = mediapar / contpar;
					cout<<"\nLa media de los números pares es: "<<mediapar<<endl;	
				}else{
					mediapar = mediapar / contpar;
					mediaimpar = mediaimpar / contimpar;
					cout<<"\nLa media de los números pares es: "<<mediapar;
					cout<<"\nLa media de los número impares es: "<<mediaimpar<<endl;
				}
			}
			
			
			break;
	}
	
	
	
	
	
	
	system("pause");
	system("cls");
	return main();
}
