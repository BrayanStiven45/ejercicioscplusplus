#include<iostream>
#include<string.h>
#include<cstdlib>
#include<algorithm>


using namespace std;

int main(){
	int op;
	
	do{
		system("cls");
		cout<<"0.Salir.\n";
		cout<<"1.Ejercicio.\n";
		cout<<"2.Ejercicio.\n";
		cout<<"3.Ejercicio.\n";
		cout<<"4.Ejercicio.\n";
		cout<<"Opcion: "; cin>>op;
		system("cls");
		switch(op){
			case 1:
				{		
					char nombre[100], p[100];
					fflush(stdin);
					cout<<"Digite una frase o una palabra: ";
					gets(nombre);
					system("cls");
					puts(nombre);
					strrev(nombre);
					puts(nombre);
					int m = strlen(nombre) - 1;
					int j;
					for(int i = 0; i < strlen(nombre); i++){
						int apoyo = nombre[m];
						
						for(j = strlen(nombre) - 1; j > i; j--){
							nombre[j] = nombre[j - 1];
						}
						
						nombre[i] = apoyo;
					}
					
					puts(nombre);
				}
			break;
			case 2:
				{
					char nombre[100], apo[100];
					fflush(stdin);
					gets(nombre);
					puts(nombre);
					strcpy(apo, nombre);
					int m = strlen(nombre) - 1;
					int j;
					for(int i = 0; i < strlen(nombre); i++){
						int apoyo = nombre[m];
						
						for(j = strlen(nombre) - 1; j > i; j--){
							nombre[j] = nombre[j - 1];
						}
						
						nombre[i] = apoyo;
					}
					if(strcmp(apo, nombre)==0){
						cout<<"La frase es palindrome"<<endl;
					}else{
						cout<<"La frase no es palindrome"<<endl;
					}
				}
			break;
			
			case 3:
				{
					/*En este caso se verifica si un frase es palindrome per sin espacios en la frase*/
					char nombre[100];
					fflush(stdin);
					cout<<"Digite una frase: ";
					gets(nombre);
					system("cls");
					char nombre_1[100];
					puts(nombre);
					
			//esta funcion mueve los datos despues de un espacio, coma o punto de un cadena hacia la izquierda
					for(int i = 0; i < strlen(nombre); i++){
						
						while((nombre[i] == ("%c",32)) or (nombre[i] == ("%c",44)) or (nombre[i] == ("%c",46))){
								
							for(int j = i; j < strlen(nombre) - 1; j++){
								nombre[j] = nombre[j + 1];
							}
							nombre[strlen(nombre) - 1] = '\0';
						
						}
					}
					
					//esta funcion invierte la cadena nombre en la cadena nombre_1 
					int j = strlen(nombre)-1;
					for(int i = 0; i < strlen(nombre); i++,j--){
						nombre_1[i] = nombre[j];
					}
					
					/*esta funcione compara si son iguales las cadenas nombre y nombre_1 */
					if((strcmp(nombre_1,nombre)) == 0){
						cout<<"La frase es palindrome.\n";
					}else cout<<"La frase no es palindrome.\n";
				}
				
			break;
		}
		
		system("pause");
	}while(op != 0);
	
	
}
