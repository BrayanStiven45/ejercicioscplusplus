/* 20. Write a program that calculate the equivalent in feet of a lenght of x meters knowing that 
1 meter is equal to 39.27 inches and 12 inches is equal to 1 feet */


#include<iostream>

using namespace std;

int main(){
	
	double meter, feet;
	
	cout<<"Write the lenght in meters: ";
	cin>>meter;
	cout<<endl;
	
	feet = (meter * 39.27) / 12;
	
	cout<<meter<<" meter is equal to "<<feet<<" feet";
	
	
	
	return 0;
}
