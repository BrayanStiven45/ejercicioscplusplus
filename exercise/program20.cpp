/* 16. Write a program that calculate the hypotenuse of a triangle rectangle */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double leg1, leg2, hypotenuse;
	
	cout<<"Write the value for first leg: ";
	cin>>leg1;
	cout<<"\nWrite the value for second leg: ";
	cin>>leg2;
	
	hypotenuse = sqrt((pow(leg1,2)) +  (pow(leg2, 2)));
	
	cout<<"\nThe hypotenuse is: "<<hypotenuse;
		
	return 0;
}
