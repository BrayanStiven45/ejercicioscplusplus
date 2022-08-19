/* 12. Write a program that evaluate the next expression: 
(a + 7 * c)/(b + 2 - a)+ 2 * b */

#include<iostream>

using namespace std;

int main(){
	
	double a, b, c, result;
	
	cout<<"Write the first values: ";
	cin>>a;
	cout<<"\nWrite the second value: ";
	cin>>b;
	cout<<"\nWrite the third value: ";
	cin>>c;
	
	result = (a + 7 * c) / (b + 2 - a) + 2 * b;
	
	cout<<"\nThe result is: "<<result;
	
	
	
	
	return 0;
} 

