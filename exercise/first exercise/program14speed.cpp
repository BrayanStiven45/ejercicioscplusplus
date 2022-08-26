/* 10. Type a program that calculate speed of a projectile traveling x km in t minutes. Express the result in 
meters/seconds.
speed = meters/time */
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 int main(){
 	
 	double km, minutes, speed;
 	
 	cout<<"Write the distance in km projectile traveled: ";
 	cin>>km;
 	cout<<"Write the time in minutes projectile traveled: ";
 	cin>>minutes;
 	
 	speed = (km * 1000) / (minutes * 60 );
 	
 	cout<<"The speed that projectile traveled was of: "<<speed<<"m/s";
 	
 	
 	return 0;
 }
