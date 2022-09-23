#include<iostream>
#include<locale.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "SPANISH");
	int op;
	
	cout<<"1.Problema\n";
	cout<<"2.Problema\n";
	cout<<"3.Problema\n";
	cout<<"Opcion: ";cin>>op;
	
	switch(op){
		case 1:
			fflush(stdin);
			int  num , i , n, cont, m , p, ap, mf , ap2, nf , contp , s, k ;
			num = 1;
			i = 1;
			cont = 1;
			m = 0;
			mf = 1;
			nf = 1;
			contp = 1;
			k = 0;
	
			cout<<"Digite un número: ";cin>>n;
			s = n;
			while(i <= n){
				cont = 1;
				while(cont <= i){
					
					while(contp <= num){
						ap = mf;
						ap2 = nf;
						mf = nf + mf;
						nf = ap;				
						contp++;
					}
					
					if(k != 1){
						p = s;
						while(p >= i){
							cout<<"\t";
							p--;
						}
					}else{
						p = 2;
						while(p >= 1){
							cout<<"\t";
							p--;
						}
					}
					cout<<ap2;
					num++;	
					cont++;
					k = 1;
				}		
					
				cout<<endl;
				i++;
				k = 0;
			}
		break;	
		
		case 2:
			fflush(stdin);
			int div , primo , ip , j ;
			div = 1;
			primo = 1;
			ip = 1;
			j = 1;
			num = 1;
			
			cout<<"Digite un número: ";cin>>n;
			
			while(ip <= n){
				
				while(j <= n){
					
					if(ip <= j){
						
						while(cont != 2){
							cont = 0;
							i = 1;
							primo++;
							while(i <= primo){
								if((primo % i) == 0){
									cont++;
									i++;
								}else i++;								
							}
							
						}
						cout<<primo<<"\t";
						cont = 0;
					}
					
					if(ip > j){
						num += 2;
						cout<<num<<"\t";
					}	
					
					j++;
				}
				cout<<endl;
				j = 1;
				ip++;
			}
		break;
		
		case 3:
			fflush(stdin);
			i = 1;
			m = 1;
			k = 0;
			j = 0;
			mf = 1;
			nf = 1;
			contp = 1;
			num = 1;
			cout<<"Digite un número: ";cin>>n;
			s = n;
			while(i <= n){
				if(s == 0){
					j--;
					while(j != 0){
						cout<<"\t   ";
						j--;
					}
					cout<<ap;
				}
				
				while(m <= s){
					while(contp <= num){
						ap = mf;
						ap2 = nf;
						mf = nf + mf;
						nf = ap;				
						contp++;
					}
					
					while(j != 0){
						cout<<"\t";
						j--;
					}
					cout<<ap2<<"\t";
					m++;
					num++;
				}
				m = 1;
				k++;
				j = k;
				s -= 2;
				cout<<endl;
				i++;
			}
		
		break;
			
			
	}
	
	
	system("pause");
	system("cls");
	return main();
}

