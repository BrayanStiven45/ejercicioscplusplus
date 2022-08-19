/* 15. Write a program thar calculate the roots of an equation of 2° grade.
(-b + sqrt(b^2 - 4 * a * c) / (2 * a).
(-b - sqrt(b^2 - 4 * a * c) / (2 * a).*/

#include<iostream>
#include<math.h>
#define i -1
using namespace std;

int main(){
	
	double a, b, c, result1, result2;
	
	cout<<"Write the values for the variables of an equation of 2° grade ax^2+bx+c = 0 \n";
	cout<<"Note:\n a: first value \n b: second value\n c: value constant\n";
	
	cout<<"a: ";cin>>a;
	cout<<"\nb: ";cin>>b;
	cout<<"\nc: ";cin>>c;
	
	if ((a < 0) or (c < 0) or ((pow(b,2)) > (-4 * a * c))){
	
	result1 = ((-b) + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
	result2 = ((-b) - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
	
	cout<<"\nX = "<<result1;
	cout<<"\nX = "<<result2;
	}
	
	else{
	result1 = ((-b) + sqrt(-(pow(b,2) - 4 * a * c))) / (2 * a);
	result2 = ((-b) - sqrt(-(pow(b,2) - 4 * a * c))) / (2 * a);
	
	cout<<"\nX = "<<result1<<"i";
	cout<<"\nX = "<<result2<<"i";
}

	
	return 0;
}
