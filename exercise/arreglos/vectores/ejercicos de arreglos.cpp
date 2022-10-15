#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<time.h>
#include<math.h>

using namespace std;

int main(){
	int opcion;
	setlocale(LC_CTYPE, "SPANISH");
	
	do{
		
		// Mostrar el menu de los ejercicios
		cout<<"0.Salir.\n";
		cout<<"1.Ejercicio.\n";
		cout<<"2.Ejercicio.\n";
		cout<<"3.Ejercicio.\n";
		cout<<"4.Ejercicio.\n";
		cout<<"5.Ejercicio.\n";
		cout<<"6.Ejercicio.\n";
		cout<<"7.Ejercicio.\n";
		cout<<"8.Ejercicio.\n";
		cout<<"9.Ejercicio.\n";
		cout<<"10.Ejercicio.\n";
		cout<<"11.Ejercicio.\n";
		cout<<"12.Ejercicio.\n";
		cout<<"13.Ejercicio.\n";
		cout<<"14.Ejercicio.\n";
		cout<<"15.Ejercicio.\n";
		cout<<"Opción: "; cin>>opcion;
		system("cls");
		
		switch(opcion){
			case 1:
				{
					int n, cont=0, i=0,  y, x, v;
				
				
					
					cout<<"Ingrese el tamanio del vector \n";
					cin>>n;
					int vec[n];
					cout<<"Ingrese los valores del vector \n";
					
					do{
					
					cin>>vec[i];
						
					i++;
					}while (i<n);
					
					
					
					cout<<"vec= { ";
					for (i=0; i<n; i++)
					{	
						cont=0;
					for (x=1; x<=vec[i]; x++)
								{
					
								if (vec[i]%x==0)
								{cont++;}
								}
								if (cont==2)
							{y=vec[i];} else {	}
								
						cout<< vec[i] <<" ";
						
					}
					
							
						
					cout<<" }\n ";
					
						
					cout<<"El ultimo valor primo es " <<y <<endl ;
				}
				
			break;
			
			case 2:
				{
					int suma=0, n, i=0;
					
				
					
					cout<<"Ingrese el tamanio del vector \n";
					cin>>n;
					int vec[n];
					srand (time (NULL));
				
					cout<<" V={ ";
					do{
					
					vec[i]= rand () % 100;
					cout<<vec[i] <<" ";
					
					if(vec[i]%2!=0)
					{suma=suma+vec[i];} else{}
					
					i++;
					
					}while (i<n);
					
					
					cout<< " }";
					
					cout<<"La suma de los impares es " <<suma <<endl;		
				}
				
			break;
			
			case 3:
				{
					int n, i;
					
					int vec[10];
					
					srand (time (NULL));
							
					cout<<"El vector generado es:\nV={ ";
						
					for (i=0; i<10; i++ )
					{
						vec[i]= rand () % 100;
						cout<<vec[i]; 
						
						cout<<" ";
					}
					cout<<"}\n";
					
					cout<<"Y sus elementos al cuadrado son \n";
					
					cout<<"V={ ";
					for (i=0; i<10; i++ )
					{	
						cout<<pow(vec[i], 2); 			
						cout<<" ";
					}
					cout<<"}";
				}
				
			break;
			
			case 4:
				{
					int n, i, x;
					double suma=0;
					
					cout<<"Ingrese el tamanio del vector ";
					cin>>x;
					int vec1[x];
					
					srand (time (NULL));
					
					cout<<"v={ ";
					
					for (i=0; i<x; i++ )
					{
						vec1[i]= rand () % 100;
						cout<<vec1 [i];
						suma=suma+ vec1[i];
						cout<<" ";
						
					}
					cout<<"}\n";
					cout<<"El promedio del vector es " <<double (suma/x) <<endl;
					
					cout<<"Los elementos mayores al promedio son \n";
					
					cout<<"v={ ";
					
					for (n=0; n<i; n++)
					{
						if(vec1[n]>=(suma/x))
						{ cout<<vec1[n] << " ";} else { }
					}
						
					cout<<" }\n";
				}
				
			break;
			
			case 5:
				{
					int n, i, x, cont;
					
					cout<<"Ingrese el tamanio de el vector ";
					cin>>n;
					int vec[n];
					
					srand (time (NULL));
					
					cout<<" V= {";
					for (i=0; i<n; i++)
					{
						vec[i]=rand () % 10;
						cout<<vec[i] <<" ";
						
					} cout<<" }";
					
					cout<<"Que numero desea buscar? \n";
					cin>>x;
					
					cont=0;
					for (i=0; i<n; i++)
					{
						if(vec[i]==x)
						{cont++;} else {}
						
					}
					cout<<"El numero "<<x<<" esta repetido "<<cont<< " veces\n";
				}
				
			break;
			
			case 6:
				{
					int tv, i, al, j, iapo;
					cout<<"Ingrese el tamano del vector"<<endl;
					cin>>tv;
					int vec[tv];
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector es [";
					while(i<tv-1){
						cout<<vec[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec[i];
					}
					cout<<"]"<<endl;
					i=tv-1;
					cout<<"El vector invertido es: [";
					while(i>0){
						cout<<vec[i]<<", ";
						i--;
					}
					if(i==0){
						cout<<vec[i]<<"]"<<endl;
					}
				}
				
			break;
			
			case 7:
				{
					int tv, i, al, j, iapo;
					
					cout<<"Ingrese el tamano del vector"<<endl;
					cin>>tv;
					int vec[tv];
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector es [";
					while(i < tv-1){
						cout<<vec[i]<<", ";
						i++;
					}
					
					if(i == tv-1){
						cout<<vec[i];
					}
					
					cout<<"]"<<endl;
					
					i=0;
					al = vec[0];
					while(i <= tv-1){
						if(vec[i]>al){
							al=vec[i];
							iapo=i;	
						}else{
						}
						i++;
					}
					cout<<"El numero mayor es: "<<al<<" y su posicion es: "<<iapo<<endl;
				}
				
			break;
			
			case 8:
				{
					int tv, i, al, j, iapo;
					
					cout<<"Ingrese el tamano de los vectores"<<endl;
					cin>>tv;
					int vec[tv], vec2[tv];
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector 1 es [";
					while(i<tv-1){
						cout<<vec[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec[i];
					}
					cout<<"]"<<endl;
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec2[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector 2 es [";
					while(i<tv-1){
						cout<<vec2[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec2[i];
					}
					cout<<"]"<<endl;
					i=0;
					cout<<"El vector con la concatenacion de los dos arreglos dados es: [";
					while(i<tv-1){
						cout<<vec[i]<<", "<<vec2[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec[i]<<vec2[i];
					}
					cout<<"]"<<endl;
				}
				
			break;
			
			case 9:
				{
					int tv, i, al, j, iapo;
					cout<<"Ingrese el tamano del vector"<<endl;
					cin>>tv;
					int vec[tv];
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector es [";
					while(i<tv-1){
						cout<<vec[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec[i];
					}
					cout<<"]"<<endl;
					
					for(i=0, j=0; i<tv; i++){
						int tem=vec[i];
						j=i-1;
						while(j>=0 and tem<vec[j]){
							vec[j+1]=vec[j];
							j--;
							}
						vec[j+1]=tem;
					}
						i=0;
					cout<<"El ordenamiento es: [";
					while(i<tv-1){
						cout<<vec[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec[i];
					}
					cout<<"]"<<endl;
				}
				
			break;
			
			case 10:
				{
					int tv, i, al, j, iapo;
					
					cout<<"Ingrese el tamano de los vectores"<<endl;
					cin>>tv;
					int vec[tv], vec2[tv];
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector 1 es [";
					while(i<tv-1){
						cout<<vec[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec[i];
					}
					cout<<"]"<<endl;
					for(i=0; i<tv; i++){
						srand(time(NULL) + rand());
						vec2[i]= rand() % 100;
						}
					i=0;
					cout<<"El vector 2 es [";
					while(i<tv-1){
						cout<<vec2[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec2[i];
					}
					cout<<"]"<<endl;
					int vec3[tv];
					for(i=0; i<tv; i++){
						vec3[i]=vec[i]+vec2[i];
					}
					i=0;
					cout<<"La suma de los vectores es [";
					while(i<tv-1){
						cout<<vec3[i]<<", ";
						i++;
					}
					if(i=tv-1){
						cout<<vec3[i];
					}
					cout<<"]"<<endl;
				}
				
			break;
			
			case 11:
				{
					int cantidad;
					int i;
					// pide el tamaño del vector
					cout<<"Digite la cantidad de números a ingresar. "; cin>>cantidad;
					int numeros[cantidad];
					int pares[cantidad];
					int posicion_pares;
					
					//introduce valores random al vector numeros y los muestra
					srand(time(NULL));
					system("cls");
					cout<<"\nVector números = { ";
					for(i = 0; i < cantidad; i++){
						numeros[i] = rand() % 100;
						cout<<numeros[i]<<" ";
					}
					cout<<"}";
					/*Compara todos los nodos del vector numeros si son pares, e introducir los pares en otro 
					vector llamado pares*/
					for(i = 0, posicion_pares = 0; i < cantidad; i++){
						if((numeros[i] % 2) == 0){
							pares[posicion_pares] = numeros[i];
							posicion_pares++;
						}
					}
					
					//Mostrar el vactor pares
					
					cout<<"\nVector de pares = { ";
					for(i = 0; i < posicion_pares; i++){
						cout<<pares[i]<<" ";
					}
					cout<<"}\n";	
				}
			break;
			
			case 12:
				{
					//Pido el tamaño del vector
					int cantidad;
					cout<<"Digite el tamaño del vector: "; cin>>cantidad;
					
					//Introduce valores al vector y los muestra
					system("cls");
					int i;
					int numeros[cantidad];
					srand(time(NULL));
					cout<<"\nVector números = { ";
					for(i = 0; i < cantidad; i++){
						numeros[i] = (rand() % 100);
						cout<<numeros[i]<<" ";
					}
					cout<<"}";
					
					//Compara si el nodo del vector es primo y lo introduce en el vector primo
					int contador, divisor;
					int posicion_primos;
					posicion_primos = 0;
					int primos[cantidad];
					int numero_apoyo;
					
					for(i = 0; i < cantidad; i++){
						
						numero_apoyo = numeros[i];
						contador = 0;
						for(divisor = 1; divisor <= numero_apoyo; divisor++){
							if((numero_apoyo % divisor) == 0){
								contador++;
							}
						}
					
						if(contador == 2){
							primos[posicion_primos] = numero_apoyo;
							posicion_primos++;
						}
					}
					
					//Muestra el vector de primos
					cout<<"\nVector de primos = { ";
					for(i = 0; i < posicion_primos; i++){
						cout<<primos[i]<<" ";
					}
					cout<<"}\n";
				}
			break;
			
			case 13:
				{
					//Pido el tamaño del vector
					int cantidad;
					cout<<"Digite el tamaño del vector: "; cin>>cantidad;
					
					//Introduce valores al vector y los muestra
					system("cls");
					int i;
					int numeros[cantidad];
					srand(time(NULL));
					cout<<"\nVector números = { ";
					for(i = 0; i < cantidad; i++){
						numeros[i] = (rand() % 100);
						cout<<numeros[i]<<" ";
					}
					cout<<"}";
					
					/*Ingresa en el vector par los nodos que contengan numeros pares del vector numeros y 
					en el vector impares los nodos que contengan numeros impares*/
					int posiciones_pares = 0, posiciones_impares = 0;
					int pares[cantidad], impares[cantidad];
					for(int i = 0; i < cantidad; i++){
						
						if((numeros[i] % 2) == 0){
							pares[posiciones_pares] = numeros[i];
							posiciones_pares++;
						}else{
							impares[posiciones_impares] = numeros[i];
							posiciones_impares++;
						}
						
					}
					
					//Mostrar el vector de numeros pares
					
					cout<<"\nVector de numeros pares = { ";
					for(i = 0; i < posiciones_pares; i++){
						cout<<pares[i]<<" ";
					}
					cout<<"}"<<endl;
					
					//Mostrar el vector de numeros impares
					
					cout<<"Vector de numeros impares = { ";
					for(i = 0; i < posiciones_impares; i++){
						cout<<impares[i]<<" ";
					}
					cout<<"}"<<endl;
				}
				
			break;
			
			case 14:
				{
					//Pido el tamaño del vector
					int cantidad;
					cout<<"Digite el tamaño del vector: "; cin>>cantidad;
					
					int fibonacci[cantidad];
					
					//Introduce en el vector fibonacci la serie de fibonacci
					
					int m = 1, n = 1, apoyo, i;
					for(i = 0; i < cantidad; i++){
						
						fibonacci[i] = n;
						apoyo = m;
						m += n;
						n = apoyo; 
					}	
					
					//Mostrar el vector fibonacci
					
					cout<<endl<<"Vector fibonacci = { "; 
					for(i = 0; i < cantidad; i++){
						cout<<fibonacci[i]<<" ";
					}
					cout<<"}"<<endl;
				}
				
			break;
			
			case 15:
				{
					//Pido el tamaño del vector
					int cantidad;
					cout<<"Digite el tamaño del vector: "; cin>>cantidad;
					
					int primo[cantidad];
					
					//Inrtrodusco los numeros primos en en el vector primo
					
					int i, divisor, numero, contador = 0;
					int posicion_primo = 0;
					for(numero = 2; posicion_primo < cantidad; numero++){
						for(divisor = 1, contador = 0; divisor <= numero; divisor++){
							if((numero % divisor) == 0){
								contador++;
							}
						}
						
						if(contador == 2){
							primo[posicion_primo] = numero;
							posicion_primo++;
						}
					}
					
					// Muetra el vector primo
					
					cout<<"\n vector primo = { ";
					for(i = 0; i < posicion_primo; i++){
						cout<<primo[i]<<" ";
					}
					cout<<"} "<<endl;
				}
				
			break;
		}
		
		system("pause"); 
		system("cls");
	}while(opcion != 0);
	
	
	return 0;
}
