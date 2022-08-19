/* 7. Modify the previous exercise so that the values of the sides are entered by the user */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	double side1 , side2 , area;
	
	cout<<"Enter the first side: ";
	cin>>side1;
	cout<<"\nEnter the second side: ";
	cin>>side2;
	
	area = side1 * side2;
	
	cout<<"\nThe area of the rectangle is equal to: "<<area;
	
	
	
	return 0;
}
