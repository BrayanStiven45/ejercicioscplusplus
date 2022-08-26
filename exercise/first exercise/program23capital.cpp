/* 19. Write a program that calculates the capital produced by a capital of x pesos, after one year 
deposited at an interest of y % per month.

Note: this program calculate the compound interest 
*/

#include<iostream>
#include<math.h>


using namespace std;

int main(){
	
	double startcapital, interest, endcapital;
	
	cout<<"Write the starting capital: ";
	cin>> startcapital;
	cout<<"\nWrite the interest per month: ";
	cin>>interest;
	
	endcapital = startcapital * (pow ((1.0 + interest/100),12));
	
	cout<<"\nYour capital after one year is of: "<<int(endcapital)<<" pesos";
	
	
	
	return 0;
}
