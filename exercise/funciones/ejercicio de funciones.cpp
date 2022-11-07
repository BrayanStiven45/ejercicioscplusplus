#include <iostream>
#include<cstdlib>
#include<windows.h>
#include<time.h>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
//Contraseña de funciones
void menu_problema();
//contraseñas para la funcion problema_1
void problema_1();
void leer_orden(int &fila,int &columna);
void llenar_matriz(int matriz[100][100], int fila, int columna);
void mostrar_matriz(int matriz[100][100], int fila, int columna);
int suma_par(int matriz1[100][100], int matriz2[100][100], int fila, int columna);
int suma_impar(int matriz1[100][100], int matriz2[100][100], int fila, int columna);
int numeros_primos(int matriz[100][100], int primos[100], int fila, int columna);
int validar_primo(int primo);
void mostrar_vector(int vector[100]);
int suma_diago_prin(int matriz[100][100], int fila);
int suma_diago_sec(int matriz[100][100], int columna);
void sumar_matrices(int matriz1[100][100], int matriz2[100][100], int suma_matriz[100][100], int fila, int columna);
int sumar_elementos(int matriz[100][100], int fila, int columna);
int promedio_elementos(int suma, int divisor);
//fin contraseñas para la funcion problema_1

//Contraseñas para la funcion problema_2
void problema_2();
void leer_orden_2(int &columna);
void llenar_conjunto(int conjunto[30], int columna);
void organizar_conjunto(int conjunto[30]);
char repetido(int conjunto, int conjuntocom[30], int columna);
void union_(int z[30],int x[30],int union1[30], int columna);
void interseccion(int z[30], int x[30], int inter[30], int columna);
void complementario(int conjunto[30], int comple[30], int columna);
void diferencia_funcion(int primer_conjunto[30], int segundo_conjunto[30], int diferencia[30], int columna);
//fin contraseñas para la funcion problema_2 

//Contraseña para la funcion problema_3
void problema_3();
int promedio_estadistica(int numeros[30],int tamano);
void desviacion_media(int numeros[30], int tamano, int promedio, int indicador);
int desviacion_tipica(int numeros[30], int tamano, int promedio);
//Fin Contraseña para la funcion problema_3
//fin de contraseñas

int main(){
	setlocale(LC_CTYPE,"spanish");
	menu_problema();
	
	return 0;
}

//funcion menu_problema
//llama a funciones problema_1, problema_2, problema_3, segun lo que el usurio escoja
void menu_problema(){
	system("cls");
	int opcion;
	cout<<"\t\t\t----------\n";
	cout<<"\t\t\t|  Menú  |\n";
	cout<<"\t\t\t----------\n";
	cout<<"\t1.Problema.\n";
	cout<<"\t2.Problema.\n";
	cout<<"\t3.Problema.\n";
	cout<<"\t0.Salir.\n";
	cout<<"Opción: "; cin>>opcion;
	
	switch(opcion){
		case 1:{
			problema_1();
			break;
		}
		
		case 2:{
			problema_2();
			break;
		}
		
		case 3:{
			problema_3();
			break;
		}
	}
	return menu_problema();
}
//fin funcion menu_problema

