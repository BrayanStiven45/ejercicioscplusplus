#include<iostream>
#include<locale.h>
#include<cstdlib>
#include<string.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int op;
	
	cout<<"\nMenú\n";
	cout<<"1.Problema\n";
	cout<<"2.Problema\n";
	cout<<"3.Problema\n";
	cout<<"4.Problema\n";
	cout<<"Opcion: ";cin>>op;
	
	switch(op){
		case 1:
			double prebrocha, prerodillos, presellador, pago;
			int brocha, rodillos, sellador, op;
	
			fflush(stdin);
	
			cout<<"\n\nDigite el precio de los productos.\n";
			cout<<"Brocha de cerdo: ";cin>>prebrocha;
			cout<<"\nRodillos: ";cin>>prerodillos;
			cout<<"\nSellador: ";cin>>presellador;
			
			cout<<"Digite cantidad a comprar.\n";
			cout<<"\nBrocha de cerdo: ";cin>>brocha;
			cout<<"\nRodillos: ";cin>>rodillos;
			cout<<"\nSellador: ";cin>>sellador;
	
			brocha = (prebrocha-(prebrocha * 0.2)) * brocha;
			rodillos = (prerodillos-(prerodillos * 0.15)) * rodillos;
			sellador = presellador * sellador;
	
			cout<<"Metodo de pago.\n";
			cout<<"1.Contado\n";
			cout<<"2.Credito\n";
			cout<<"Opción: ";cin>>op;
	
			switch(op){
				case 1: 
					pago = (brocha + rodillos + sellador);
					pago = pago-(pago * 0.07);
					
					cout<<"\nEl valor a pagar es: "<<pago<<"$ con el 7% de descuento"<<endl;
					break;
				case 2:
					pago = (brocha + rodillos + sellador);
					
					cout<<"\nEl valor a pagar es: "<<pago<<"$"<<endl;
					break;
				default: cout<<"La opcion seleccionada es incorrecta.\n";break;
			}
			break;
			
		case 2:
			fflush(stdin);
			char articulo[40];
			int costo, total, ad;
			
			cout<<"Digite el nombre del articulo: ";
			gets(articulo);
			cout<<"\n";
			cout<<"Digite el costo basico del articulo: ";cin>>costo;
			cout<<"\n";
	
			switch(costo < 300000){
				case  true:
					total = costo;
							
					cout<<"\nEl costo total del articulo '"<<articulo<<"' son: "<<total<<"$\n";
					break;
				
				case  false:
					switch((costo >= 300000) and (costo < 600000)){
						case true:
							total = costo + ((costo % 300000) * 0.3);
							
							cout<<"\nEl costo total del articulo '"<<articulo<<"' son: "<<total<<"$ con impuesto del 30%\n";
							break;
						
						case false:
							switch((costo >= 600000) and (costo < 800000)){
								case true:
									total = costo + (costo % 300000) * 0.4;
							
									cout<<"\nEl costo total del articulo '"<<articulo<<"' son: "<<total<<"$ con impuesto del 40%\n";
									break;
									
								case false:
									switch(costo >= 800000){
										case true:
											total = costo * 1.5;
					
											cout<<"\nEl costo total del articulo '"<<articulo<<"' son: "<<total<<"$ con impuesto del 50%\n";
											break;
									}break;
							}break;
					}break;
			}break;
			
			
		case 3:	
			int year, mes;

			cout<<"Ingrese el año\n";
			cin>>year;
	
			switch ((year==1900)or (year==1904) or (year==1908) or (year==1912) or (year==1916) or (year==1920) or (year==1924) or
            		(year==1928) or (year==1932) or (year==1936) or (year==1940) or (year==1944) or (year==1948) or
					(year==1952) or (year==1956) or (year==1960) or (year==1964) or (year==1968) or (year==1972) or
					(year==1976) or (year==1980) or (year==1984) or (year==1988) or (year==1992) or (year==1996) or
	     			(year==2000) or (year==2004) or (year==2008) or (year==2012) or (year==2014) or (year==1924)){
				
						case true:
							cout<<"El año es bisiesto, ingrese el mes\n";
							int mes;
							cin>>mes;
							switch (mes){
								case 1: 
									cout<<"Enero, posee 31 días"; break;
						
								case 2:
									cout<<"Febrero, posee 29 días"; break;
						
								case 3:
									cout<<"Marzo, posee 31 días"; break;
						
								case 4:
									cout<<"Abril, posee 30 días"; break;
						
								case 5:
									cout<<"Mayo, posee 31 días"; break;
						
								case 6:
									cout<<"Junio, posee 30 días"; break;
						
								case 7:
									cout<<"Julio, posee 31 días"; break;
						
								case 8:
									cout<<"Agosto, posee 31 días"; break;
						
								case 9 :
									cout<<"Septiembre, posee 30 días"; break;
						
								case 10:
									cout<<"Octubre, posee 31 días"; break;
						
								case 11 :
									cout<<"Noviembre, posee 30 días"; break;
						
								case 12:
									cout<<"Diciembre, posee 31 días"; break;
						
								default:
									cout<<"No es un mes del días"; break;
							} break;	
			
						case false:
							cout<<"Ingrese el mes\n";
							int mes2;
							cin>>mes2;
							switch (mes2){
								case 1: 
									cout<<"Enero, posee 31 días"; break;
				
								case 2:
									cout<<"Febrero, posee 28 días"; break;
				
								case 3:
									cout<<"Marzo, posee 31 días"; break;
				
								case 4:
									cout<<"Abril, posee 30 días"; break;
				
								case 5:
									cout<<"Mayo, posee 31 días"; break;
				
								case 6:
									cout<<"Junio, posee 30 días"; break;
				
								case 7:
									cout<<"Julio, posee 31 días"; break;
				
								case 8:
									cout<<"Agosto, posee 31 días"; break;
				
								case 9 :
									cout<<"Septiembre, posee 30 días"; break;
				
								case 10:
									cout<<"Octubre, posee 31 días"; break;
				
								case 11 :
									cout<<"Noviembre, posee 30 días"; break;
				
								case 12:
									cout<<"Diciembre, posee 31 días"; break;
				
								default:
									cout<<"No es un mes del año"; break;
							}break;	
					}break;
		
		case 4:	
			int hora;
			float sueldot, sueldo;
			string nombre;
			cout<<"Ingrese su nombre\n";
    		cin>>nombre;
    		cout<<"Ingrese el numero de horas trabajadas\n";
    		cin>> hora;
    		cout<<"Ingrese su sueldo por hora \n";
    		cin>>sueldo;
    	
    		switch ((hora>40) and (hora<50)) {
				case true: 
					sueldot=(2*hora)*sueldo; break;
    			case false: 
					switch ((hora>0) and (hora<40)) {
						case true: 
							sueldot=hora*sueldo; break;
    					case false: 
							switch (hora>50) {			
    							case true: sueldot=((3*hora)*sueldo)+ (sueldo*0.12) ; break;
    						
							}                                                                                                                     
					}                                   
			}
			cout<<nombre <<" " <<"Sus horas trabajadas son " <<hora <<" y su sueldo es " <<sueldot <<endl;
			break;
				
	}
	
	system("pause");
	system("cls");
	
	return main();
}
