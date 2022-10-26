#include<iostream>
#include<cstdlib>
#include<locale.h>
#include<time.h>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y){
		HANDLE hCon;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos; 
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hCon, dwPos);
	}

int main(){
	
	setlocale(LC_CTYPE, "spanish");
	char opcion_de_usuario[1];
	
	do{
		fflush(stdin);
		system("cls");
		cout<<"\t\t-----------\n";
		cout<<"\t\t|   MENU  |";
		cout<<"\n\t\t-----------\n";
		cout<<"\t1.Problema.\n";
		cout<<"\t2.Problema.\n";
		cout<<"\t3.Problema.\n";
		cout<<"\t4.Problema.\n";
		cout<<"\t0.Salir.\n";
		cout<<"Opción: "; 
		gets(opcion_de_usuario);
		
		// Comprueba si el valor ingresado es correcto
		if(! isdigit(opcion_de_usuario[0])){
			cout<<"EL valor ingresado no es un número.\n";
			cout<<"Vuelve a intentarlo.\n";	
			goto stop;	
		}else if((atoi(opcion_de_usuario) < 0) or (atoi(opcion_de_usuario) > 4)){
			cout<<"El valor ingresado no esta en el rango de opciones.\n";
			cout<<"Vuelve a intentarlo.\n";
			goto stop;
		}
		
		system("cls");
		switch(atoi(opcion_de_usuario)){
			/* En el case 1 se calcula el área total de terreno cultivado, el perímetro del área 
			cultivada y el área de terreno no cultivado.*/
			case 1:{
				cout<<"\t\t-----------------\n";
				cout<<"\t\t|   1.Problema  |";
				cout<<"\n\t\t-----------------\n";
				
				int ancho_del_terreno, largo_del_terreno;
				
				cout<<"Digite el ancho del terreno: "; cin>>ancho_del_terreno;
				cout<<"Digite el largo del terreno: "; cin>>largo_del_terreno;
				system("cls");
				cout<<"\t\t-----------------\n";
				cout<<"\t\t|   1.Problema  |";
				cout<<"\n\t\t-----------------\n";
				
				int terreno[ancho_del_terreno][largo_del_terreno];
				int x = 1, y = 4, contador_de_posiciones = 0;
				
				//Esta funcion inicializa la matriz terreno en ceros
				for(int i = 0; i < largo_del_terreno; i++){
					for(int j = 0; j < ancho_del_terreno; j++){
						terreno[i][j] = 0;
					}
				}
				
				// Esta funcion muestra el terreno completo y su cantidad de espacios de 10 metros cuadrados
				for(int i = 0; i < largo_del_terreno; i++){
					for(int j = 0; j < ancho_del_terreno; j++){
						contador_de_posiciones++;
						gotoxy(x,y);
						cout<<"----";
						gotoxy(x-1,y+1);
						cout<<"| "<<contador_de_posiciones<<" |";
						gotoxy(x,y+2);
						cout<<"----";
						x += 7;
					}
					x = 1;
					y += 3;
				}
				cout<<endl;
				
				// Pide al usuario que terrenos estan cultivado y cuales no
				int opcion_de_terreno, contador_de_cultivos = 0;
				while(opcion_de_terreno != 0){
					cout<<"\tDigitar terreno que esta cultivado.\n";
					cout<<"\tDigite 0 para terminar.\n";
					cout<<"Opción: "; cin>>opcion_de_terreno;
					contador_de_posiciones = 1;
					for(int i = 0; i < largo_del_terreno; i++){
						for(int j = 0; j < ancho_del_terreno; j++){
							if(contador_de_posiciones == opcion_de_terreno){
								terreno[i][j] = 1;
								contador_de_cultivos++;
							}
							contador_de_posiciones++;
						}
					}
					
				}
				system("cls");
				x = 1; y = 4;
				contador_de_posiciones = 0; 
				cout<<"\t\t-----------------\n";
				cout<<"\t\t|   1.Problema  |";
				cout<<"\n\t\t-----------------\n";
				cout<<"En 0 estan las partes no cultivadas y en 1 la cultivadas.\n";
				//Muestra los terrenos escogidos por el usuario
				for(int i = 0; i < largo_del_terreno; i++){
					for(int j = 0; j < ancho_del_terreno; j++){
						contador_de_posiciones++;
						gotoxy(x,y);
						cout<<"----";
						gotoxy(x-1,y+1);
						cout<<"| "<<terreno[i][j]<<" |";
						gotoxy(x,y+2);
						cout<<"----";
						x += 7;
					}
					x = 1;
					y += 3;
				}
				cout<<endl;
				
				/*Esta funcion cuenta la cantidad de lados que tiene la figura resultante 
				de todos los terrenos con cultivos*/
				int contador_de_perimetro = 0;
				for(int i = 0; i < largo_del_terreno; i++){
					for(int j = 0; j < ancho_del_terreno; j++){
						if(terreno[i][j] == 1){
							
							if(terreno[i - 1][j] != 1){
								contador_de_perimetro++;
							}
							if(terreno[i + 1][j] != 1){
								contador_de_perimetro++;
							}
							if(terreno[i][j - 1] != 1){
								contador_de_perimetro++;
							}
							if(terreno[i][j + 1] != 1){
								contador_de_perimetro++;
							}
						}
					}
				}
				
				cout<<"\nEl area total del terreno cultivado es: "<<contador_de_cultivos * 10<<"m^2";	
				cout<<"\nEl area total del terreno no cultivado es: "<<(((largo_del_terreno * ancho_del_terreno) - contador_de_cultivos) * 10)<<"m^2";
				cout<<"\nEl perimetro del terreno cultivado es: "<<3.17 * float(contador_de_perimetro)<<"m";
				cout<<endl;
				break;
			}
			// fin case 1
			
			case 2:{
				cout<<"\t\t---------------\n";
				cout<<"\t\t|  2.Problema  |";
				cout<<"\n\t\t---------------\n";
				int mat[10][10];
				int i,j,f,c,suma=0;
				cout<<"Digite filas: ";
				cin>>f;
				cout<<"digite columnas:";
				cin>>c;
				int vec[f];
				//Se introducen valores a la matriz
				for(i=0;i<f;i++){
					for(j=0;j<c;j++){
						cout<<"Matriz: ["<<i<<" "<<"]["<<j<<"]=";
						cin>>mat[i][j];
					}
				}
				//muestra la matriz
				i=0;
				while(i<f){
					j=0;
					while(j<c){
						cout<<mat[i][j]<<" ";
						j++;
					}
					cout<<endl;
					i++;
				}
				
				//Se hace la suma en diagonal
				int suma_diagonal=0;
				for(i=0;i<f;i++){
					suma_diagonal += mat[i][i];
				}
				
				//Se hace la suma de la diagonal secundaria
				int suma_diagonal2 = 0;
				j=c-1;
				for(i=0;i<f;i++,j--){
					suma_diagonal2 += mat[i][j];
				}
				
				//se hace la suma de cada fila de la matriz y se guarda en el vector sumafila
				int sumafila[f];
				for(i=0;i<f;i++){
					suma=0;
					for(j=0;j<c;j++){
						suma += mat[i][j];
					}
					sumafila[i]=suma;
				}
				
				//se hace la suma de cada columna de la matriz y se guarda en el vector suma_columna
				int suma_columna[c];
				for(i=0;i<c;i++){
					suma=0;
					for(j=0;j<f;j++){
						suma += mat[j][i];
					}
					suma_columna[i]=suma;
				}
				
				// Se hace las comparaciones necesarias para identificar si una matriz es magica
				bool validar = true;
				for(i = 0; (sumafila[i] != '\0') and (validar != false) and (i < f); i++){
					if(sumafila[i] != suma_columna[i]){
						validar = false;
						cout<<"h";
						cout<<i;
					}else if(sumafila[i] != suma_diagonal){
						validar = false;
						cout<<"q";
					}else if(sumafila[i] != suma_diagonal2){
						validar = false;
						cout<<"r";
					}
				}
				
				//se muestra si la matriz es magica o no es magica
				if(validar == true){
					cout<<"La matriz es magica.\n";
				}else cout<<"La matriz no es magica.\n";
				
				break;	
			}
			//fin case 2
			
			/*En el case 3 se realiza un programa que calcula la cantidad de unidades vendidas 
			de cada producto en un año, la cantidad de unidades vendidas de los cuatro productos 
			por cada mes, el producto con menos ventas en un año y el mes en que más se vendió cada producto.
			*/ 
			case 3:{
				
				int ventas[4][12];
				int cantidad;
				srand(time(NULL));
				// Pide al usuario que digite la cantidad vendida de cada producto por mes
				// En este caso la matriz se llena sola con numeros aleatorios del 1 al 100
				for(int i = 0; i < 4; i++){
					for(int j = 0; j < 12; j++){
						system("cls");
						cout<<"\t\t-----------------\n";
						cout<<"\t\t|   3.Problema  |";
						cout<<"\n\t\t-----------------\n";
						cout<<"Digite la venta total del producto "<<i+1<<" en el mes "<<j+1<<": ";
						ventas[i][j] = 1 + (rand() % 100); 
						cout<<endl;
					}
				}
				
				//Mostrar la matriz y calcular 
				int x = 16, y = 5;
				system("cls");
				cout<<"\t\t-----------------\n";
				cout<<"\t\t|   3.Problema  |";
				cout<<"\n\t\t-----------------\n";
				cout<<"Producto/mes |\t";
				cout<<"1    2    3    4    5    6    7    8    9    10   11   12\n";
				cout<<"_____________|_____________________________________________________________\n";
				for(int i = 0; i < 4; i++){
					cout<<"Producto "<<i+1<<"   |\t";
					for(int j = 0; j < 12; j++){
						gotoxy(x,y);
						cout<<ventas[i][j];
						x += 5;
					}
					x = 16;
					y++;
					cout<<endl;
				}
				cout<<"_____________|_____________________________________________________________\n";
				
				/*Muestra la cantidad de unidades vendidas de cada producto en un año, la
				cantidad de unidades vendidas de los cuatro productos por cada mes, 
				el producto con menos ventas en un año y el mes en que más se vendió cada producto.*/
				int suma_de_unidades = 0, contador = 0;
				int menor, menor_de_suma; 
				int mes_mayor, mayor;
				do{
					suma_de_unidades = 0;
					for(int j = 0; j < 12; j++){
						suma_de_unidades += ventas[contador][j];
						if(j == 0){
							mayor = ventas[contador][j];
						}
						if(ventas[contador][j] >= mayor){
							mayor = ventas[contador][j];
							mes_mayor = j + 1;
						}
					}
					
					if(contador == 0){
						menor_de_suma = suma_de_unidades;
					}
	
					if(suma_de_unidades <= menor_de_suma){
						menor_de_suma = suma_de_unidades;
						menor = contador + 1;
					}
					cout<<"\nDel producto "<<contador + 1<<" se vendieron: "<<suma_de_unidades;
					cout<<" Y su mes con mas ventas fue el mes "<<mes_mayor<<endl; 
					contador++;
				}while(contador != 4);
				
				cout<<"\nEl producto con menos ventas en el año es el producto "<<menor<<endl;
				
				break;
			}
			// final case 3
			
			case 4:{
				cout<<"\t\t-----------------\n";
				cout<<"\t\t|   4.Problema  |";
				cout<<"\n\t\t-----------------\n";
				//4
				int n; 
				cout<<"Ingrese el tamaño de la matriz (cuadrada) ";
				cin>>n;
				int mat[n][n];
				
				int i, j;
				
				cout<<"Ejercicio A \n";
				//a
				srand(time(0));
				
				for (i=0; i<n; i++)
				{
					
					for(j=0; j<n; j++)
					{
						mat[i][j]=rand()% 9+1;
						
					if((i+j==n-1) or (i==j))
					{ mat[i] [j]=0;}
					else {}	
					
						cout<<mat[i][j] <<" ";
					}
					cout<<endl;
				}
				
				cout<<"\n\n";
				
				cout<<"Ejercicio B \n";
				for (i=0; i<n; i++)
				{
					
					for(j=0; j<n; j++)
					{
						mat[i][j]=rand()% 9+1;
						
					if((i==0) or (j==0) or (j==n-1) or (i==n-1)) 
					{ mat[i] [j]=0;}
					else {}	
					
						cout<<mat[i][j] <<" ";
					}
					cout<<endl;
				}
				
				cout<<"\n\n";
				
				cout<<"Ejercicio C \n";
				for (i=0; i<n; i++)
				{
					
					for(j=0; j<n; j++)
					{
						mat[i][j]=i+j;
						
						cout<<mat[i][j] <<" ";
					}
					cout<<endl;
				}
				
					cout<<"\n\n";
				
				int cont=1;
				cout<<"Ejercicio D \n";
				
					for (i=0; i<n; i++)
				{
					
					for(j=0; j<n; j++)
					{
						mat[i][j]=rand()% 9+1;
						
					if(i==j)
					{mat[i][j]=cont; cont++;}
					else {}
					
					cout<<mat[i][j] <<" ";
					}
					cout<<endl;
				}
				
				cout<<"\n\n";
				cout<<"Ejercicio E \n";
				
				cont=1;
				int c;
				
				for (i=0; i<n; i++)
				{
					c=n;
					cont=1;
					for(j=0; j<n; j++)
					{
					
					if(i%2!=0)	
					{ mat[i][j]=cont; cont++;} else { mat[i] [j]=c; c--;	}
					
					cout<<mat[i][j] <<" ";
					}
					cout<<endl;
				}
					cout<<"\n\n";
				cout<<"Ejercicio F \n";
				
				int vec[n];
				int suma=0;
				for (i=0; i<n; i++)
				{
					suma=0;
					for(j=0; j<n; j++)
					{
						mat[i][j]=rand()% 9+1;
						
						suma=suma+mat[i][j];
					
						cout<<mat[i][j] <<" ";
					}
					vec[i]=suma;
					cout<<endl;
				}
				cout<<"El vector suma de las filas de la matriz es \n V={ ";
				
				
				for(j=0; j<i; j++)
				{
				
				cout<<vec[j] <<" ";
				}
				cout<<"}\n";
				break;
			}
		}
				
		
		stop:
		system("pause");
	}while(atoi(opcion_de_usuario) != 0);
	
	return 0;
}