// funcion del ejercio 1
void problema_1(){
	int opcion;
	int fila,columna;
	int matriz1[100][100], primos_matriz1[100];
	int matriz2[100][100], primos_matriz2[100];
	int suma_matriz[100][100];
	do{
		system("cls");
		cout<<"\t\t-----------------\n";
		cout<<"\t\t|   1.Problema\t|";
		cout<<"\n\t\t-----------------\n";
		cout<<"\t1.Leer orden de la matriz.\n";
		cout<<"\t2.Leer matriz1.\n";
		cout<<"\t3.Leer matriz2.\n";
		cout<<"\t4.Mostrar matriz1.\n";
		cout<<"\t5.Mostrar matriz2.\n";
		cout<<"\t6.Sumar numeros pares e impares.\n";
		cout<<"\t7.Numeros primos colocarlos en un arreglo.\n";
		cout<<"\t8.Sumar diagonal principal.\n";
		cout<<"\t9.Sumar diagonal secundaria.\n";
		cout<<"\t10.Sumar matrices.\n";
		cout<<"\t11.Sumar todos los elementos de una matriz.\n";
		cout<<"\t12.Promedio de los terminos de una matriz.\n";
		cout<<"\t0.Salir.\n";
		cout<<"Opcion: "; cin>>opcion;
		system("cls");
		cout<<"\t\t-----------------\n";
		cout<<"\t\t|   1.Problema\t|";
		cout<<"\n\t\t-----------------\n";
		switch(opcion){
			case 1:{
				leer_orden(fila,columna);
				break;
			}
			
			case 2:{
				llenar_matriz(matriz1, fila, columna);
				break;
			}
			
			case 3:{
				llenar_matriz(matriz2,fila,columna);
				break;
			}
			
			case 4:{
				mostrar_matriz(matriz1, fila, columna);
				break;
			}
			
			case 5:{
				mostrar_matriz(matriz2, fila, columna);
				break;
			}
			
			case 6:{
				cout<<"La suma de los numeros pares es: "; 
				cout<<suma_par(matriz1,matriz2,fila,columna)<<endl;
				cout<<"La suma de los numeros impares es: "; 
				cout<<suma_impar(matriz1,matriz2,fila,columna)<<endl;
				break;
			}
			
			case 7:{
				cout<<"Los números primos de la matriz1 son: ";
				numeros_primos(matriz1, primos_matriz1, fila, columna);
				mostrar_vector(primos_matriz1);
				cout<<"\nLos números primos de la matriz2 son: ";
				numeros_primos(matriz2, primos_matriz2, fila, columna);
				mostrar_vector(primos_matriz2);
				cout<<endl;
				break;
			}
			
			case 8:{
				cout<<"La suma de la diagonal principal de la matriz1 es: ";
				cout<<suma_diago_prin(matriz1, fila);
				cout<<"\nLa suma de la diagonal principal de la matriz2 es: ";
				cout<<suma_diago_prin(matriz2, fila);
				cout<<endl;
				break;
			}
			
			case 9:{
				cout<<"La suma de la diagonal secundaria de la matriz1 es: ";
				cout<<suma_diago_sec(matriz1, columna);
				cout<<"\nLa suma de la diagonal secundaria de la matriz2 es: ";
				cout<<suma_diago_sec(matriz2, columna);
				cout<<endl;
				break;
			}
			
			case 10:{				
				cout<<"La suma de las dos matrices es: \n";
				sumar_matrices(matriz1, matriz2,suma_matriz, fila, columna);
				mostrar_matriz(suma_matriz,fila,columna);
				break;
			}
			
			case 11:{
				int opcion_11;
				cout<<"Escoja la matriz a la cual sumar sus elementos: \n";
				cout<<"1.Matriz1.\n";
				cout<<"2.Matriz2.\n";
				cout<<"Opcion: \n"; cin>>opcion_11;
				system("cls");
				switch(opcion_11){
					case 1:{
						cout<<"\t\t------------------------\n";
						cout<<"\t\t|\t11.Problema\t|";
						cout<<"\n\t\t------------------------\n";
						cout<<"La suma de los elementos de la matriz es: ";
						cout<< sumar_elementos(matriz1, fila, columna)<<endl;
						break;
					}
					
					case 2:{
						cout<<"\t\t------------------------\n";
						cout<<"\t\t|\t11.Problema\t|";
						cout<<"\n\t\t------------------------\n";
						cout<<"La suma de los elementos de la matriz es: ";
						cout<< sumar_elementos(matriz2, fila, columna)<<endl;
						break;
					}
				}
				break;
			}
			
			case 12:{
				int opcion_12;
				cout<<"Escoja la matriz a la cual promediar sus elementos: \n";
				cout<<"1.Matriz1.\n";
				cout<<"2.Matriz2.\n";
				cout<<"Opcion: \n"; cin>>opcion_12;
				system("cls");
				switch(opcion_12){
					case 1:{
						cout<<"\t\t------------------------\n";
						cout<<"\t\t|\t12.Problema\t|";
						cout<<"\n\t\t------------------------\n";
						cout<<"El promedio de los elementos de la matriz es: ";
						cout<< promedio_elementos(sumar_elementos(matriz1, fila, columna), fila * columna)<<endl;
						break;
					}
					
					case 2:{
						cout<<"\t\t------------------------\n";
						cout<<"\t\t|\t12.Problema\t|";
						cout<<"\n\t\t------------------------\n";
						cout<<"El promedio de los elementos de la matriz es: ";
						cout<< promedio_elementos(sumar_elementos(matriz2, fila, columna), fila * columna)<<endl;
						break;
					}
				}
				break;
			}
		}
		
		system("pause");
	}while(opcion != 0);
}
//fin del ejercicio 1

