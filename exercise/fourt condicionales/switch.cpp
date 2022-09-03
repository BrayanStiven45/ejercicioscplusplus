#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int op;
	
	
	cout<<"1.Cajero.\n";
	cout<<"2.Vocal.\n";
	cout<<"3.Color.\n";
	cout<<"4.Color mayuscula.\n";
	cout<<"5.Indicador.\n";
	cout<<"Opcion: ";cin>>op;
	
	switch(op){
	
	case 1:
		int op;
		
		fflush(stdin);
		
		cout<<"1.Consultar saldo\n";
		cout<<"2.Retirar\n";
		cout<<"3.Cambio clave\n";
		cout<<"4.Salir\n";
		cout<<"Opcion: ";cin>>op;
		
		switch(op){
			case 1: cout<<"Usted consulto su saldo"; break;
			case 2: cout<<"Usted retiro"; break;
			case 3: cout<<"Usted cambio clave"; break;
			case 4: cout<<"Usted salio"; break;
		}
		break;
		
	case 2:
		char ch;
		
		cout<<"Introduzca una vocal: ";
		fflush(stdin);
		ch = getchar();
		
		switch(ch){
			case 'a': cout<<"Se ha pulsado la letra a.\n"; break; 
			case 'e': cout<<"Se ha pulsado la letra e.\n"; break;
			case 'i': cout<<"Se ha pulsado la letra i.\n"; break;
			case 'o': cout<<"Se ha pulsado la letra o.\n"; break;
			case 'u': cout<<"Se ha pulsado la letra u.\n"; break;
			default: cout<<"Error"; break;
		}
		break;
	
	case 3:
		char ch1;
		cout<<"\n\nIntroduzca la inicial de un color.\n";
	
		fflush(stdin);
		switch(ch1 = getchar()){
			case 'r':
			case 'R':
				cout<<"Rojo";
				break;	
			case 'b':
			case 'B':
					cout<<"Blanco";
					break;
			case 'a':
			case 'A':
					cout<<"Amarillo";
					break;
		}
		break;
	
	case 4:
		char ch2;
		cout<<"\n\nIntroduzca la inicial de un color.\n";
		fflush(stdin);
		switch(ch2 = toupper(getchar())){
			case 'R':
					cout<<"Rojo\n";
					break;	
			case 'B':
					cout<<"Blanco\n";
					break;
			case 'A':
					cout<<"Amarillo\n";
					break;
			default: cout<<"Error\n";
		}
		break;
		
	case 5:
	
		double x, y;
		int indicador;
	
		cout<<"Valor de indicador\n";
		cin>>indicador;
		
		cout<<"Digite valor de x: \n";
		cin>>x;
		cout<<"\nDigite valor de y: \n";
		cin>>y;
		
		switch(indicador){
			case -1:
				y=x*x;
				break;
			case 0:
				y=x/2;
				break;
			case 1:
				y=x;
				break;
			case 2:
			case 3:
			y = 2*(x+1);
			default:
				y = 0;
		}
		cout<<y;
		break;
	
	case 6:
		int x1,y1;
	
		cout<<"\nDigite valor de x:\n ";
		cin>>x1;
		cout<<"\nDigite valor de y:\n ";
		cin>>y1;
		
		switch(x1){
			case 1:
				switch(y1){
					case 0: 
						printf("Error de division por cero\n");
					case 1:
						x1=1;
						y1=7;
				}
				break;
			case 2: break;
		}
		cout<<x1<<y1;
		break;
	}

	system("pause");
	system("cls");
	
	return main();
}
