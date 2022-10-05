#include<iostream>
#include<time.h>
#include<math.h>
#include<locale.h>
#include<windows.h>
#include<iomanip>

using namespace std;
void gotoxy(int x, int y){
		HANDLE hCon;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos; 
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hCon, dwPos);
	}

int main(){
	setlocale(LC_CTYPE, "SPANISH");
	int x, y, i, t = 3;
	int fib, apo, m=1, n=1, num, j=0, k= 1;
	
	cout<<"Ingrese el numero de terminos para Fibonacci: ";
	cin>>num;
	x = 10;
	y = 5;
	do{
		i = 1;
		do{
			gotoxy(x,y);
			Sleep(100);
			cout<<m<<endl;
			apo=n;
			n=m+n;
			m=apo;
			x+=5;
			i++;	
		}while(i < (num - j));
		
		k++;
		j++;
		
		i = 1;
		do{
			gotoxy(x,y);
			Sleep(100);
			cout<<m<<endl;
			apo=n;
			n=m+n;
			m=apo;
			y+=3;
			i++;
		}while(i <= (num - j));
		k++;
		
		i = 1;
		do{
			gotoxy(x,y);
			Sleep(100);
			cout<<m<<endl;
			apo=n;
			n=m+n;
			m=apo;
			x-=5;
			i++;
		}while(i <= (num - j));
		k++;
		
		i = 1;
		do{
			gotoxy(x,y);
			Sleep(100);
			cout<<m<<endl;
			apo=n;
			n=m+n;
			m=apo;
			y-=3;
			i++;
		}while(i <= (num - j));
		
		j++;
		x = 10 + (t + 2);
		y = 5 + t;
		t +=3;
		
		k++;
	}while(k<= (2*num - 1));

gotoxy(1,(num * 4));
return 0;	
}