// Pide al usuario el tamaño de las matrices
void leer_orden(int &fila, int &columna){
	cout<<"Digite la cantidad de filas para las dos matrices.\n";
	cin>>fila;
	cout<<"Digite la cantidad de columnas para las dos matrices.\n";
	cin>>columna;
}
// fin funcion leer_orden

void llenar_matriz(int matriz[100][100],int fila, int columna){
	srand(time(NULL));
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			matriz[i][j] = 1 + (rand() % 20);
		}
	}
}

void mostrar_matriz(int matriz[100][100], int fila, int columna){
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int suma_par(int matriz1[100][100], int matriz2[100][100], int fila, int columna){
	int suma = 0;
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			if((matriz1[i][j] % 2) == 0){
				suma += matriz1[i][j];
			}
			if((matriz2[i][j] % 2) == 0){
				suma += matriz2[i][j];
			}
		}
	}
	return suma;
}

int suma_impar(int matriz1[100][100], int matriz2[100][100], int fila, int columna){
	int suma = 0;
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			if((matriz1[i][j] % 2) != 0){
				suma += matriz1[i][j];
			}
			if((matriz2[i][j] % 2) != 0){
				suma += matriz2[i][j];
			}
		}
	}
	return suma;
}

int numeros_primos(int matriz[100][100], int primos[100], int fila, int columna){
	int c = 0;
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			if(validar_primo(matriz[i][j]) == 0){
				primos[c] = matriz[i][j];
				c++;
			}
		}
	}
	primos[c+1] = '\0';
}

int validar_primo(int primo){
	int contador_deno = 0;
	for(int denominador = 1; denominador <= primo; denominador++){
		if((primo % denominador) == 0){
			contador_deno++;
		}
	}
	
	if(contador_deno == 2){
		return 0;
	} return 1;
}

void mostrar_vector(int vector[100]){
	for(int i = 0; vector[i] != '\0'; i++){
		cout<<vector[i]<<" ";
	}
}

int suma_diago_prin(int matriz[100][100], int fila){
	int suma_diagonal = 0;
	for(int i = 0; i < fila; i++){
		suma_diagonal += matriz[i][i];
	}
	return suma_diagonal;
}

int suma_diago_sec(int matriz[100][100], int columna){
	int suma_diagonal = 0;
	int i = 0;
	for(int j = (columna - 1); j >= 0; j--, i++){
		suma_diagonal += matriz[i][j];
	}
	return suma_diagonal;
}

void sumar_matrices(int matriz1[100][100], int matriz2[100][100], int suma_matriz[100][100], int fila, int columna){
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			suma_matriz[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
}

int sumar_elementos(int matriz[100][100], int fila, int columna){
	int suma_elemento = 0;
	
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			suma_elemento += matriz[i][j];
		}
	}
	return suma_elemento;
}

int promedio_elementos(int suma, int divisor){
	int promedio;
	promedio = suma / divisor;
	return promedio;
}

