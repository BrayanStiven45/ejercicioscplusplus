/* 17. Write a program that calculate the equivalent in grade Fahrenheit o Celsius of a temperature t.
Celsius / 5 = (Fahrenheit - 32) / 9 

(Celsius * 9 / 5) + 32 = Fahrenheit

(Fahrenheit - 32) * 5 / 9 = Celsius
*/

#include<iostream>

using namespace std;

int main(){ 
	double a, c, f, result;
	
	cout<<"1. Convert Celsius to Fahrenheit\n";
	cout<<"2. Convert Fahrenheit to Celsius\n";
	cout<<"Option: ";
	cin>> a;
	
	if(a = 1){
		
		cout<<"\nWrite the value in Celsius: ";
		cin>> c;
		
		result = (c * 9 / 5) + 32;
		
		cout<<"\nValue in Fahrenheit : "<< result;
		printf ("%cF",167); 
	}
	else{
		if(a = 2){
			
		cout<<"\nWrite the value in fahrenheit: ";
		cin>> f;
		
		result = (f - 32) * 5 / 9;
		
		cout<<"\nValue in Celsius : "<< result<<"%cC",167; 	
		}
		else {
			cout<<"The option is incorrect ";
		}
	}






	return 0;
}
