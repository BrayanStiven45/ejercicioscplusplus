/* 8. Type a program that caculate the area of a triangle, taking the values of base and height.
area of the triangle = (base * height) / 2 */

#include<iostream>

using namespace std;

int main(){
	
	double base, height, area;
	
	cout<<"type the value of the base ";
	cin>>base;
	cout<<"\nType the value of the height ";
	cin>>height;
	
	area = (base * height) / 2;
	
	cout<<"\nThe area is: "<<area;
	
	
	return 0;
}