// ejercicios del problema_2
void problema_2(){
		int opcion, columna;
		int union1[30];
		int z[30], x[30];
		
		do{
			system("cls");
			cout<<"\t\t-----------------\n";
			cout<<"\t\t|   2.Problema \t|";
			cout<<"\n\t\t-----------------\n";
			cout<<"\t1.Leer orden de los conjuntos.\n";
			cout<<"\t2.Leer conjunto z.\n";
			cout<<"\t3.Leer conjunto x.\n";
			cout<<"\t4.Mostrar conjunto z.\n";
			cout<<"\t5.Mostrar conjunto x.\n";
			cout<<"\t6.Union.\n";
			cout<<"\t7.Intersección.\n"; 
			cout<<"\t8.Complemento.\n"; 
			cout<<"\t9.Diferencia.\n";
			cout<<"\t10.Diferencia Simétrica.\n";
			cout<<"\t0.Salir.\n";
			cout<<"Opción: "; cin>>opcion;
			system("cls");
			cout<<"\t\t------------------------\n";
			cout<<"\t\t|\t2.Problema\t|";
			cout<<"\n\t\t------------------------\n";
			switch(opcion){
				case 1:{
					leer_orden_2(columna);
					break;
				}
				
				case 2:{
					llenar_conjunto(z, columna);
					organizar_conjunto(z);
					break;
				}
				
				case 3:{
					llenar_conjunto(x,columna);
					organizar_conjunto(x);
					break;
				}
				
				case 4:{
					mostrar_vector(z);
					cout<<endl;
					break;
				}
				 
				case 5:{
					mostrar_vector(x);
					cout<<endl;
					break;
				}
				
				case 6:{
					cout<<"La union de los dos cojuntos es: ";
					union_(z,x,union1, columna);
					organizar_conjunto(union1);
					mostrar_vector(union1);
					cout<<endl;
					break;
				}
				
				case 7:{
					interseccion(z,x,union1,columna);
					if(union1[0] == '\0'){
						cout<<"Los conjuntos no tiene interseccion.\n";
					}else{
						cout<<"La interseccion de los dos conjuntos es: ";
						mostrar_vector(union1);	
						cout<<endl;
					}
					
					break;
				}
				
				case 8:{
					int comple[30];
					cout<<"El complementario del conjunto z: ";
					complementario(z, comple, columna);
					mostrar_vector(comple);
					cout<<"....\n";
					cout<<"El complementario del conjunto x: ";
					complementario(x, comple, columna);
					mostrar_vector(comple);
					cout<<"....\n";
					break;
				}
				
				case 9:{
					int diferencia[30];
					cout<<"La diferencia entre z-x es: ";
					diferencia_funcion(z, x, diferencia, columna);
					mostrar_vector(diferencia);
					cout<<"\nLa diferencia entre x-z es: ";
					diferencia_funcion(x, z, diferencia, columna);
					mostrar_vector(diferencia);
					cout<<endl;
					break;
				}
				
				case 10:{
					cout<<"La diferencia simetrica entre z-x es: ";
					union_(z,x,union1, columna);
					organizar_conjunto(union1);
					mostrar_vector(union1);
					cout<<endl;
					break;
				}
			}
			system("pause");
		}while(opcion != 0);		
}

void leer_orden_2(int &columna){
	cout<<"Digite el tamaño del los vectores: ";
	cin>>columna;
}

void llenar_conjunto(int conjunto[30], int columna){
	srand(time(NULL));
	int i;
	for(i = 0; i < columna; i++){
		conjunto[i] = 1 + (rand() % 20);
	}
	conjunto[i] = '\0';
}

void organizar_conjunto(int conjunto[30]){
	int posicion, menor;
	for(int i = 0;  conjunto[i] != '\0'; i++){
		menor = conjunto[i];
		posicion = i;
		for(int j = i;conjunto[j] != '\0'; j++){
			if(conjunto[j] <= menor){
				menor = conjunto[j];
				posicion = j;
			}
		}
		conjunto[posicion] = conjunto[i];
		conjunto[i] = menor;
	}
}

char repetido(int conjunto, int conjuntocom[30], int columna){
	bool validar = false;
	for(int j = 0; (conjuntocom[j] != '\0') and (validar != true); j++){
		if(conjuntocom[j] == conjunto){
			validar = true;
		}
	}
	return validar;
}

void union_(int z[30],int x[30],int union1[30], int columna){
	int pounion = 0;
	union1[0] = '\0';
	
	for(int i = 0; i < columna; i++){
		if(!repetido(z[i],union1,columna)){
			union1[pounion] = z[i];
			union1[pounion+1] = '\0';
			pounion++;
		}
	}
	
	for(int i = 0; i < columna; i++){
		if(!repetido(x[i],union1,columna)){
			union1[pounion] = x[i];
			union1[pounion+1] = '\0';
			pounion++;
		}	
	}
}

