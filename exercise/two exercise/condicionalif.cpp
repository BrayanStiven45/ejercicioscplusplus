#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int a,b, mayor;

/*	a = 5;
	b = 10;
	
	if (a > b){
		
		cout<<"el mayor es "<<a;
		
	}else{
		
		cout<<"el mayor es "<<b;
	}*/
	
	/*a = 5;
	b = 5;
	
	if(){
		
		cout<<a <<" = "<<b;
		
	} */
	
	/*a = 5;
	b = 4;
	
	if (a > b) cout<<"el mayor es "<<a;
	else cout<<"el mayor es "<<b;*/

/*	cout<<"ingresar dato: ";
	cin>>a>>b;
	
	if(a > b){
		
		mayor = a;
	}else{
		
		mayor = b;
	}
	cout<<"el mayor es "<<mayor;*/
	
/*	int num, c, u;
	
	cout<<"Ingrese el valor: ";
	cin>>num;
	
	u = num % 10;
	c = num / 100;
	
	if((num > 99) and (num < 100)){
		if(u == c){
		
		cout<<"El numero es palindromo";
		
		}else{
			
		cout<<"No es palindromo";
		
		}
	}else {
		cout<<"El numero no es de tres digitos";
	}*/
	
	
	int num1, num2, num3;
	
	cout<<"Ingrese los tres numeros ";
	cin>>num1>>num2>>num3;
	
/*	if(num1 > num2){
		if(num1 > num3){
			
			cout<<"El numero mayor es "<<num1;
		}else{
		cout<<"El numero mayor es "<<num3;
		}
		
	}else{
		if(num2 > num3){
			
			cout<<"El numero mayor es "<<num2;
		}else{
		cout<<"El numero mayor es "<<num3;
		}
	} */
	
/*	if(num1 > num2){
		if(num1 > num3){
		
			mayor = num1;
		
		}else{
			mayor = num3;
		}
		
	}else{
		if(num2 > num3){
			
			mayor = num2;
		}else{
			mayor = num3;
		}
	}
	
	cout<<"El numero mayor es: "<<mayor;*/
	

/*	if(num1 > num2){
		
		num2 = num1;
	}
	
	if(num2 > num3){
		cout<<"El numero mayor es"<< num2;
	}else {
		cout<<"El numero mayor es"<< num3;
	}*/
	
	if((num1 > num2) and (num1 > num3)){
		
		cout<<"El numero mayor es: "<<num1;
	}else{
		
	}
	
	
	return 0; 
}
