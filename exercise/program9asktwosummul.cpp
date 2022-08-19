#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	double x , y;
	
	cout<<"Type a first number: ";
	cin>>x;
	cout<<"\nType a second number: ";
	cin>>y;
	
	//sum
	cout<<"\nThe sum of the two numbers is: "<< x + y;
	
	//subtraction
	cout<<"\nThe subtraction of the two numbers is: "<< x - y;
	
	//multiplication
	cout<<"\nThe multiplication of the two numbers is: "<< x * y;
	
	//division
	cout<<"\nThe division of the two numbers is: "<< x / y;
	
	
	getch ();
	return 0;
}
