#include<iostream>
#include<locale.h>
#include<cstdlib>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "spanish");
	int op;
	
	cout<<"1.Problema\n";
	cout<<"2.Problema\n";
	cout<<"3.Problema\n";
	cout<<"4.Problema\n";
	cout<<"5.Problema\n";
	cout<<"6.Problema\n";
	cout<<"7.Problema\n";
	cout<<"8.Problema\n";
	cout<<"Opci�n: ";cin>>op;
	
	switch(op){
		case 1:
			/*Programa I. Escribir un programa que solicite un n�mero entero N, y que para todo m�ltiplo X de N menor 
			que 100, calcule el producto de todos los n�meros impares menores que X. El programa deber� mostrar
 			el valor de la suma de todos los productos calculados.*/
 		
 			int n, i, x, m;
 			double producto, suma;
 			suma = 0;
 			producto = 1;
 			m = 1;
 			i = 1;
 			x = 1;
 		
 			cout<<"Digite  n�mero: ";cin>>n;
 		
 			while(i <= 100){
 				if((x % n) == 0){
 					while(m < x){
 						if((m % 2) != 0){
 							producto *= m;
 						}
 						m++;
 					}
 					suma += producto;
 					cout<<producto<<endl;
 				}
 				x++;
 				i++;
 				m = 1;
 				producto = 1;
 			}
 		
 			cout<<"La suma de todos los productos es igual a : "<<suma<<endl;
		
		break;
		
		case 2:
			/*Programa II. Escribir un programa que lea las edades de un grupo de personas hasta que se introduce un n�mero negativo y calcule:
			� La edad media.
			� La edad m�xima.
			� La edad m�nima.
			� El n�mero de personas que est�n jubiladas.
			� Cu�ntos son menores de edad.*/
			int numes, mayor, menor, acu, jub, menores, cant;
			jub=0;
			menores=0;
			acu=0;
			numes=0;
			menor=150;
			mayor=0;
			cout<<"Ingrese las edades de las personas"<<endl;
			while(0 <= numes){
				cin>>numes;
				if(0<=numes){
					if(numes<menor){
						menor=numes;
					}else{
						if(numes>mayor){
							mayor=numes;
						}
					}
					if(numes>=62){
						jub++;
					}else{
						if(numes<18){
							menores++;				
						}
					}
				}else{
					cout<<"La media de edad es de: "<<acu/cant<<endl
						<<"Edad maxima: "<<mayor<<endl
						<<"Edad minima: "<<menor<<endl
						<<"Cantidad de jubilados: "<<jub<<endl
						<<"Cantidad de menores de edad: "<<menores;
				}		
				acu=acu+numes;
				cant++;
			}
			break;
		
			
		
		case 3:
			/*Programa III. Dos n�meros se dice que son amigos si cada uno de ellos es igual a la suma de los 
			divisores del otro.
			Solicitar un valor entero N al usuario y mostrar todas las parejas de n�meros amigos menores que N.
			Por ejemplo, si el usuario teclea N=300, los n�meros amigos hasta ese valor son el 220 y el 284:
			� Suma de los divisores de 220 = 1 + 2+ 4+ 5+10+11+20+22+44+55+110 = 284
			� Suma de los divisores de 284 = 1+2+4+71+142 = 220 */
			int s, p, t, suma2, c;  
			
			cout<<"Digite un n�mero: ";cin>>n;        
			suma = 0;
			c = 1;
			i = 1;
			s = 1;
			m = 1;
			p = 1;
			t = 1;
			suma2 = 0;
			while(i <= n){
				while(s < m){
					if((m % s) == 0){
						suma += s;
					}
					s++;
				}
	
				s = 1;
				while(p <= n){
					if(suma == s){
						while(c < s){
							if((s % c) == 0){
								suma2 += c;
							}
							c++;
						}
						
					}
					
					if (suma2 == m){
						if(m != s){
							if(s != t){
								cout<<"El n�mero "<<m<<" y el n�mero "<<s<<" son amigos"<<endl;
								p = n;
								t = m;
							}	
						}
					}
					s++;
					suma2 = 0;
					p++;
				}
				
				i++;
				m++;
				c = 1;
				suma = 0;
				s = 1;
				p = 1;
			}
			break;
		
		case 4:
			/*Programa IV. Escribir un programa que solicite un valor N al usuario y calcule todos los n�meros 
			perfectos menores que N. Se dice que un n�mero es perfecto cuando es igual a la suma de todos sus 
			divisores, exceptuando el propio n�mero. Por ejemplo:
			� 6 es perfecto = 1 + 2 + 3
			� 28 es perfecto = 1 + 2 + 4 + 7 + 14*/
			i = 1;
			s = 1;
			m = 1;
			suma = 0;
			cout<<"Digite un n�mero: ";cin>>n;
			
			while(i < n){
				while(s < m){
					if((m % s) == 0){
						suma += s; 	
					}
					s++;
				}
				if((suma == m)){
					cout<<m<<" es un n�mero perfecto"<<endl;
				}
				i++;
				s = 1;
				m++;
				suma = 0;
			}
			
			
			break;
			
		case 5:
			/*Programa V. Escribir un programa que lea n�meros enteros de teclado hasta que encuentre uno que cumpla las siguientes condiciones:
			� M�ltiplo de 2.
			� No m�ltiplo de 5.
			� Mayor que 100.
			� Menor que 10.000.*/
			
			int cont;
			cont = 0;
			i = 1;
			while(i != 0){
				cout<<"Digite un n�mero: ";cin>>n;
				if((n % 2) == 0){
					if((n % 5) != 0){
						if ((n > 100) and (n < 10000)){
							cout<<"El n�mero "<<n<<" concuerda con las indicaciones"<<endl;
							i = 0;
						}
					}
				}
			}
		break;
		
		case 6:
			/*Programa VI. Escribir un programa que imprima los n�meros primos de n hasta m:
			Si n = 3 m = 18: 3 5 7 11 13 17*/
			
			i = 1;
			cont = 0;
			cout<<"Ingrese dos n�meros\n";
			cin>>n >>m;
	
			if(n>m){ 	
				while (m<=n){ 	
					while(i<=m){
						if ((m%i)==0){ 
							cont++;
						}else{
						}	
					i++;
					}
					if (cont==2){ 
						cout<<m <<" ";
					}
					cont=0;
					i=1;
					m++;
				}		
			}else {	
				while (n<=m){
				 	
					while(i<=n){
						if ((n%i)==0){ 
							cont++;
						}else{
						}	
						i++;
					}
					if (cont==2){ 
						cout<<n <<" ";
					}
					cont=0;
					i=1;
					n++;
				}
			} 
			break;
			
		case 7:
			/*Programa VII. Escribir un programa que imprima los n�meros primos y los sume de n hasta m:
			Si n = 3 m = 18: 3 5 7 11 13 17 suma = 56*/
			i = 1;
			cont = 0;
			suma = 0;
			
			cout<<"Ingrese dos n�meros\n";
			cin>>n >>m;
	
			if(n>m){ 	
				while (m<=n){ 	
					while(i<=m){
						if ((m%i)==0){ 
							cont++;
						}else{
						}	
						i++;
					}
					if (cont==2){ 
						cout<<m <<" ";
						suma+=m;
					}
			
					cont=0;
					i=1;
					m++;
				} 
				cout<<"=" <<suma;		
			}else {	
				while (n<=m){
				 	
					while(i<=n){
						if ((n%i)==0){ 
							cont++;
						}else{
						}	
						i++;
					}
					if (cont==2){ 
						cout<<n <<" ";
						suma+=n;
					}
			
					cont=0;
					i=1;
					n++;
				} 
				cout<<"=" <<suma;	
			}
			break;
			
		case 8:
			/*Programa VIII. Escribir un programa que imprima los n�meros Primos de la serie de Fibonacci de m t�rminos:
			Si m = 9: la seria es 1 1 2 3 5 8 13 21 43 y los primos son 2 3 5 13 43*/
			int ac;
			cout<<"Ingrese el limite de numeros"<<endl;
			cin>>n;
			while(n>0){
				i=1;
				ac=0;
				while(i<n){
					if(n%i==0){
						ac=ac+i;
					}
					i++;
				}		
				if(n==ac){
					cout<<n<<" , ";
				}
				n--;
			}
			cout<<" Son numeros perfectos";
			break;	
	}
	
	
	system("pause");
	system("cls");
	return main();
}
