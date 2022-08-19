/* 14. Write a program that evaluate the next expression:
(- b + sqrt(b^2 - 4 * a * c) / (2 * a))*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double a, b, c, result;
	
	cout<<"Write the first value: ";
	cin>>a;
	cout<<"\nWrite the second value: ";
	cin>>b;
	cout<<"\nWrite te third value: ";
	cin>>c;
	
	result = ((-1*b) + sqrt(pow(b,2) - 4 * a * c) / (2 * a));
	
	cout<<"\nThe result of the expression is "<<result;
	
	return 0;
}
