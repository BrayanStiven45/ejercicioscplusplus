#include<iostream>
#define PI 3.141516
#include<math.h>
#include<algorithm>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
	int op;
	
	cout<<"\n\nMenu\n";
	cout<<"Problema 1\n";
	cout<<"Problema 2\n";
	cout<<"Problema 3\n";
	cout<<"Problema 4\n";
	cout<<"Problema 5\n";
	cout<<"Problema 6\n";
	cout<<"Problema 7\n";
	cout<<"Problema 8\n";
	cout<<"Problema 9\n";
	cout<<"Problema 10\n";
	cout<<"Opcion: ";cin>>op;
	
	if(op==1){
		float n1, n2, n3, n4, nf;
		cout<<"Ingrese las 4 notas\n ";
		cin>> n1 >>n2 >>n3 >>n4;
		if ((n1<n2) and (n1<n3) and (n1<n4) ){ 
			if ((n2>n3) and (n2>n4)){
			 nf= (n2*0.5)+ (n3*0.25) + (n4*0.25);
			}else{ 
				if ((n3>n2) and (n3>n4)){
					nf= (n3*0.5)+ (n2*0.25) + (n4*0.25);
				}else{
					 nf= (n4*0.5)+ (n2*0.25) + (n3*0.25);
				}
			}
		} else{ 
			if ((n2<n1) and (n2<n3) and (n2<n4)){
				if ((n1>n3) and (n1>n4)){ 
					nf= (n1*0.5)+ (n3*0.25) + (n4*0.25);
				}else{ 
					if ((n3>n1) and (n3>n4)){
						nf= (n3*0.5)+ (n1*0.25) + (n4*0.25);	
					}else{
						nf= (n4*0.5)+ (n1*0.25) + (n3*0.25);
					}
				}			
			}else{						
				if ((n3<n1) and (n3<n2) and (n3<n4) ){ 
					if ((n1>n2) and (n1>n4)){ 
						nf= (n1*0.5)+ (n2*0.25) + (n4*0.25);
					}else{ 
						if ((n4>n1) and (n4>n2)) {
							nf= (n4*0.5)+ (n1*0.25) + (n2*0.25);	
						}else{
							nf= (n2*0.5)+ (n1*0.25) + (n4*0.25);
						}
					}
				}else{
					if ((n4<n1) and (n4<n2) and (n4<n3) ){ 
						if ((n1>n2) and (n1>n3)){
							 nf= (n1*0.5)+ (n2*0.25) + (n3*0.25);
						}else{
							if ((n3>n1) and (n3>n2)){
								nf= (n3*0.5)+ (n1*0.25) + (n2*0.25);
							}else{
								nf= (n2*0.5)+ (n1*0.25) + (n3*0.25);
							}
						}			
					}	
				} 
			}
		}
		cout<<"la nota final es " <<nf;
	}


	if(op==2){
		int lote, descuento;
		printf("Ingrese el tama%co del lote (entre 100m%c y 800m%c)\n",164,253,253);
		cin>>lote;
		if((lote>=100) and (lote<=800)){ 
			if (lote>600){
				cout<<"El descuento es del 25%";
			}else{ 
				if ((lote>400) and (lote<600)){
					cout<<"El descuento es de 17%";
				}else{		   			
					if ( (lote >200) and (lote <400 )) {
						cout<<"El descuento es del 10%";
					} 
				}
			}
		}else{ 
			printf("El tama%co de lote no esta disponible a la venta",164);
		}
	}
	
	if(op==3){
		int hora, ht, precio, dia, seg2, min, mint, seg1, segt, a;
		cout<<"Ingrese que dia realizo la llamada\n 1.Lunes-Viernes \t 2. Sabado, Domingo \n ";
		cin>> dia;
		cout<<"Ingrese la hora en que empezo la llamada\n";
		cin>> hora >>min >>seg1;
		cout<<"Ingrese los segundos que duro la llamada \n";
		cin>>seg2;
		
		segt = seg1 + seg2;
		ht = hora + segt/3600;
		a = segt/3600;
		segt = segt - a * 3600;
		mint=min + segt/60;
		a = segt/60;
		segt = segt - a * 60;
	
		if(mint > 59){
			mint = mint - 60;
			ht = ht + 1;
		}
		
		if(segt > 59){
			segt = segt - 60;
		}

		if(dia==1){
	 		precio = seg2*3; 
	 		cout<<"La llamada empezo a las "<<hora <<":" <<min <<":" <<seg1 <<" termino a las " <<ht <<":" <<mint <<":"<<segt <<" "  <<" y su precio es\n" <<precio;
		}else{ 
			if (dia==2){
				precio=	seg2*2; 
				cout<<"La llamada empezo a las " <<hora <<":" <<min <<":" <<seg1 <<" termino a las " <<ht<<":" <<mint <<":"<<segt <<":" <<" y su precio es\n" <<precio;
	   		}else{ 
			   cout<<"no ha ingresado un dia valido";
	   		
			}	
		}
	}
	
	if(op==4){
		string a;
 		cout<<"Ingrese un numero de 4 cifras\n";

    	cin>>a;
    	if((a.length()) == 4 ){ 
			reverse (a.rbegin(), a.rend());
     		cout << a << endl;
		} else{
			cout<<"El numero no es de 4 cifras";
		}
	}
	
	if(op==5){
		int lic;
		cout<<"Ingrese el numero de la licencia del programa que desea \n";
		cin>>lic;
		if (lic==123){
			cout<<lic <<" TURBO C";
		}else{ 
			if (lic==345){
				cout<<lic <<" Power Point";
			}else{
				if (lic==567){
					cout<<lic <<" Autocad";
				}else{
					if (lic==789){
						cout<<lic <<" Corel Draw";
					}else{ 
						if (lic==234){
							cout<<lic <<" Word";
						}else{ 
							if (lic==456){
								cout<<lic <<" Excel";
							}else{
								if (lic==678){
									cout<<lic <<" Mathlab";
								}else{
									if (lic==890){
										cout<<lic <<" Otros programas";
									}else{ 
										cout<<"El numero ingresado no corresponde a alguna licencia activa";
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	if(op==6){
		int prelibros, precuadernos, prediscos, libros, cuadernos, discos, op, precio;
	
		cout<<"Digite el precio de los articulos: ";
		cout<<"\nLibros: ";cin>>prelibros;
		cout<<"\nCuadernos: ";cin>>precuadernos;
		cout<<"\nDiscos: ";cin>>prediscos;
	
		cout<<"Digite la cantidad de articulos a pedir: ";
		cout<<"\nLibros: ";cin>>libros;
		cout<<"\nCuadernos: ";cin>>cuadernos;
		cout<<"\nDiscos: ";cin>>discos;
	
		libros = (prelibros - (prelibros*(0.2))) * libros;
		cuadernos = (precuadernos - (precuadernos*(0.2))) * cuadernos;
		discos = (prediscos - (prediscos*(0.15))) * discos;
		precio = libros + cuadernos + discos;
	
		cout<<"\n\nMetodo de pago: ";
		cout<<"\n1.Pago a contado";
		cout<<"\n2.Pago a credito";
		cout<<"\nOpcion: ";cin>>op;
	
		if(op==1){
			precio = precio - (precio *(0.06));
			cout<<"Valor a pagar mas descuento del 6%: "<<precio;
		}else{
			if(op==2){
				cout<<"Valor a pagar a credito sin descuento del 6%: "<<precio;
			}else{
				cout<<"La opcion ingresada es incorrecta";
			}
		}
	}
	
	if(op==7){
		double celsius, farenheit, kelvin, op;
		
		cout<<"Digite la temperatura en celsius: ";
		cin>>celsius;
		cout<<endl;
		
		cout<<"Escala a convertir la temperatura:\n";
		cout<<"1.Farenheit\n";
		cout<<"2.Kelvin\n";
		cout<<"Opcion: ";cin>>op;
		
		if(op==1){
			farenheit = (9.0 / 5.0 ) * celsius + 32.0;
			cout<<"En grado Farenheit es igual: "<<farenheit;
			printf ("%cF",167);
		}else{
			kelvin = celsius + 273.15;
			cout<<"En grado Kelvin es igual a: "<<kelvin;
			printf ("%cK",167);
		}
	}
	
	if(op==8){
		double area, base, altura, radio, op;
		
		cout<<"Descoja una figura geometrica";
		cout<<"\n1.Rectangulo";
		cout<<"\n2.Circulo";
		cout<<"\n3.Triangulo";
		cout<<"\nOpcion: ";cin>>op;
		
		if(op==1){
			cout<<"Ingrese la base del Rectangulo: ";cin>>base;cout<<endl;
			cout<<"Ingrese la altura del Rectangulo: ";cin>>altura;cout<<endl;
			
			area = base * altura;
			
			cout<<"La area del rectngulo es: "<<area;
		}else{
			if(op==2){
				cout<<"Ingrese el radio del Circulo: ";cin>>radio;cout<<endl;
				
				area = PI * pow(radio,2);
				
				cout<<"El area de Circulo es: "<<area<<endl;
			}else{
				if(op==3){
					cout<<"Ingrese la base de Triangulo: ";cin>>base;cout<<endl;
					cout<<"Ingrese la altura de Triangulo: ";cin>>base;cout<<endl;
					
					area = (base * altura)/2;
					
					cout<<"\nEl area del Triangulo es: "<<area<<endl;
				}else{
					cout<<"\nLa opcion es erronea\n";
				}
			}
		}	 
	}
	
	if(op==9){
		int frutas, aseo, carnes, ropa, licores, prefrutas, preaseo, precarnes, preropa, prelicores;
		int hora, minutos, precio, ahorro, a;
		
		cout<<"Ingrese el precio de cada producto:\n";
		cout<<"Frutas y verduras: ";cin>>prefrutas;cout<<endl;
		cout<<"Productos de aseo ";cin>>preaseo;cout<<endl;
		cout<<"Carnes: ";cin>>precarnes;cout<<endl;
		cout<<"Ropa y calzado: ";cin>>preropa;cout<<endl;
		cout<<"Licores: ";cin>>prelicores;cout<<endl;
		
		cout<<"\nDigite la cantidad de cada producto:\n";
		cout<<"Frutas y verduras: ";cin>>frutas;cout<<endl;
		cout<<"Productos de aseo ";cin>>aseo;cout<<endl;
		cout<<"Carnes: ";cin>>carnes;cout<<endl;
		cout<<"Ropa y calzado: ";cin>>ropa;cout<<endl;
		cout<<"Licores: ";cin>>licores;cout<<endl;
		
		a = frutas + aseo + carnes + ropa + licores;
		
		cout<<"\nDigite la hora de la venta:\n";
		cout<<"Hora: ";cin>>hora;cout<<endl;
		cout<<"Minutos: ";cin>>minutos;cout<<endl;
		
		if((hora <= 8) and (minutos <= 30)){
			
			frutas = (prefrutas- int(prefrutas*0.1)) * frutas;
			aseo = (preaseo- int(preaseo*0.05)) * aseo;
			carnes = (precarnes - int(precarnes*0.05)) * carnes;
			ropa = (preropa- int(preropa*0.1)) * ropa;
			licores = (prelicores- int(prelicores*0.08)) * licores;
			
			precio = frutas + aseo + carnes + ropa + licores;
			ahorro = int(prefrutas*0.1) + int(preaseo*0.05) + int(precarnes*0.05) + int(preropa*0.1) + int(prelicores*0.08);
			
			cout<<"El precio a pagar es: "<<precio<<endl;
			cout<<"El ahorro que se genero por la compra es de: "<<ahorro * a<<endl;
		}else{
			if((hora >= 8)){
				if(hora == 9){
					if(minutos <= 30){
						
						frutas = (prefrutas- int(prefrutas*0.05)) * frutas;
						aseo = (preaseo- int(preaseo*0.02)) * aseo;
						carnes = (precarnes - int(precarnes*0.02)) * carnes;
						ropa = (preropa- int(preropa*0.08)) * ropa;
						licores = (prelicores- int(prelicores*0.06)) * licores;
			
						precio = frutas + aseo + carnes + ropa + licores;
						ahorro = int(prefrutas*0.05) + int(preaseo*0.02) + int(precarnes*0.02) + int(preropa*0.08) + int(prelicores*0.06);
			
						cout<<"El precio a pagar es: "<<precio<<endl;
						cout<<"El ahorro que se genero por la compra es de: "<<ahorro * a<<endl;
					}else{
						if(minutos < 60){
							frutas = prefrutas * frutas;
							aseo = preaseo * aseo;
							carnes = precarnes * carnes;
							ropa = preropa * ropa;
							licores = prelicores * licores;
		
							precio = frutas + aseo + carnes + ropa + licores;
					
							cout<<"El precio a pagar es: "<<precio<<endl;
						}else cout<<"Los minutos son erroneos";
					}
				}else{
					if(hora == 8){
						if(minutos < 60){
							frutas = (prefrutas- int(prefrutas*0.05)) * frutas;
							aseo = (preaseo- int(preaseo*0.02)) * aseo;
							carnes = (precarnes - int(precarnes*0.02)) * carnes;
							ropa = (preropa- int(preropa*0.08)) * ropa;
							licores = (prelicores- int(prelicores*0.06)) * licores;
			
							precio = frutas + aseo + carnes + ropa + licores;
							ahorro = int(prefrutas*0.05) + int(preaseo*0.02) + int(precarnes*0.02) + int(preropa*0.08) + int(prelicores*0.06);
				
							cout<<"El precio a pagar es: "<<precio<<endl;
							cout<<"El ahorro que se genero por la compra es de: "<<ahorro * a<<endl;
						
						}else cout<<"Los minutos son erroneos";
					}else{
						frutas = prefrutas * frutas;
						aseo = preaseo * aseo;
						carnes = precarnes * carnes;
						ropa = preropa * ropa;
						licores = prelicores * licores;
		
						precio = frutas + aseo + carnes + ropa + licores;
					
						cout<<"El precio a pagar es: "<<precio<<endl;
					}
				}
			}
		}		
	}
	
	if(op==10){
		/* calular y mostrar el infice de masa corporal de una persona y determinar y mostrar
		si esta bajo de peso, normal, sobre-peso u obeso.*/
		double peso, altura, masa;
		cout<<"\nDigite su peso en kilogramos: ";cin>>peso;cout<<endl;
		cout<<"Digite su altura en metros: ";cin>>altura;cout<<endl;
		
		masa = peso / (pow(altura,2));
		
		if(masa <= 18.5){
			cout<<"Usted se encuentra bajo de peso\n";
		}else{
			if((masa > 18.6) and (masa < 24.9)){
				cout<<"Usted se encuentra con un peso normal\n";
			}else{
				if((masa > 25.0) and (masa < 29.9)){
					cout<<"Usted se encuentra con sobre peso\n";
				}else{
					if(masa >= 30.0){
						cout<<"Ustes se encuentra obeso";
					}
				}
			}
		}	
	}
	
	
	return main();
}