void interseccion(int z[30], int x[30], int inter[30], int columna){
	bool validar = false;
	int posicion = 0;
	inter[0] = '\0';
	for(int i = 0; i < columna; i++){
		for(int j = 0; j < columna; j++){
			if(repetido(z[i], inter, columna)){
				validar = true;	
			}
			
			if((validar == false) and (repetido(z[i], x, columna))){
				inter[posicion] = z[i];
				posicion++;
				inter[posicion] = '\0';
			}else validar = false;
		}
	}
}

void complementario(int conjunto[30], int comple[30], int columna){
	int i,contador = 1;
	for(i = 0; i < 20; contador++){
		if(!repetido(contador, conjunto, columna)){
			comple[i] = contador;
			i++;
		}
	}	
	comple[i] = '\0';
}

void diferencia_funcion(int primer_conjunto[30], int segundo_conjunto[30], int diferencia[30], int columna){
	int posicion = 0;
	for(int i = 0; i < columna; i++){
		if(!repetido(primer_conjunto[i], segundo_conjunto, columna)){
			diferencia[posicion] = primer_conjunto[i];
			posicion++;
		}
	}
	diferencia[posicion] = '\0';
}
// fin del ejercicio del problema_2

// ejercicios del problema_3
void problema_3(){
	int opcion, tamano, promedio;
	int numeros[30];
	
	do{
		system("cls");
		cout<<"\t\t-----------------\n";
		cout<<"\t\t|   3.Problema \t|";
		cout<<"\n\t\t-----------------\n";
		cout<<"\t1.El programa nos pide N valores (serie estadística).\n";
		cout<<"\t2.Mostrar números.\n";
		cout<<"\t3.El programa calcula la media aritmética.\n";
		cout<<"\t4.El programa calcula las desviaciones respecto a la media.\n";
		cout<<"\t5.El programa calcula la desviación media.\n";
		cout<<"\t6.El programa calcula la desviación típica.\n";
		cout<<"\t0.Salir.\n";
		cout<<"Opción: "; cin>>opcion;
		system("cls");
		cout<<"\t\t-----------------\n";
		cout<<"\t\t|   3.Problema \t|";
		cout<<"\n\t\t-----------------\n";
		switch(opcion){
			case 1:{
				cout<<"Digite la cantidad de valores a digitar: ";
				cin>>tamano;
				llenar_conjunto(numeros, tamano);
				break;
			}
			
			case 2:{
				mostrar_vector(numeros);
				cout<<endl;
				break;
			}
			
			case 3:{
				cout<<"El promedio de los números: ";
				promedio = promedio_estadistica(numeros,tamano);
				cout<<promedio;
				cout<<endl;
				break;
			}
			
			case 4:{
				cout<<"La desviacion respecto a la media es: ";
				desviacion_media(numeros, tamano, promedio, 1);
				cout<<endl;
				break;
			}
			
			case 5:{
				cout<<"La desviacion media es: ";
				desviacion_media(numeros, tamano, promedio, 0);
				cout<<endl;
				break;
			}
			
			case 6:{
				cout<<"La desviacion tipica es: ";
				cout<<desviacion_tipica(numeros, tamano, promedio);
				cout<<endl;
				break;
			}
		}
		system("pause");
	}while(opcion != 0);
}
int promedio_estadistica(int numeros[30],int tamano){
	int suma = 0;
	for(int i = 0; i < tamano; i++){
		suma += numeros[i]; 
	}
	int promedio = suma / tamano;
	return promedio;
}

void desviacion_media(int numeros[30], int tamano, int promedio, int indicador){
	if(indicador == 1){
		for(int i = 0; i < tamano; i++){
			cout<<numeros[i] - promedio<<" ";
		}
	}else{
		for(int i = 0; i < tamano; i++){
			cout<<abs(numeros[i] - promedio)<<" ";
		}
	}
}

int desviacion_tipica(int numeros[30], int tamano, int promedio){
	int suma = 0;
	for(int i = 0; i < tamano; i++){
		suma += pow(numeros[i] - promedio, 2);
	}
	suma = pow(suma / tamano,0.5);
	return suma;
}

// fin funcion del problema_3
