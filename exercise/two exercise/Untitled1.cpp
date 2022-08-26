#include<iostream>
using namespace std;

int main(){
	
	int pro;
	
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
	cout<<"Problema 11\n";
	cout<<"Problema 12\n";
	cout<<"Problema 13\n";
	cout<<"Problema 14\n";
	cout<<"Problema 15\n";
	cout<<"Problema 16\n";
	cout<<"Problema 17\n";
	cout<<"Problema 18\n";
	cout<<"Problema 19\n";
	cout<<"Problema 20\n";
	cout<<"Problema 21\n";
	cout<<"Problema 22\n";
	cout<<"Problema 23\n";
	cout<<"Problema 24\n";
	cout<<"Opcion: ";
	cin>>pro;
	
	if(pro == 1){
		
		int num;
		
		cout<<"Digite un numero del 1 al 5: ";
		cin>>num;
		
		if((num>=1) and (num<=5)){
			if((num==2)or (num==3) or (num==5)){
				cout<<"El numero es primo";
			}else{
				
				cout<<"El numero no es primo";
			}
			
		}else{
			cout<<"El numero no se encuentra en el rango de 1 al 5";
		}
	}
	
	if(pro==2){
		int par;
		
		cout<<"\n Digite un numero: ";
		cin>>par;
		
		if((par%2) == 0){
			
			cout<<"El numero es par\n";
		}else{
			cout<<"El numero no es par\n";
		}
	}
	if(pro==3){
		int dia;
		cout<<"Digite un numero de los dias de la semana";
		cin>>dia;
		if (dia==1){
			cout<<"el dia es lunes";
		} else {
			if (dia==2){
			cout<<"el dia es martes";
			}else { 
			if (dia==3){
				cout<<"el dia es miercoles";
				}else { 
				if (dia==4){
					cout<<"el dia es jueves";
					} else{ 
					if (dia==5){
						cout<<"el dia es viernes";
						} else {
						if (dia==6){
							cout<<"el dia es sabado";
						} else{
						if (dia==7){
							cout<<"el dia es domingo";
							} else{ 
							cout<<"el numero no esta entre los dias de la semana";
								}
							}
						}
					}
				}
			}
		}
	}
	
	if(pro==4){
		int mes;
		cout<<"Digite un numero del 1 al 12: ";
		cin>> mes;
		cout<<endl;
		if(mes==1){
			cout<<"El numero corresponde al mes de Enero";
		}else{
			if(mes==2){
			cout<<"El numero corresponde al mes de Febrero";
			}else{
				if(mes==3){
					cout<<"El numero corresponde al mes de Marzo";
				}else{
					if(mes==4){
						cout<<"El numero corresponde al mes de Abril";
					}else{
						if(mes==5){
							cout<<"El numero corresponde al mes de Mayo";
						}else{
							if(mes==6){
								cout<<"El numero corresponde al mes de Julio";
							}else{
								if(mes==7){
									cout<<"El numero corresponde al mes de Junio";
								}else{
									if(mes==8){
										cout<<"El numero corresponde al mes de Agosto";
									}else{
										if(mes==9){
											cout<<"El numero corresponde al mes de Septiembre";
										}else{
											if(mes==10){
												cout<<"El numero corresponde al mes de Octubre";
											}else{
												if(mes==11){
													cout<<"El numero corresponde al mes de Novimbre";
												}else{
													if(mes==12){
													cout<<"El numero corresponde al mes de Diciembre";
													}else{
														cout<<"El numero no corresponde a nungun mes del a�o";
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	if(pro==5){
		int num1,num2,num3;
		cout<<"Digite tres numeros\n";	
		cout<<"Numero 1: ";cin>>num1;			
		cout<<"\nNumero 2: ";cin>>num2;
		cout<<"\nNumero 3: ";cin>>num3;
		
		if((num1 <= num2) and (num1 <= num3)){
			if(num2 <= num3){
				cout<<num1<<","<<num2<<","<<num3;
			}else{
				cout<<num1<<","<<num3<<","<<num2;
			}
		}else{
			if((num2 <= num1) and (num2 <= num3)){
				if(num1 <= num3){
					cout<<num2<<","<<num1<<","<<num3;
				}else{
					cout<<num2<<","<<num3<<","<<num1;
				}																	
			}else{
				if((num3 <= num1) and (num3 <= num2)){
					if(num1 <= num2){
						cout<<num3<<","<<num1<<","<<num2;
					}else{
					cout<<num3<<","<<num2<<","<<num1;
					}
				}
			}
		}
	}
	
	if(pro==6){
		int num1,num2,num3;
		cout<<"Digite tres numeros\n";	
		cout<<"Numero 1: ";cin>>num1;			
		cout<<"\nNumero 2: ";cin>>num2;
		cout<<"\nNumero 3: ";cin>>num3;
		
		if((num1 >= num2) and (num1 >= num3)){
			if(num2 >= num3){
				cout<<num1<<","<<num2<<","<<num3;
			}else{
				cout<<num1<<","<<num3<<","<<num2;
			}
		}else{
			if((num2 >= num1) and (num2 >= num3)){
				if(num1 >= num3){
					cout<<num2<<","<<num1<<","<<num3;
				}else{
					cout<<num2<<","<<num3<<","<<num1;
				}																	
			}else{
				if((num3 >= num1) and (num3 >= num2)){
					if(num1 >= num2){
						cout<<num3<<","<<num1<<","<<num2;
					}else{
					cout<<num3<<","<<num2<<","<<num1;
					}
				}
			}
		}
	}

	if(pro==7){
		int num1,num2,num3;
		cout<<"Digite tres numeros\n";	
		cout<<"Numero 1: ";cin>>num1;			
		cout<<"\nNumero 2: ";cin>>num2;
		cout<<"\nNumero 3: ";cin>>num3;
		
		if((num1 == num2) and (num1 == num3)){
			cout<<num1<<","<<num2<<","<<num3;
		}else{
			if((num1 == num2)){
				if(num1 > num3){
					cout<<num1<<","<<num2<<endl<<num3;
				}else{
					cout<<num3<<endl<<num1<<","<<num2;
				}
			}else{
				if(num1 == num3){
					if(num1 > num2){
						cout<<num1<<","<<num3<<endl<<num2;
					}else{
						cout<<num2<<endl<<num1<<","<<num3;
					}
				}else{
					if(num2 == num3){
						if(num1 > num2){
							cout<<num1<<endl<<num2<<","<<num3;
						}else{
							cout<<num2<<","<<num3<<endl<<num1;
						}
					}else{
						if((num1 > num2) and (num1 > num3)){
							if(num2 > num3){
								cout<<num1<<endl<<num2<<endl<<num3;
							}else{
								cout<<num1<<endl<<num3<<endl<<num2;
							}
						}else{
							if((num2 > num1) and (num2 > num3)){
								if(num1 > num3){
									cout<<num2<<endl<<num1<<endl<<num3;
								}else{
									cout<<num2<<endl<<num3<<endl<<num1;
								}																	
							}else{
								if((num3 > num1) and (num3 > num2)){
									if(num1 > num2){
										cout<<num3<<endl<<num1<<endl<<num2;
									}else{
										cout<<num3<<endl<<num2<<endl<<num1;
									}
								}
							}
		
						
						}
					}
				}
			}
		
		}
	}
	
	if(pro==8){
		int num;
		
		cout<<"Digite un numero: ";
		cin>>num;
		if(num < 0) cout<<"El numero es negativo";
		
		else cout<<"El numero es positivo";
	}
	
	if(pro==9){
		char letra;
		
		cout<<"Digite un caracter: ";
		cin>>letra;
		
		if((letra == 'S') or (letra == 'N')){
			cout<<"Permitido";
		}else{
			cout<<"No permitido";
		}
	}
	
	if(pro==10){
		int num;
		
		cout<<"Digite un numero: ";
		cin>>num;
		if(num > 100){
			cout<<"El numero es mayor a 100";
		}else{
			cout<<"El numero no es mayor a 100";
		}
	}
	
	
	if (pro==11) {
		char vocal;
		cout<<"Ingrese una letra para comprobar si es vocal \n";
		cin>>vocal;
		if((vocal=='a') or (vocal=='e') or (vocal=='i') or (vocal=='o') or (vocal=='u') or
		(vocal=='A') or (vocal=='E') or (vocal=='I') or (vocal=='O') or (vocal=='U')){ 
			cout<<"La letra es una vocal";
		} else{ 
			cout<<"La letra no es una vocal";
		}
	} 
	
	if (pro==12){
		
		double num1, num2, num3;	
		cout<<"Digite tres numeros:\n ";
		cout<<"Numero-1: ";cin>>num1;
		cout<<"\nNumero-2: ";cin>>num2;
		cout<<"\nNumero-3: ";cin>>num3;
	
	if(num1 < num2){
		if(num1 < num3){
			if(num2 < num3){
				cout<<"\nLos numeros se digitaron en orden creciente";
			}else{
				cout<<"\nLos numeros no se digitaron en orden creciente";
			}
		}else{
			cout<<"\nLos numeros no se digitaron en orden creciente";
		}
	}else{	
		cout<<"\nLos numeros no se digitaron en orden creciente";
		}
	}
	
	if(pro==13){
		int num1, num2, num3;
		
		cout<<"Digite tres numeros\n";	
		cout<<"Numero 1: ";cin>>num1;			
		cout<<"\nNumero 2: ";cin>>num2;
		cout<<"\nNumero 3: ";cin>>num3;
		
		if(num1 > num2){
			if(num1 > num3){
				if(num2 > num3){
					cout<<"\nLos numeros se digitaron en orden decreciente";
				}else{
					cout<<"\nLos numeros no se digitaron en orden decreciente";
				}
			}else{
				cout<<"\nLos numeros no se digitaron en orden decreciente";
			}
		}else{	
			cout<<"\nLos numeros no se digitaron en orden decreciente";
		}
	}
	
	if(pro==14){
		int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, menor, mayor;
		
		cout<<"Digite diez numeros\n";	
		cout<<"Numero 1: ";cin>>num1;			
		cout<<"\nNumero 2: ";cin>>num2;
		cout<<"\nNumero 3: ";cin>>num3;
		cout<<"\nNumero 4: ";cin>>num4;
		cout<<"\nNumero 5: ";cin>>num5;
		cout<<"\nNumero 6: ";cin>>num6;
		cout<<"\nNumero 7: ";cin>>num7;
		cout<<"\nNumero 8: ";cin>>num8;
		cout<<"\nNumero 9: ";cin>>num9;
		cout<<"\nNumero 10: ";cin>>num10;
		
		if((num1 > num2) and (num1 > num3) and (num1 > num4) and (num1 > num5) and (num1 > num6) and (num1 > num7) and
		(num1 > num8) and (num1 > num9) and (num1 > num10)){
			mayor = num1;
		}else{
			if((num2 > num1) and (num2 > num3) and (num2 > num4) and (num2 > num5) and (num2 > num6) and (num2 > num7) and
			(num2 > num8) and (num2 > num9) and (num2 > num10)){
				mayor = num2;
			}else{
				if((num3 > num1) and (num3 > num2) and (num3 > num4) and (num3 > num5) and (num3 > num6) and (num3 > num7) and
				(num3 > num8) and (num3 > num9) and (num3 > num10)){
					mayor = num3;
				}else{
					if((num4 > num1) and (num4 > num2) and (num4 > num3) and (num4 > num5) and (num4 > num6) and (num4 > num7) and
					(num4 > num8) and (num4 > num9) and (num4 > num10)){
						mayor = num4;
					}else{
						if((num5 > num1) and (num5 > num2) and (num5 > num3) and (num5 > num4) and (num5 > num6) and (num5 > num7) and
						(num5 > num8) and (num5 > num9) and (num5 > num10)){
							mayor = num5;
						}else{
							if((num6 > num1) and (num6 > num2) and (num6 > num3) and (num6 > num4) and (num6 > num5) and (num6 > num7) and
							(num6 > num8) and (num6 > num9) and (num6 > num10)){
								mayor = num6;
							}else{
								if((num7 > num1) and (num7 > num2) and (num7 > num3) and (num7 > num4) and (num7 > num5) and (num7 > num6) and
								(num7 > num8) and (num7 > num9) and (num7 > num10)){
									mayor = num7;
								}else{
									if((num8 > num1) and (num8 > num2) and (num8 > num3) and (num8 > num4) and (num8 > num5) and (num8 > num6) and
									(num8 > num7) and (num8 > num9) and (num8 > num10)){
										mayor = num8;
									}else{
										if((num9 > num1) and (num9 > num2) and (num9 > num3) and (num9 > num4) and (num9 > num5) and (num9 > num6) and
										(num9 > num7) and (num9 > num8) and (num9 > num10)){
											mayor = num9;
										}else{
											if((num10 > num1) and (num10 > num2) and (num10 > num3) and (num10 > num4) and (num10 > num5) and (num10 > num6) and
											(num10 > num7) and (num10 > num8) and (num10 > num9)){
												mayor = num10;
											}	
										}
										
									}
								}
							}
						}
					}
				}
			}
		}
		
		if((num1 < num2) and (num1 < num3) and (num1 < num4) and (num1 < num5) and (num1 < num6) and (num1 < num7) and
		(num1 < num8) and (num1 < num9) and (num1 < num10)){
			menor = num1;
		}else{
			if((num2 < num1) and (num2 < num3) and (num2 < num4) and (num2 < num5) and (num2 < num6) and (num2 < num7) and
			(num2 < num8) and (num2 < num9) and (num2 < num10)){
				menor = num2;
			}else{
				if((num3 < num1) and (num3 < num2) and (num3 < num4) and (num3 < num5) and (num3 < num6) and (num3 < num7) and
				(num3 < num8) and (num3 < num9) and (num3 < num10)){
					menor = num3;
				}else{
					if((num4 < num1) and (num4 < num2) and (num4 < num3) and (num4 < num5) and (num4 < num6) and (num4 < num7) and
					(num4 < num8) and (num4 < num9) and (num4 < num10)){
						menor = num4;
					}else{
						if((num5 < num1) and (num5 < num2) and (num5 < num3) and (num5 < num4) and (num5 < num6) and (num5 < num7) and
						(num5 < num8) and (num5 < num9) and (num5 < num10)){
							menor = num5;
						}else{
							if((num6 < num1) and (num6 < num2) and (num6 < num3) and (num6 < num4) and (num6 < num5) and (num6 < num7) and
							(num6 < num8) and (num6 < num9) and (num6 < num10)){
								menor = num6;
							}else{
								if((num7 < num1) and (num7 < num2) and (num7 < num3) and (num7 < num4) and (num7 < num5) and (num7 < num6) and
								(num7 < num8) and (num7 < num9) and (num7 < num10)){
									menor = num7;
								}else{
									if((num8 < num1) and (num8 < num2) and (num8 < num3) and (num8 < num4) and (num8 < num5) and (num8 < num6) and
									(num8 < num7) and (num8 < num9) and (num8 < num10)){
										menor = num8;
									}else{
										if((num9 < num1) and (num9 < num2) and (num9 < num3) and (num9 < num4) and (num9 < num5) and (num9 < num6) and
										(num9 < num7) and (num9 < num8) and (num9 < num10)){
											menor = num9;
										}else{
											if((num10 < num1) and (num10 < num2) and (num10 < num3) and (num10 < num4) and (num10 < num5) and (num10 < num6) and
											(num10 < num7) and (num10 < num8) and (num10 < num9)){
												menor = num10;
											}	
										}
										
									}
								}
							}
						}
					}
				}
			}
		}
		
		cout<<"El numero menor es: "<<menor<<endl;
		cout<<"El numero mayor es: "<<mayor;
	}
	
	if(pro==15){
		int a, b, c;
		cout<<"Ingrese tres numeros\n";
		cin>> a >>b >>c;
		if (c==(a+b)) {
			cout<<c <<"=" <<a <<"+" <<b;			
		}else { 
			cout<<"La suma de los dos primeros numeros no es  " <<c;
		}
	}

	if(pro==16){
		int choice;
		cout<<"Archivo\t\t" <<"Buscar\t\t" <<"Salir" <<endl;
		cout<<"   1   \t\t" <<"   2  \t\t" <<"  3  " <<endl;
		cout<< "Digite el numero de donde desea dirigirse \n";
		cin>>choice;

		if (choice>=1 and choice <=3){
			cout<<"Sera redirigido en breves";	
		} else {
		cout<<"Seleccion incorrecta, intente de nuevo"; 
		}
	}

	if(pro==17){
		int a,b;
		cout <<"Ingresar dos numeros del 1 al 5 ";
		cin >>a;
		cin >>b;
		if((a==2&&b==2)|
		(a==3&&b==3)|(a==5&&b==5)){
			cout <<"Los numeros son primos";
		}
		if(a!=b){
  			cout <<"Los numeros no son iguales ";
		}else{
			cout <<"Los numeros no son primos";
		} 
	}

	if(pro==18){
		int n1, n2;
		cout << "Digite el primer numero: ";
		cin >> n1;
		cout << "Digite el segundo numero: ";
		cin >> n2;
		if((n1%2)==0 && n1!=0 && (n2%2)==0 && n2!=0){
			cout << "Ambos numeros son pares" << endl;
		}else if((n1%2)!=0 && n1!=0 && (n2%2)!=0 && n2!=0){
			cout << "Ambos numeros son impares" << endl;
		}else{
			cout << "Los dos numeros no son pares ni impares entre si ";}
	}
	
	if(pro==19){
		int _191, _192, _193;
		cout << "Digite el primer número: ";
		cin >> _191;
		cout << "Digite el segundo número: ";
		cin >> _192;
		cout << "Digite el tercer número: ";
		cin >> _193;
		if((_191*_192)==_193){
			cout << "El tercero es igual a la multiplicación de los otros dos";
		}else{
			cout << "El tercero no es igual a la multiplicación de los otros dos";		
		}
	}
	
	if(pro==24){
		int _201, _202, _203;
		cout << "Digite el primer número: ";
		cin >> _201;
		cout << "Digite el segundo número: ";
		cin >> _202;
		cout << "Digite el tercer número: ";
		cin >> _203;
		if((_201%_202)==_203){
			cout << "El tercero es igual al resto de la división de los otros dos";
		}else{
			cout << "El tercero no es igual al resto de la división de los otros dos";
		}
	}
	
	if(pro==21){
		int _21x, _21y, _21z;
		cout << "Elija la opcion:\n" << "1.Equilatero\n" << "2.Isosceles\n" << "3.Escaleno\n";
		cin >> _21x;
		if(_21x==1){
			cout << "Digite un lado del triangulo:  ";
			cin >> _21x;
			cout << "El perímetro del triangulo es igual a " << _21x*3 ;
		} else 
			if (_21x==2){
				cout << "Digite la base del triangulo: ";
				cin >> _21x;
				cout << "Digite un lado diferente de la base del triangulo: ";
				cin >> _21y;
				cout << "El perametro del triangulo es igual a: " << (_21y*2)+_21x ;
			} else 
				if (_21x==3){
					cout << "Digite el primer lado del triangulo: ";
					cin >> _21x;
					cout << "Digite el segundo lado del triangulo: ";
					cin >> _21y;
					cout << "Digite el tercer lado del triangulo: ";
					cin >> _21z;
					cout << "El perimetro del triangulo es igual a: " << _21x+_21y+_21z;
				} else {
					cout << "No ha seleccionado ninguna de las opciones posibles";}
			
	}
		
		if(pro==22){
			float mlg, tld, kg, g, op;
			cout<<"Ingrese el valor de kilogramo que desea transformar a otra unidad \n";
			cin>>kg;
			tld=kg/1000;
			g=kg*1000;
			mlg=kg*1000000;
			cout<<"Ingrese la unidad a la que desea convertir  " <<kg <<"kg\n";
			cout<< "1. Toneladas\t";
			cout<< "2. Gramos\t";
			cout<< "3. Miligramos\t\n";
			cin>>op;
			if((op>3) or (op<1)) {
				cout<<"El numero digitado no corresponde a ninguna opcion";
			}else{
		     	if (op==1){
			 		cout<<kg <<" = " <<tld <<"Toneladas\n";
				}else{
		          	if (op==2)
		         		cout<<kg<<" = " <<g <<"Gramos \n";
		         	else {
					 	if (op==3)
		         		cout<<kg <<" = " <<mlg <<"Miligramos \n";
				 	}
				}
     		}		 
		}
		
	if(pro==23){
    	int z, y1, y2;
        cout <<"Digite el valor bruto del importe: ";
        cin>>	z;
        if (z>15000){
          cout<<"El importe neto es: "<<(z+(z*0.16));
        }else{
			cout<<"El importe neto es: "<<(z+(z*0.10));
        }
    }
          
    if(pro==24){      
        int h, min, seg;
        cout<<"Ingrese la hora\n" ;
        cin>>h;
        cout<<"Ingrese los minutos \n" ;
        cin>>min;
        cout<<"Ingrese los segundos \n" ;
        cin>>seg;
        if ((h>=0) and (h<=23)){ 
			if ((min >=0)and (min<=59)){
				if ((seg >=0)and (seg<=59)){
              	  if((seg+1)>59){
						min=min+1; seg=-1; 
						cout<<"El horario + 1 seg es " <<h <<":" <<min <<"." <<(seg+1);
	            	}else{
                  		cout<<"El horario + 1 seg es " <<h <<":" <<min <<"." <<(seg+1);
                  	}
				}else { 
					cout<<"El numero ingresado es erroneo para segundos";
				}
	        } else {
				cout<<"El numero ingresado es erroneo para minutos";
	        }   
    	}else{ 
			cout<<"El numero ingresado es erroneo para las horas ";
     	}
	}
	 
	return main();
}
