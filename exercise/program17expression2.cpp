/* 13. Write a program that evaluate the next expression:
(a + 5) * 3 / 2 * b - b */

#include<iostream>

using namespace std;

int main(){
	
	double a, b, result;
	
	cout<<"Write the first value: ";
	cin>>a;
	cout<<"\Write the second value: ";
	cin>>b;
	
	result = (a + 5) * 3 / 2 * b - b;
	
	cout<<"\nThe result of the expression is: "<<result;
	
	return 0;
}
