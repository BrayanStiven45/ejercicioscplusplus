#include<iostream>

using namespace std; 


int main(){
	
	int lc, r, bt, ht, lt, mt, nt, br, hr,Dro,dro,lro ;
	
	cout<<"Digite el valor de los lados del cuadrado: ";
	cin>>lc;
	cout<<"\n Digite los valores del triangulo: \n";
	cout<<"Base: ";
	cin>>bt;
	cout<<"\nAltura:";
	cin>>ht;
	cout<<"\nSegundo lado: ";
	cin>>mt;
	cout<<"\nTercer lado: ";
	cin>>nt;
	cout<<"\nDigite los valores del rectangulo:";
	cout<<"\nBase:";
	cin>>br;
	cout<<"\nAltura: ";
	cin>>hr;
	cout<<"\nDigite los valores del rombo: ";
	cout<<"\nLado: ";
	cin>>lro;
	cout<<"\nDiagonal mayor: ";
	cin>>Dro;
	cout<<"\nDiagonal menor: ";
	cin>>dro;
	
	
	//titulos del cuadro
	cout<<" ______________________________________________________________________________\n";
	cout<<"|\t     |\t\t\t  |\t\t\t|\t              |\n";
	cout << "| Figura     |\t" "Elementos\t  |\t" "Perimetro\t|\t" "Area\t      |\n";
	//espacio de lineas 
	cout <<"|____________|____________________|_____________________|_____________________|\n";
	cout<<"|\t     |\t\t\t  |\t\t\t|\t              |\n";
	
	/*Cuadrado*/
	cout<<"| cuadrado   |\t";	
	cout<< "a = lado\t  |";
	//perimetro
	r = 4 * lc;
	cout<<"P = 4 * a = ";
	cout<< r <<"\t|";
	
	//area
	r = lc * lc;
	cout<<"A = a * a = ";
	cout<<r <<"        |\n";
	
	//espacio de lineas
	cout <<"|____________|____________________|_____________________|_____________________|\n";
	cout<<"|\t     |\t\t\t  |\t\t\t|\t              |\n";
	
	/*triangulo*/
	cout<<"| triangulo  |\t";
	cout<<"b:Base\t\t  |\t\t\t|\t              |\n";
	cout<<"|\t     |\th:Altura\t  |\t\t\t|";
	cout<<"    b * h            |\n";
	cout<<"|\t     |\tl:Lado\t\t  |"; 

	//perimetro
	r = bt + mt + nt;
	cout<<"P = l + m + n = ";
	cout<< r<<"\t|";
	
	//area
	r = (bt * ht) / 2;
	cout<<"A = ----- = ";
	cout<< r <<"        |\n";
	cout<<"|\t     |\tm:Lado2\t\t  |\t\t\t|    ";
	cout<<"  2              |\n";
	cout<<"|\t     |\tn:Lado3\t\t  |\t\t\t|\t              |\n";
	
	//espacio de lineas
	cout <<"|____________|____________________|_____________________|_____________________|\n";
	cout<<"|\t     |\t\t\t  |\t\t\t|\t              |\n";
	
	/* Rectángulo*/
	cout<<"| rectangulo ";
	cout<<"|\tb:Base\t\t  |\t\t\t|\t         |\n" "|\t     |\th:Altura\t  |";
	
	//perimetro
	r = 2 * br + 2 * hr;
	cout<<"P = 2*b + 2*h = ";
	cout<< r <<"\t|";
	
	//area
	r = br * hr;
	cout<<"A = b * h = ";
	cout<<r <<" |\n"; 
	
	//espacio de lineas
	cout <<"|____________|____________________|_____________________|_____________________|\n";
	cout<<"|\t     |\t\t\t  |\t\t\t|\t              |\n";
	
	/* rombo */
	cout<<"| rombo      |\t";
	cout<<"a:Lado \t\t  |\t\t\t|";
	cout<< "    D * d     |\n";
	cout<<"|\t     |\td:Diagonal menor  |";
	
	//perimetro
	r = 4 * lro;
	cout<<"P = 4 * a = ";
	cout<<r << "\t|";
	
	//area
	r = (Dro * dro) / 2;
	cout<<"A = ----- = ";
	cout<< r<<" |\n";

	cout<<"|\t     |\tD:Diagonal mayor  |\t";
	cout<<"\t \t|      2       |\n";
	
	//espacio de lineas	
	cout <<"|____________|____________________|_____________________|_____________________|\n";
	
	return 0;
}


