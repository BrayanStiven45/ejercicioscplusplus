/* 18. Write a program that calculete the number of hours, minutes and seconds there are in 3700 seconds. */

#include<iostream>

using namespace std;

int main(){
	
	int hours, minutes, seconds;
	
	hours = 3700 / 3600;
	minutes = 100 / 60;
	seconds =  100 - 60;
	
	cout<<hours<<" h "<<minutes<<" m "<<seconds<<" s";
	
	return 0;
}
