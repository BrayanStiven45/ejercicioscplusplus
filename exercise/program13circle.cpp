 /* 9. Write a program that calculate the lenght and the area of a circumference, taking the value of the radius.
 lenght of the circumference = 2 * pi * radius
 area if the circumference = pi * radius^2  
 */

#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;


int main(){
	
	double area, lenght, radius;
	
	cout<<"Type a value for the radius ";
	cin>>radius;
	
	lenght = 2 * pi * radius;
	area = pi * pow(radius,2);
	
	cout<<"The lenght of circumference is: "<<lenght;
	cout<<"\nThe area of circumference is: "<<area; 
	
	
	return 0;
}
