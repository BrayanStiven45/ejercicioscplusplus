/* 11. Write a program that calculate the volume of a sphere  of radius = r 
volume of the sphere = 4/3 * pi * radius^3 */

#include<iostream>
#include<math.h>
#define pi 3.1416

using namespace std;

int main(){
	
	double radius, volume;
	
	cout<<"Write the value of radius: ";
	cin>>radius;
	
	volume = (4/3) * pi * pow(radius, 3);
	
	cout<<"The volume of the sphere is: "<<volume; 
	
	return 0;
}
