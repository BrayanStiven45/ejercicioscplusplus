#include<iostream>
#include<cstdlib>
#include<locale.h>
#include<time.h>
#include<math.h>

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
	cout<<"9.Problema\n";
	cout<<"10.Problema\n";
	cout<<"11.Problema\n";
	cout<<"12.Problema\n";
	cout<<"13.Problema\n";
	cout<<"14.Pcroblema\n";
	cout<<"15.Salir\n";
	cout<<"Opción: ";cin>>op;
	
	switch(op){
		case 1:
			
			int cont, i;
			i = 1;
			for(cont = 1 ; cont <= 25; i++){
				if((i % 7) == 0){
					cout<<pow(i , 2)<<endl;
					cont++;
				}
			}
			
		break;
		
		case 2:
			int num, vali, div, ap;
			div = 100;
			
			cout<<"Digite un número: ";cin>>num;
			
			if((num >= 1) & (num <= 999)){
				vali = 1;
			}else cout<<"El número ingresado no es permitido.";
			
			for(num; vali == 1; num){
				ap = num / div;
				if(num < 10){
					cout<<ap<<endl;
					vali = 0;
				}else 
				{
					cout<<ap*div<<" + ";
					num = num % div; 
					div = div / 10;
				}
			}
		break;
		
		case 3:
			int contpa, contim;
			contpa = 0;
			contim = 0;
			srand(time(NULL));
			for(ap = 1; ap != 0; ap){
				ap = rand() % 38;
				cout<<ap<<" ";
				if (ap == 0){
				}else if((ap % 2) == 0){
					contpa++;
				}else contim++;
			}
			
			cout<<"\nCantidad de números pares: "<<contpa<<endl;
			cout<<"Cantidad de números impares: "<<contim<<endl;
		break;
		
		case 4:
			ap = 1;
			for(num = 1; ap != 0; num){
				if(num > 700){
					ap = 0;
				}else num *= 2;
			}
			
			cout<<"Primer potencia de 2 mayor a 700: "<<num<<endl;
			
		break;
		
		case 5:
			int num1, num2, suma, ap2;
			suma = 0;
			
			cout<<"Digite el primer número: ";cin>>num1;
			cout<<"Digite el segundo número: ";cin>>num2;
			
			if(num1 > num2){
				ap = num1;
				num1 = num2;
				num2 = ap;
			}
			
			if((num1 % 2) != 0){
				for(ap = 1; ap != 0; ap){
					
					if(num1 == 0){
						ap = 0;
					}else if((num1 % 2) != 0){
						suma += num2;
						num2 *= 2;
						num1 /= 2;
					}else{
						num2 *= 2;
						num1 /= 2;
					}
				}
				num2 = suma;
			}else{
				for(ap = 1; ap != 0; ap){
					
					if(num1 == 1){
						ap = 0;
					}else{
						num2 *= 2;
						num1 /= 2;
					}
				
				}
				
			}
			 
			cout<<"El producto es: "<<num2<<endl;		
		break;
		
		case 6:
			int n2, ac;
			i = 0;
			ac = 0;
			cout<<"Ingrese un numero para concer si es multiplo de 3"<<endl;
			cin>>n2;
			for(n2; n2>0; ){
				ac=ac+(n2%10);
				n2=n2/10;
			}
			if(ac%3==0){
				cout<<"El numero es multiplo de 3"<<endl;
			}else{
				cout<<"El numero no es multiplo de 3"<<endl;
			}
		break;
		
		case 7:
			int n, contp, conti;
			i = 0;
			contp = 0;
			cont = 0;
			cout<<"Ingrese un numero para concer cuantas cifras son pares y cuantas impares"<<endl;
			cin>>n;
			for(n; n>0; ){
				if((n%10)%2==0){
					contp++;
				}else{
					conti++;
				}
				n=n/10;
			}
			cout<<"El numero tiene: "<<contp<<" cifras pares y "<<conti<<" cifras impares"<<endl;	
		break;
		
		case 8:
			int min, md, mc;
			i = 1;
			cout<<"Ingresar el primer numero"<<endl;
			cin>>num;
			cout<<"Ingresar el segundo numero"<<endl;
			cin>>num2;
			if(num>num2){
				min=num2;
			}else{
				min=num;
			}
			for(i; i<=min; i++){
				if((num%i==0)and(num2%i==0)){
					md=i;
				}
			}
			mc=(num*num2)/md;
			cout<<"El maximo comun divisor es: "<<md<<endl
			<<"El minimo comun multiplo es: "<<mc<<endl;
			
		break;
		
		case 9:
			int nr1, nr2, nr3, resul;
			srand(time(NULL));
			nr1=rand() % 99;
			ap=nr1-99;
			nr2=(rand() % ap)+nr1;
			for(;nr3!=(nr2-nr1);){
				nr3=rand() % 99;
			}
			cout<<nr2<<" - "<<nr1<<endl;
			cout<<"Ingrese el resultado "<<endl;
			cin>>resul;
			if(resul==nr3){
				cout<<"Felicidades, tu resultado es correcto"<<endl;
			}else{
				cout<<"Lo siento, el resultado era: "<<nr3<<endl;
			}
		break;
		
		case 10:
			ac = 1;
			cout<<"Ingrese el numero que desea conocer su factorial"<<endl;
			cin>>n;
			ap = n;
			for(n;n>0; n--){
				ac=ac*n;
			}
			cout<<"El factorial de "<<ap<<" es igual a: "<<ac<<endl;
		break;
		
		case 11:
			
			int pot, m;
			m = 1;
 			double nr ;

			int pot2;
			cout<<"Ingrese un numero \n";
			cin>>nr;
			cout<<"Ingrese la potencia entera a la que desea elevarlo\n";
			cin>>pot;


			for(i=1 ; i<=pot  ; i++) {
				m = nr*m;

			}
			cout<<"Potencia es: "<<m<<endl;
			
			
		break;
		
		case 12:
			m = 0;

			suma = 0;

			for(n=1 ;  n != 0; ){
				cout<<"Ingrese un numero ";
				cin>> n;
				suma=suma+n; 
				m++;
	
	
			}

			if (m != 0){
				cout<<"El promedio de los reales es " <<suma/m;
			}else{
				cout<<"el promedio de los reales es 0";				
			}
			
		break;
		
		case 13:
			
			int  r;
			r = 0;

			for (i=100; i>=1; i--){
	
				for (n=i;  n>0; n=n/10 ){
	
					r=n%10;
					cout<<r; 
				} cout<<" ";

			}
		break;
		
		case 14:
			
			cont = 0;

			cout<<"ingrese un numero ";
			cin>>n;

			for (i=1; i<=n; i++){
				if((n%i)==0){
					cont++; } else {	}
				}

				if (cont==2){
					cout<<"El numero es primo";
				}else {
 					cout<<"El numero no es primo";
				}
		break;
		
	}
	
	
	system("pause");
	system("cls");
	return main();
}
