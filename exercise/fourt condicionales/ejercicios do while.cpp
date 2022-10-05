#include<iostream>
#include<cstdlib>
#include<locale.h>
#include<windows.h>
#include<string.h>
#include<conio.h>

using namespace std;

void gotoxy(int x, int y){
		HANDLE hCon;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos; 
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hCon, dwPos);
	}
	
void mostrar(string nombre){
	int x, y;
	y = 0;
	
	do{
		x = 0;
		do{
			gotoxy(x,y);
			cout<<nombre;
			x += 8;
		}while(x <= 75);
		y++;
	}while(y <= 30);
	
}

int main(){
	setlocale(LC_CTYPE,"SPANISH");
	int op;
	
	
	do{
		system("cls");
		cout<<"0. Salir.\n";
		cout<<"1. Reloj digital.\n";
		cout<<"2. 20 primeros números primos.\n";
		cout<<"3. Números primos entre dos números.\n";
		cout<<"4. 4 primeros números perfectos.\n";
		cout<<"5. Primeros 40 números con sus factores primos.\n";
		cout<<"6. Triangulo inversa con la letras del abecedario.\n";
		cout<<"7. Triangulo con una letra leida.\n";
		cout<<"8. Espacio en un pantalla llena de nombres./n";
		cout<<"9. Triangulo de asteriscos.\n";
		cout<<"10. Triangulos de asteriscos con un valor leido.\n";
		cout<<"11. Rombo de asteriscos.\n";
		cout<<"12. Piramide de números consecutivos con un número leido.\n";
		cout<<"13. Piramide de dígitos con un número leido.";
		cout<<"14. Piramide de dígitos con un número leido 2.";
		cout<<"15. Medio rombo de números y asteriscos.\n";
		cout<<"Opción: "; cin>>op;
		system("cls");
		
		switch(op){
			case 1:
				int hora, minuto, segundo;
				hora = 0;
				do{
					segundo = 0;
					minuto = 0;
					do{
						segundo = 0;
						do{
							cout<<hora<<" : "<<minuto<<" : "<<segundo;
							Sleep(1000);
							segundo++;
							system("cls");
						}while(segundo < 60);
						minuto++;
					}while(minuto < 60);
					hora++;
				}while(hora < 24);
			break;
			
			case 2:
				int i, primo, divisor, contador_divisor;
				i = 1;
				primo = 1;
				do{
					divisor = 1;
					contador_divisor = 0;
					do{
						if((primo % divisor) == 0){
							contador_divisor++;
						}
						divisor++;
					}while(divisor <= primo);
					
					if(contador_divisor == 2){
						cout<<i<<". "<<primo<<endl;
						i++;
					}
					primo++;
				}while(i <= 20);
			break;
			
			case 3:
				int numero_intro;
				i = 1;
				cout<<"Dígite el primer número: "; cin>>primo;
				cout<<"Dígite el segundo número: "; cin>>numero_intro;
				
				if(primo > numero_intro){
					numero_intro = numero_intro + primo;
					primo = numero_intro - primo;
					numero_intro = numero_intro - primo;
				}
				
				do{
					divisor = 1;
					contador_divisor = 0;
					do{
						if((primo % divisor) == 0){
							contador_divisor++;
						}
						divisor++;
					}while(divisor <= primo);
					
					if(contador_divisor == 2){
						cout<<i<<". "<<primo<<endl;
						i++;
					}
					primo++;
				}while(primo <= numero_intro);
			break;
			
			case 4:
				int suma, perfecto;
				perfecto = 6;
				i = 1;
				do{
					suma = 0;
					divisor = 1;
					do{
						if((perfecto % divisor) == 0){
							suma += divisor;
						}
						divisor++;
					}while(divisor < perfecto);
					
					if(suma == perfecto){
						cout<<i<<". "<<perfecto<<endl;
						i++;
					}
					perfecto++;
				}while(i <= 4);
			break;
			
			case 5:
				int cont;
				cont = 1;
				
				
				do{
					i = cont;
					cout<<cont<<"= ";
					primo = 2;
					do{
						divisor = 1;
						contador_divisor = 0;
						
						do{
							if((primo % divisor) == 0){
								contador_divisor++;
							}
							divisor++;
						}while(divisor <= primo);
					
						if(contador_divisor == 2){
							if((i % primo) == 0){
								i /= primo;
								cout<<primo<<" ";
								primo = 2;
							} else primo++;
						}else primo++;
					}while(primo <= cont);
					
					cout<<endl<<endl;
					cont++;
				}while(cont <= 40);
			break;
			
			case 6:
				int j;
				i = 122;
				do{
					j = i;
					do{
						printf("%c ",j);
						j--;
					}while(j >= 97);
					cout<<endl;
					i--;
				}while(i >= 97);
			break;
			
			case 7:
				char caracter;
				int filas;
				fflush(stdin);
				
				cout<<"Introduzca una letra: "; 
				caracter = getch();
				cout<<caracter;
				cout<<endl;
				i = int(caracter);
				
				if(((i < 65) or (i > 90)) and ((i < 97) or (i > 122))){
					cout<<"El valor ingresado no es permitido.\n";
					system("pause");
					return main();
				}
				
				filas = 97;
				do{
					caracter = ("%c",filas);
					caracter = toupper(caracter);
					cout<<caracter;
					j = 97;
					do{
						printf("%c", filas);
						j++;
					}while(j <= filas);
					cout<<endl;
					filas++;
				}while(filas <= i);
			break;
			
			case 8:
				{
					string nombre;
					int x, y;
					
					fflush(stdin);
					cout<<"Digite un nombre: "; cin>>nombre;
					system("cls");
					
					mostrar(nombre);
					cout<<endl;
					system("pause");
					system("cls");
					
					int f1, c1, c1p;
					int f2, c2;
					
					cout<<"\nDígite fila1: "; cin>>f1;
					cout<<"\nDígite columna1: "; cin>>c1;
					
					cout<<"\nDígite fila2: "; cin>>f2;
					cout<<"\nDígite columna2: "; cin>>c2;
					system("cls");
					mostrar(nombre);
					
					do{
						c1p = c1;
						do{
							gotoxy(c1p,f1);
							cout<<" ";
							c1p++;
						}while(c1p <= c2);
						f1++;
					}while(f1 <= f2);
					
					gotoxy(0,30);
				}
			break;
			
			case 9:
				fflush(stdin);
				cout<<"Digite un número: "; cin>>filas;
				i = 1;
				do{
					j = 1;
					do{
						cout<<"* ";
						j++;
					}while(j <= i);
					cout<<endl;
					i++;
				}while(i <= filas);
				
			break;
			
			case 10:
				int x, y, ap;
				cout<<"Digite un número: "; cin>>filas;
				system("cls");
				//primer triangulo
				i = 1;
				do{
					j = 1;
					do{
						cout<<"* ";
						j++;
					}while(j <= i);
					cout<<endl;
					i++;
				}while(i <= filas);
				
				//segundo triangulo
				i = filas;
				cont = 1;
				y = 0;
				do{
					j = 1;
					x = filas + 3;
					do{
						gotoxy(x, y);
						x += 2;
						j++;
					}while(j <= cont);
					j = 1;
					do{
						cout<<"* ";
						j++;
					}while(j <= i);
					cont++;
					y++;
					i--;
				}while(i >= 1);
				
				//tercer triangulo
				i = filas;
				y = 0;
				x += 5;
				
				do{
					j = 1;
					gotoxy(x, y);
					do{
						cout<<"* ";
						j++;
					}while(j <= i);
					cout<<endl;
					y++;
					i--;
				}while(i >= 1);
				
				//cuarto triangulo
				i = 1;
				y = 0;
				x += 10;
				cont = filas;
				do{
					j = 1;
					ap = x;
					do{
						gotoxy(ap, y);
						ap += 2;
						j++;
					}while(j <= cont);
					
					j = 1;
					do{
						cout<<"* ";
						j++;
					}while(j <= i);
					cout<<endl;
					y++;
					i++;
					cont--;
				}while(i <= filas);
				
				cout<<endl;
			break;
			
			case 11:
				int ancho;
				cout<<"Digite el ancho del rombo: "; cin>>ancho;
				system("cls");
				i = 1;
				y = 0;
				x = 40;
				do{
					j = 1;
					gotoxy(x,y);
					do{
						cout<<"*   ";
						j++;
					}while(j <= i);
					x -= 2;
					y += 2;
					i++;
				}while(i < ancho);
				
				do{
					j = 1;
					gotoxy(x,y);
					do{
						cout<<"*   ";
						j++;
					}while(j <= i);
					x += 2;
					y += 2;
					i--;
				}while(i >= 1);
				
				cout<<endl;
			break;
			
			case 12:
				int num;
				cout<<"Dígite un número: "; cin>>num;
				
				i = 1;
				cont = 1;
				do{
					j = 1;
					do{
						cout<<cont<<" ";
						cont++;
						j++;
					}while((j <= i) and (cont <= num));
					cout<<endl;
					i++;
				}while(cont <= num);
				
			break;
			
			case 13:
				cout<<"Dígite un número: "; cin>>filas;
				
				i = 1;
				ap = 0;
				cout<<"1 \n";
				do{
					cont = 1;
					do{
						cout<<cont<<" ";
						cont++;
					}while(cont <= (ap + 1));
					
					do{
						cout<<cont<<" ";
						cont--;
					}while(cont >= 1);
					
					cout<<endl;
					ap++;
					i++;
				}while(i < filas);
			break;
			
			case 14:
				cout<<"Dígite un número: "; cin>>filas;
				
				i = 1;
				ap = 3;
				j = 2;
				cout<<"1 \n";
				cont = 1;
				do{
					
					do{
						cont++;
						cout<<cont<<" ";
					}while(cont < ap);
					
					do{
						cont--;
						cout<<cont<<" ";
					}while(cont > j);
					
					cout<<endl;
					j += 1;
					ap += 2;
					i++;
				}while(i < filas);
			break;
			
			case 15:
				cout<<"Dígite un número: "; cin>>filas;
				system("cls");
				i = 1;
				do{
					j = 1;
					do{
						cout<<j<<" ";
						j++;
					}while(j <= i);
					cout<<endl;
					i++;
				}while(i <= filas);
				
				j--;
				do{
					i = 1;
					do{
						cout<<i<<" ";
						i++;
					}while(i < j);
					cout<<endl;
					j--;
				}while(j > 1);
				
				//segundo rombo
				i = 1;
				x = filas * 3;
				y = 0;
				do{
					j = 1;
					gotoxy(x,y);
					do{
						cout<<"* ";
						j++;
					}while(j <= i);
					y++;
					i++;
				}while(i <= filas);
				
				j--;
				do{
					i = 1;
					gotoxy(x,y);
					do{
						cout<<"* ";
						i++;
					}while(i < j);
					y++;
					j--;
				}while(j > 1);
				cout<<endl;
			break;
			
			case 16:
				cout<<"Digite el ancho del rombo: "; cin>>ancho;
				system("cls");
				
				if((ancho <= 0) or (ancho>= 10)){
					cout<<"El número ingresado no es permitido.\n";
					return main();
				}
				
				i = 1;
				y = 0;
				x = 10;
				ap = 1;
				do{
					j = 1;
					gotoxy(x,y);
					do{
						cout<<i<<"   ";
						j++;
					}while(j <= ap);
					ap += 2;
					x -= 4;
					y += 2;
					i++;
				}while(i < ancho);
				
				do{
					j = 1;
					gotoxy(x,y);
					do{
						cout<<i<<"   ";
						j++;
					}while(j <= ap);
					x += 4;
					y += 2;
					ap -= 2;
					i--;
				}while(i >= 1);
				
				cout<<endl;
				
			break;
		}
		
		system("pause");
	}while(op != 0);
	
	return 0;
}
