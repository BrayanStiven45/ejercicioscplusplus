//Proyecto Final Inventario y Facturacion
//Universidad Tecnologica de Pereira
// Codificado por: Brayan Stiven Valencia Ospina, Andres Mauricio Bedoya, Santiago Aristzabal
//Facultad Igenieria en sistemas y computacion
//Programacion Grupo 3 2222
// Presentado a: Luis Eduardo Muñoz Guerrero
// Fecha: 

#include<iostream>
#include <cstdlib>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>

using namespace std;
//----------------------------------------Define the struct---------------------------------------
// estructura para el administrador
static struct{
	char user[20];
	char password[20];
}admin_enter;

// estructura del producto
static struct{
	int code_product;
	char name_product[20];
	int cost_product;
	int product_quantity;
}product_enter;

// estructura del clinnte
static struct{
	int code_client;
	char name_client[20];
	char address_client[30];
	int total_owe_client;
}client_enter;

// estructura donde se venden los productos
static struct{
	int code_client;
	char name_product[20];
	int quantity;
	int cost_product;
}product_sold_client;
//------------------------------------------------------------------------------------------------
//-----------------------------------------Firma Funciones de menu-------------------------------------------
void menu_main();
void menu_admin();
void menu_admin_invoice();
void menu_admin_invoice_modify();
void menu_seller();
void menu_product();
//-----------------------------------------Firma Funciones de apoyo-------------------------------------------
void entry_first_data_admin();
bool verify_password(char password[]);
bool verify_user(string user);
void verify_for_admin();
void show_password(char password[]);
void change_password();
void change_user_admin();
void change_cost_product();
void enter_quantity();
int enter_product();
void show_product();
void delete_product();
int enter_client_func();
void sell_product(int code);
int verify_file_exists(char nombre[]);
int subtraction_to_product(int quantity, int code_product);
void addition_to_total(int code, int total);
void save_sale(int code_client, int code_product);
void show_invoice(int code_invoice);
char verify_client(int code);
char verify_product(int code);
int verify_quantity(int quantity, int code_product); //FUNCION PARA VERIFICAR CANTIDAD DE PRODUCTO
int delete_invoice(); //ELIMINAR FACTURA
int change_code_client();
int verify_enter_option(char option[], int range);
void subtract_to_total(int code); //FUNCION PARA PAGAR FACTURA
void show_invoice_without_code();
int block_password();
int change_username();
int change_address();

//--------------------------------------Funcion Principal---------------------------------------------
int main(){
	menu_main();
	return 0;
}

//----------------------------------------------------------------------------------------------------

//------------------------------------------APARTADO DE MENUS-----------------------------------------------------
//menu principal que se encarga de llamar a otros menus
void menu_main(){
	char option[1];
	int support; // variable de apoyo que guarda option[0] como numero
	
	do{
		system("cls");
		cout<<"\t|--------------------MENU PRINCIPAL---------------------|\t\n";
		cout<<"\t|1.Administrativo\t\t\t\t\t|\n";
		cout<<"\t|2.Vendedor\t\t\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t";
		cout<<endl;
		printf("Opcion: ");
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 2);
		
		switch(support){
			case 1:{
				menu_admin();
				break;
			}
			
			case 2:{
				menu_seller();
				break;
			}
		}
		system("pause");
	}while(support!=0);
}

//menu de administrador que se encarga de mostrar en pantalla las acciones que puede 
//hacer el administrador, y tambien llama a la funcion que verifica si el archivo
// donde se encuentra almecenado el usuario y contrasena del administrador 
// se encuantra creado no se a creado.
void menu_admin(){
	char aux[] = "admin_user_password.txt";
	if(verify_file_exists(aux) == 1){
		entry_first_data_admin();
	}else{
		verify_for_admin();	
	}	
	
	char option[1];
	int support; // variable de apoyo que guarda option[0] como numero
	
	do{
		system("cls");
		cout<<"\t|--------------------MENU ADMINISTRATIVO----------------|\t\n";
		cout<<"\t|1.Factura\t\t\t\t\t\t|\n";
		cout<<"\t|2.Producto\t\t\t\t\t\t|\n";
		cout<<"\t|3.Cambiar contrasena\t\t\t\t\t|\n";
		cout<<"\t|4.Cambiar usuario\t\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t";
		cout<<endl;
		cout<<"Opcion: ";
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 4);
		
		switch(support){
			case 1:{
				menu_admin_invoice();
				break;
			}
			
			case 2:{
				menu_product();
				break;
			}
			
			case 3:{
				change_password();
				break;
			}
			case 4:{
				change_user_admin();
				break;
			}
		}
		
		system("pause");
	}while(support!=0);
	
}

// menu de factura la cual le da la opciones al administrador
// de hacer con dicha factura segun las opciones
void menu_admin_invoice(){
	char option[1];
	int support; // variable de apoyo que guarda option[0] como numero
	do{
		system("cls");
		cout<<"\t|--------------------SECCION FACTURA--------------------|\t\n";
		cout<<"\t|1.Crear Nueva Factura/Cliente\t\t\t\t|\n";
		cout<<"\t|2.Vender Producto\t\t\t\t\t|\n";
		cout<<"\t|3.Mostrar Factura\t\t\t\t\t|\n";
		cout<<"\t|4.Mostrar todas las factura\t\t\t\t|\n";
		cout<<"\t|5.Pagar Factura\t\t\t\t\t|\n";
		cout<<"\t|6.Eliminar Factura\t\t\t\t\t|\n";
		cout<<"\t|7.Modificar Cliente\t\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t";
		cout<<endl;
		cout<<"Opcion: ";
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 7);
		
		switch(support){
			case 1:{
				enter_client_func();
				break;
			}
			
			case 2:{
				system("cls");
				cout<<"\t\t|-------------------|\n";
				cout<<"\t\t|  Vender Producto  |\n";
				cout<<"\t\t|-------------------|\n\n";
				int code;
				cout<<"Digite el codigo de la factura: ";
				cin>>code;
				if (!verify_client(code)){
					cout<<"\nLa cedula ingresada no se encuentra registrada.\n";
					break;
				}
				sell_product(code);
				break;
			}
			
			case 3:{
				system("cls");
				int code_invoice;
				cout<<"\t\t|-------------------|\n";
				cout<<"\t\t|  Mostrar Factura  |\n";
				cout<<"\t\t|-------------------|\n\n";
				cout<<"Digite el codigo de la factura: ";
				cin>>code_invoice;
				if (!verify_client(code_invoice)){
					cout<<"\nLa cedula ingresada no se encuentra registrada.\n";
					break;
				}
				show_invoice(code_invoice);
				break;
			}

			case 4:{
				show_invoice_without_code();
				break;
			}

			case 5:{
				system("cls");
				int code_invoice;
				cout<<"\t\t|-------------------|\n";
				cout<<"\t\t|   Pagar Factura   |\n";
				cout<<"\t\t|-------------------|\n\n";
				cout<<"Digite el codigo de la factura: ";
				cin>>code_invoice;
				
				if (verify_client(code_invoice)){
					subtract_to_total(code_invoice);
				}else{
					cout<<"\nLa factura que desea pagar no se ha encontrado.\n";
				}
				break;
			}
			
			case 6:{
				delete_invoice();
				break;
			}

			case 7:{
				menu_admin_invoice_modify();
				break;
			}
		}
		
		system("pause");
	}while(support!=0);
}

// menu de factura para modificarla 
void menu_admin_invoice_modify(){
	char option[1];
	int support; // variable de apoyo que guarda option[0] como numero
	
	do{
		fflush(stdin);
		system("cls");
		cout<<"\t|--------------------MODIFICAR CLIENTE------------------|\t\n";
		cout<<"\t|1.Modificar Cedula\t\t\t\t\t|\n";
		cout<<"\t|2.Modificar Nombre\t\t\t\t\t|\n";
		cout<<"\t|3.Modificar Direccion\t\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t";
		cout<<endl;
		cout<<"Opcion: ";
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 3);

		switch(support){
			case 1:{
				change_code_client();
				break;
			}
			case 2:{
				change_username();
				break;
			}
			case 3:{
				change_address();
				break;
			}

			
		}
		
		system("pause");
	}while(support!=0);
}

//menu del vendedor que se encarga de solamente vender productos
// y mostrar la factura
void menu_seller(){
	char option[1];
	int support; // variable de apoyo que guarda option[0] como numero
	do{
		system("cls");
		cout<<"\t|--------------------MENU VENDEDOR----------------------|\t\n";
		cout<<"\t|1.Mostrar factura\t\t\t\t\t|\n";
		cout<<"\t|2.Mostrar todas las factura\t\t\t\t|\n";
		cout<<"\t|3.Vender Producto\t\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t";
		cout<<endl;
		cout<<"Opcion: ";
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 2);

		switch(support){

			case 1:{
				system("cls");
				int code_invoice;
				cout<<"\t\t|-------------------|\n";
				cout<<"\t\t|  Mostrar Factura  |\n";
				cout<<"\t\t|-------------------|\n\n";
				cout<<"Digite el codigo de la factura: ";
				cin>>code_invoice;
				if (!verify_client(code_invoice)){
					cout<<"\nLa cedula ingresada no se encuentra registrada.\n";
					break;
				}
				show_invoice(code_invoice);
				break;
			}
			
			case 2:{
				show_invoice_without_code();
				break;
			}


			case 3:{
				system("cls");
				cout<<"\t\t|-------------------|\n";
				cout<<"\t\t|  Vender Producto  |\n";
				cout<<"\t\t|-------------------|\n\n";
				int code;
				cout<<"Digite el codigo de la factura: ";
				cin>>code;
				if (!verify_client(code)){
					cout<<"\nLa cedula ingresada no se encuentra registrada.\n";
					break;
				}
				sell_product(code);
				break;
			}
		}

		
		system("pause");
	}while(support!=0);
}

// menu de productos es el menu que se encarga de introducir nuevos productos y demas
void menu_product(){
	char option[1];
	int support; // variable de apoyo que guarda option[0] como numero
	
	do{
		system("cls");
		cout<<"\t|--------------------MENU ADMINISTRATIVO----------------|\t\n";
		cout<<"\t|1.Ingresar Productos\t\t\t\t\t|\n";
		cout<<"\t|2.Mostrar Productos\t\t\t\t\t|\n";
		cout<<"\t|3.Eliminar Productos\t\t\t\t\t|\n";
		cout<<"\t|4.Cambiar Cantidad de Productos\t\t\t|\n";
		cout<<"\t|5.Cambiar Precio de Productos\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t";
		cout<<endl;
		cout<<"opcion: ";
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 5);
		
		switch(support){
			case 1:{
				enter_product();
				break;
			}
			
			case 2:{
				show_product();
				break;
			}
			
			case 3:{
				delete_product();
				break;
			}

			case 4:{
				enter_quantity();
				break;
			}
			
			case 5:{
				change_cost_product();
				break;
			}
		}
		
		system("pause");
	}while(support != 0);
}

//---------------------------------------------------FIN APARTADOS DE MENUS-------------------------------------------------

//--------------------------------------FUNCIONES DE APOYO Y VERIFYCACION---------------------------------------------

//esta funcion comprueba si la entrada de una opcion es valida
int verify_enter_option(char option[1], int range){
	int support;
	if(!isdigit(option[0])){
		cout<<"La opcion ingresada debe ser un numero.\n";
		cout<<"¡Vuelva a intentarlo!.\n";
		return -1;
	}
	support = atoi(option);
	if(range == 0){
		goto aqui;
	}
	if((support > range) or (support < 0)){
		cout<<"El numero ingresado no se encuentra en la lista.\n";
		cout<<"!Vuelve a intentarlo.!\n";
		return -1;
	}
	aqui:
	return support;
}

// esta funcion verifica si un archivo ya se encuentra creado o no
// si no se encuntra creado lo crea
int verify_file_exists(char nombre[]){
	FILE *administrador;
	if(!(administrador = fopen(nombre,"r"))){
		administrador = fopen(nombre,"w");
		fclose(administrador);
		return 1;
	}
	fclose(administrador);
	return 0;
}

//------------------------------------ FIN FUNCIONES DE APOYO Y VERIFICACION---------------------------------------

//-------------------------------------APARTADO DE CONTRASEÑA---------------------------------

int cont_try_password = 0;
// esta funcion verifica si la contrasena ingresada es correcta; solo para administrador
// es el unico que ingresa contrasena
bool verify_password(char password[]){
	system("cls");
	block_password();
	char password_compare[20];
	for(int i = 0; i < 20; i++){
		password_compare[i] = 0;
	}
	cout<<"Digite la contrasena: ";
	show_password(password_compare);
	cont_try_password += 1;
	if(strcmp(password_compare,password) != 0){
		cout<<"La contrasena es incorrecta.\n";
		cout<<"Vuelve a intentarlo.\n";
		system("pause");
		verify_password(password);
	}
	cont_try_password = 0;
	return true;
}

// esta funcion bloquea por 30 segundo si se intento ingresar con una
// contraseña incorrecta 3 veces o mas

int block_password(){
	if(cont_try_password != 3){
		return 1;
	}
	for(int i = 30; i >= 0; i--){
		cout<<"Ya se ha intentado mas de tres veces ingresar.\n";
		cout<<"Sera bloqueado por"<<i<<"segundos.\n";
		Sleep(1000);
		system("cls");
	}
	cont_try_password = 0;
	return 0;
}

// esta funcion se encarga de mostrar la contrasena mientras
// se digita, en astericos
void show_password(char password[]){
    int i=0;
    do{
        password[i] = getch();
        if(password[i] != (char)8){
        	if(password[i] != 13){
        		cout << '*';
            	i++;
			}
        }
        else if(i>0){
            cout << (char)8 << (char)32 << (char)8;
            i--;
        }
    }while(password[i]!=13); 
    password[i] = char(0);
    cout << endl;
}

// esta funcion se encarga de cambiar la contrasena del administrador
void change_password(){
	int e;
	verify_for_admin();
	system("cls");
	FILE *file_admin;
	system("cls");
	file_admin = fopen("admin_user_password.txt","r+");
	cout<<"Digite la nueva contrasena: ";
	show_password(admin_enter.password);
	system("pause");
	system("cls");
	cout<<"\nConfirmar Cambio de contrasena?\n1.Si\t2.No\n";
	cin>>e;
	if(e==1){
		system("cls");
		fwrite(&admin_enter,sizeof(admin_enter),1,file_admin);
		cout<<"\nSu contrasena fue cambiada exitosamente!\n";
	}else{
		system("cls");
		cout<<"\nSu contrasena no fue modificada!\n";
	}
	fclose(file_admin);
}

//---------------------------------FIN APARTADO DE CONTRASEÑA--------------------------

// -------------------------------------------------APARTADO DE PRODUCTOSS-----------------------
// esta funcion se encarga de introduccir nuevos productos al inventario
int enter_product(){
	system("cls");
	int code_support;
	FILE* file_product;
	file_product = fopen("products.txt","a+");
	cout<<"\t\t|-------------------|\n";
	cout<<"\t\t| Ingresar Producto |\n";
	cout<<"\t\t|-------------------|\n";
	cout<<"Digite el codigo del producto: ";
	cin>>product_enter.code_product;
	code_support = product_enter.code_product;
	if(verify_product(product_enter.code_product)){
		cout<<"El codigo de producto ya existe.\n";
		fclose(file_product);
		return 0;
	}
	product_enter.code_product = code_support;
	fflush(stdin);
	cout<<"\nIngrese el nombre del producto: ";
	gets(product_enter.name_product);
	cout<<"\nIngrese el precio del producto: ";
	cin>>product_enter.cost_product;
	cout<<"\nIngrese la cantidad de producto: ";
	cin>>product_enter.product_quantity;
	fwrite(&product_enter,sizeof(product_enter),1,file_product);
	fclose(file_product);
	return 0;
}

// esta funcion se encarga de mostrar todos los productos que se encuentran 
// en el inventario
void show_product(){
	system("cls");
	FILE* file_product;
	file_product = fopen("products.txt","a+");
	cout<<"\t\t|-------------------|\n";
	cout<<"\t\t|  Mostrar Producto |\n";
	cout<<"\t\t|-------------------|\n\n";
	cout<<"Codigo\t"<<"Descripcion\t"<<"Cantidad\t"<<"Precio"<<endl;
	while(fread(&product_enter,sizeof(product_enter),1,file_product)){
		cout<<product_enter.code_product<<"\t";
		cout<<product_enter.name_product<<"\t\t";
		cout<<product_enter.product_quantity<<"\t\t";
		cout<<product_enter.cost_product<<endl;
	}
	fclose(file_product);
}

// esta funcion se encarga de eliminar un producto
void delete_product(){
	system("cls");
	int code;
	int e;
	FILE* file_product;
	FILE* file_product_aux;
	file_product = fopen("products.txt","r+");
	file_product_aux = fopen("products auxilary.txt", "w+");
	cout<<"\t\t|--------------------|\n";
	cout<<"\t\t|  Eliminar Producto |\n";
	cout<<"\t\t|--------------------|\n\n";
	cout<<"Digite el codigo del producto a eliminar: ";
	cin>>code;
	system("cls");
	cout<<"Desea eliminar este producto?\n\n1.Si\t2.No\n";
	cin>>e;
	if(e==1){
		while(fread(&product_enter,sizeof(product_enter),1,file_product)){
			if(product_enter.code_product != code){
			fwrite(&product_enter,sizeof(product_enter),1,file_product_aux);	
			}
		}
		fclose(file_product);
		fclose(file_product_aux);
		remove("products.txt");
		rename("products auxilary.txt","products.txt");
		system("cls");
		cout<<"\nEl producto fue eliminado correctamente!\n";
		system("pause");
	}else{
		system("cls");
		cout<<"\nEl producto no fue eliminado!\n";
		fclose(file_product);
		fclose(file_product_aux);
		system("pause");
	}
	system("cls");
}

// esta funcion se encarga de combiar el precio de un producto
void change_cost_product(){
	system("cls");
	int code;
	int aux=0,e=0;
	FILE* file_product;
	FILE* file_product_aux;
	cout<<"\t\t|--------------------------|\n";
	cout<<"\t\t|  Cambiar Precio Producto |\n";
	cout<<"\t\t|--------------------------|\n\n";
	cout<<"Digite el codigo del producto a cambiar precio: ";
	cin>>code;
	file_product = fopen("products.txt","r+");
	file_product_aux = fopen("products auxilary.txt", "w+");
	while(fread(&product_enter,sizeof(product_enter),1,file_product)){
		if(product_enter.code_product == code){
			cout<<"Producto: "<<product_enter.name_product<<endl;
			cout<<"Precio actual del producto: "<<product_enter.cost_product<<endl;
			cout<<"Digite el nuevo precio del producto: ";
			cin>>aux;
			cout<<"Desea confirmar el cambio?\n1.Si\t2.No\n";
			cin>>e;
			if(e==1){
				fflush(stdin);
				product_enter.cost_product = aux;
				system("cls");
				cout<<"El cambio se ha hecho correctamente!\nNuevo costo del producto: "<<product_enter.cost_product<<endl;
			}else{
				system("cls");
				cout<<"No se han hecho cambios!\n";
			}
		}
		fwrite(&product_enter,sizeof(product_enter),1,file_product_aux);
	}
	fclose(file_product);
	fclose(file_product_aux);
	remove("products.txt");
	rename("products auxilary.txt","products.txt");
}

// esta funcion se encarga de vender los productos
void sell_product(int code_client){
	char option[1];
	int support;
	do{
		system("cls");
		cout<<"\t|--------------------SECCION VENDER--------------------|\t\n";
		cout<<"\t|1.Mostrar Productos\t\t\t\t\t|\n";
		cout<<"\t|2.Vender Producto\t\t\t\t\t|\n";
		cout<<"\t|0.Salir\t\t\t\t\t\t|\n";
		cout<<"\t|_______________________________________________________|\t\n";
		cout<<"opcion: "; 
		fflush(stdin);
		gets(option);
		support = verify_enter_option(option, 2);
		
		switch(support){
			case 1:{
				show_product();
				break;
			}
			
			case 2:{
				system("cls");
				int code_product,quantity,cost_product;
				cout<<"Digite el codigo del producto: ";
				cin>>code_product;
				if(!verify_product(code_product)){
					cout<<"El producto no existe.\n";
					break;
				}

				cout<<"\nDigite la cantidad a vender: ";
				cin>>quantity;
				if(verify_quantity(quantity, code_product)==1){
					cost_product = subtraction_to_product(quantity,code_product);
					addition_to_total(code_client, (cost_product * quantity));
					product_sold_client.quantity = quantity;
					save_sale(code_client, code_product);
				}else{
					cout<<"\nLa cantidad del producto a vender no se encuentra disponible.\n";
					break;
				}
				break;
			}
		}
		
		system("pause");
		
	}while(support != 0);
}

// esta funcion le quita la cantidad vendida a un producto
int subtraction_to_product(int quantity, int code_product){
	int cost_product;
	FILE* file_product;
	FILE* file_aux;
	
	file_aux = fopen("file_aux.txt","w+");
	file_product = fopen("products.txt","r+");
	
	while(fread(&product_enter,sizeof(product_enter),1,file_product) == 1){
		if(product_enter.code_product == code_product){
			product_enter.product_quantity -=  quantity;
			cost_product = product_enter.cost_product;
		}
		fwrite(&product_enter,sizeof(product_enter),1,file_aux);
	}
	fclose(file_aux);
	fclose(file_product);
	remove("products.txt");
	rename("file_aux.txt","products.txt");
	return cost_product;
}

//esta funcion comprueba si el codigo de un producto no existe
char verify_product(int code){
	FILE* file_support;
	file_support = fopen("products.txt", "r+");
	while(fread(&product_enter,sizeof(product_enter), 1, file_support) == 1){
		if(product_enter.code_product == code){
			fclose(file_support);
			return true;
		}
	}
	fclose(file_support);
	return false;
}

//FUNCION PARA VERIFICAR CANTIDAD DE PRODUCTO
int verify_quantity(int quantity, int code_product){
	int producto_restado=0; //producto_restado es igual a 1 si el producto se puede vender correctamente.
	FILE* file_product;
	file_product = fopen("products.txt","r+");
	while(fread(&product_enter,sizeof(product_enter),1,file_product)==1){
		if(product_enter.code_product == code_product){	
			if(product_enter.product_quantity>=quantity){
				producto_restado=1;
			}
		}
	}
	fclose(file_product);
	return producto_restado;
}

//ESTA FUNCION SE ENCARGA DE MODIFICAR LA CANTIDAD DE UN PRODUCTO
void enter_quantity(){
	system("cls");
	int code;
	int aux=0,e=0;
	FILE* file_product;
	FILE* file_product_aux;
	cout<<"\t\t|----------------------------|\n";
	cout<<"\t\t|  Cambiar Cantidad Producto |\n";
	cout<<"\t\t|----------------------------|\n\n";
	cout<<"Digite el codigo del producto: ";
	cin>>code;
	file_product = fopen("products.txt","r+");
	file_product_aux = fopen("products auxilary.txt", "w+");
	
	if(verify_product(code)==1){
		while(fread(&product_enter,sizeof(product_enter),1,file_product)==1){
			if(product_enter.code_product == code){
				cout<<"El codigo ingresado corresponde al producto: "<<product_enter.name_product<<endl;
				cout<<"Cantidad actual del producto: "<<product_enter.product_quantity<<endl;
				cout<<"Digite la nueva cantidad del producto: ";
				fflush(stdin);
				cin>>aux;
				cout<<"\nDesea confirmar el cambio?\n1.Si\t2.No\n";
				cin>>e;
				if(e==1){
					fflush(stdin);
					product_enter.product_quantity = aux;
					system("cls");
					cout<<"El cambio se ha hecho correctamente!\nNueva cantidad del producto: "<<product_enter.product_quantity<<endl;
				}else{
					system("cls");
					cout<<"\nNo se han hecho cambios\n";
				}
			}
			fwrite(&product_enter,sizeof(product_enter),1,file_product_aux);
		}
	}else{
		cout<<"\nEl codigo ingresado no corresponde a ningun producto. Verifique el codigo ingresado.\n";
	}
	fclose(file_product);
	fclose(file_product_aux);
	remove("products.txt");
	rename("products auxilary.txt","products.txt");
}
//--------------------------------FIN APARTADO DE PRODUCTOS--------------------------

//------------------------------APARTADO DE ADMINISTRADOR

// esta funcion se encarga de verificar si el usuario es correcto
// sirve tanto para administrador como para vendedor
bool verify_user(string user){
	system("cls");
	string user_compare;
	fflush(stdin);
	cout<<"Digite el usuario: ";
	getline(cin, user_compare);
	if(user_compare != user){
		cout<<"El usuario es incorrecta.\n";
		cout<<"Vuelve a intentarlo.\n";
		system("pause");
		verify_user(user);
	}
	return true;
}

// esta funcion se encarga de pedir una contrasena y un usuario al
// administrador si este ingresa por primera vez a la aplicacion
void entry_first_data_admin(){
	system("cls");
	FILE* file_admin;
	file_admin = fopen("admin_user_password.txt","r+");
	cout<<"\t\t|----------------------------------------|\n";
	cout<<"\t\t| Crear nuevo usuario para administrador |\n";
	cout<<"\t\t|----------------------------------------|\n";
	cout<<"Digite el nombre de usuario: "; 
	fflush(stdin);
	gets(admin_enter.user);
	cout<<"Digite la contrasena: ";
	gets(admin_enter.password);
	fwrite(&admin_enter,sizeof(admin_enter),1,file_admin);
	fclose(file_admin);
}

// esta funcion abre el archivo donde se encuentra almacenado la contrasena
// y usuarion del administrador y llama las respectivas funciones para verificar
// contraseña y usuario
void verify_for_admin(){
	FILE *file_admin;
	system("cls");
	cout<<"\t\t|--------------------------------|\n";
	cout<<"\t\t| Verificar usuario y contrasena |\n";
	cout<<"\t\t|--------------------------------|\n";
	file_admin = fopen("admin_user_password.txt","r+");
	fread(&admin_enter,sizeof(admin_enter),1,file_admin);
	fclose(file_admin);
	verify_user(admin_enter.user);
	verify_password(admin_enter.password);
}

// esta funcion se encarga de cambiar el usuario del administrador
// este puede servir para cambiar usuarios de todos___________IMPORTANTE
void change_user_admin(){
	int e;
	verify_for_admin();
	system("cls");
	FILE *file_admin;
	system("cls");
	file_admin = fopen("admin_user_password.txt","r+");
	cout<<"Digite el nuevo usuario: ";
	fflush(stdin);
	gets(admin_enter.user);
	system("cls");
	cout<<"\nConfirmar cambio de usuario?\n1.Si\t2.No\n";
	cin>>e;
	if(e==1){
		system("cls");
		fwrite(&admin_enter,sizeof(admin_enter),1,file_admin);
		cout<<"\nSu usuario fue cambiado exitosamente!\n";
	}else{
		system("cls");
		cout<<"\nSu usuario no fue modificado!\n";
	}
	fclose(file_admin);
} 

int change_username(){
	char new_user[20];
	char code[2];
	char option[2];
	int option_1;
	int code_1;
	system("cls");
	cout<<"\t\t|--------------------------|\n";
	cout<<"\t\t|  Cambiar Nombre-Cliente  |\n";
	cout<<"\t\t|--------------------------|\n\n";
	cout<<"Digite el codigo del usuario a cambiar: ";
	fflush(stdin);
	gets(code);
	
	code_1 = verify_enter_option(code,0);
	if(code_1 == -1){
		return 0;
	}

	if(!verify_client(code_1)){
		cout<<"Este usuario no se encuentra registrado.\n";
		return 0;
	}
	
	
	aqui_1:
	system("cls");
	cout<<"\nDesea seguir con el proceso de cambio de nombre?.\n";
	cout<<"1.Si.\n";
	cout<<"2.No.\n";
	cout<<"Option: "; 
	fflush(stdin);
	gets(option);
	option_1 = verify_enter_option(option,2);
	if(option_1 == -1){
		goto aqui_1;
	}
	if(option_1 == 2){
		return 0;
	}
	cout<<"Digite el nuevo nombre: ";
	fflush(stdin);
	gets(new_user);
	cout<<"\nDesea Cambiar el nombre?\n1.Si\t2.No\n";
	fflush(stdin);
	gets(option);
	option_1 = verify_enter_option(option,2);
	if(option_1 == -1){
		goto aqui_1;
	}

	if(option_1 == 2){
		system("cls");
		cout<<"No se han hecho cambios!\n";
		return 0;
	}

	FILE* file_client = fopen("invoice.txt","r+");
	FILE* file_support = fopen("file_aux.txt","w+");

	while(fread(&client_enter,sizeof(client_enter),1,file_client)){
		if(client_enter.code_client == code_1){
				strcpy(client_enter.name_client,new_user);
		}
		fwrite(&client_enter,sizeof(client_enter),1,file_support);
	}
	cout<<"El nombre fue cambiado con exito.\n";	
	
	fclose(file_client);
	fclose(file_support);
	remove("invoice.txt");
	rename("file_aux.txt","invoice.txt");
	return 0;	
}

int change_address(){
	char new_address[20];
	char code[2];
	char option[2];
	int option_1;
	int code_1;
	int e=0;
	system("cls");
	cout<<"\t\t|-----------------------------|\n";
	cout<<"\t\t|  Cambiar Direccion-Cliente  |\n";
	cout<<"\t\t|-----------------------------|\n\n";
	cout<<"Digite el codigo del usuario a cambiar: ";
	fflush(stdin);
	gets(code);
	
	code_1 = verify_enter_option(code,0);
	if(code_1 == -1){
		return 0;
	}

	if(!verify_client(code_1)){
		cout<<"Este usuario no se encuentra registrado.\n";
		return 0;
	}
	
	
	aqui_1:
	system("cls");
	cout<<"\nDesea seguir con el proceso de cambio de direccion?.\n";
	cout<<"1.Si.\n";
	cout<<"2.No.\n";
	cout<<"Option: "; 
	fflush(stdin);
	gets(option);
	option_1 = verify_enter_option(option,2);
	if(option_1 == -1){
		goto aqui_1;
	}
	
	if(option_1 == 2){
		return 0;
	}

	cout<<"Digite la nueva direccion: ";
	fflush(stdin);
	gets(new_address);
	cout<<"\nDesea Cambiar la direccion?\n1.Si\t2.No\n";
	fflush(stdin);
	gets(option);
	option_1 = verify_enter_option(option,2);

	if(option_1 == 2){
		system("cls");
		cout<<"No se han hecho cambios!\n";
		return 0;
	}

	FILE* file_client = fopen("invoice.txt","r+");
	FILE* file_support = fopen("file_aux.txt","w+");
	while(fread(&client_enter,sizeof(client_enter),1,file_client)){
		if(client_enter.code_client == code_1){
				strcpy(client_enter.address_client,new_address);
		}
		fwrite(&client_enter,sizeof(client_enter),1,file_support);
	}
	cout<<"La direccion fue cambiada con exito.\n";	
	
	fclose(file_client);
	fclose(file_support);
	remove("invoice.txt");
	rename("file_aux.txt","invoice.txt");
	return 0;
}

//---------------------------------FIN APARTADO DE ADMINISTRADOR-----------------------

//--------------------------------------APARTADO DE CLIENTES-----------

// esta funcion se encarga de introducir un nuevo cliente
int enter_client_func(){
	system("cls");
	int code_support;
	FILE* file_invoice;
	file_invoice = fopen("invoice.txt","a+");
	cout<<"\t\t|----------------|\n";
	cout<<"\t\t| Nuevo Cliente  |\n";
	cout<<"\t\t|----------------|\n";
	cout<<"Digite la cedula: ";
	cin>>client_enter.code_client;
	code_support = client_enter.code_client;
	if(verify_client(client_enter.code_client)){
		cout<<"La cedula ya existe.\n";
		fclose(file_invoice);
		return 0;
	}
	client_enter.code_client = code_support;
	fflush(stdin);
	cout<<"Digite el nombre del cliente: ";
	gets(client_enter.name_client);
	cout<<"Digite la direccion del cliente: ";
	gets(client_enter.address_client);
	client_enter.total_owe_client = 0;
	fwrite(&client_enter,sizeof(client_enter),1,file_invoice);
	fclose(file_invoice);
	system("cls");
	cout<<"El nuevo cliente se ingreso correctamente.\n";
	system("pause");
	return 0;	
}

// esta funcion comprueba si el codigo de una factura no existe
char verify_client(int code){
	FILE* file_support;
	file_support = fopen("invoice.txt", "r");
	while(fread(&client_enter,sizeof(client_enter), 1, file_support)){
		if(client_enter.code_client == code){
			fclose(file_support);
			return true;
		}
	}
	fclose(file_support);
	return false;
}

//esta funcion hace el cambio de cedula de un cliente
int change_code_client(){
	char code[2]; // es lo que ingrese el ususario
	char option[2]; // guarda la opcion si quiere seguir o no
	int option_1; // apoyo de option
	int code_1; // guarda la cedula a cambiar
	int code_new; // guarda la nueva cedula
	system("cls");
	cout<<"\t\t|--------------------------|\n";
	cout<<"\t\t|  Cambiar Cedula-Cliente  |\n";
	cout<<"\t\t|--------------------------|\n\n";
	cout<<"Digite la cedula a cambiar: ";
	gets(code);
	code_1 = verify_enter_option(code,0);
	if(code_1 == -1){
		return 0;
	}

	if(!verify_client(code_1)){
		cout<<"La cedula no se encuentra registrada.\n";
		return 0;
	}
	aqui_1:
	system("cls");
	cout<<"\nDesea seguir con el proceso de cambio de cedula?.\n";
	cout<<"1.Si.\n";
	cout<<"2.No.\n";
	cout<<"Option: "; 
	gets(option);
	option_1 = verify_enter_option(option,0);

	if(option_1 == -1){
		goto aqui_1;
	}

	aqui:
	cout<<"\t\t|--------------------------|\n";
	cout<<"\t\t|  Cambiar Cedula-Cliente  |\n";
	cout<<"\t\t|--------------------------|\n\n";
	system("cls");
	fflush(stdin);
	cout<<"Digite la nueva cedula: ";
	gets(code);
	code_new = verify_enter_option(code,0);

	if(code_new == -1){
		goto aqui;
	}

	FILE* file_client = fopen("invoice.txt","r+");
	FILE* file_support = fopen("file_aux.txt","w+");
	while(fread(&client_enter,sizeof(client_enter),1,file_client)){
		if(client_enter.code_client == code_1){
			client_enter.code_client = code_new;
		}
		fwrite(&client_enter,sizeof(client_enter),1,file_support);
	}
	fclose(file_client);
	fclose(file_support);
	remove("invoice.txt");
	rename("file_aux.txt","invoice.txt");
	cout<<"La cedula fue cambiada con exito.\n";
	return 0;
}

//--------------------------------------FIN APARTADO DE CLIENTES--------------------------


//------------------------------------------ APARTADO DE FACTURAS--------------------
// esta funcion le suma al total de lo que debe un cliente
void addition_to_total(int code, int total){
	FILE* file_aux;
	FILE* file_invoice;
	
	file_aux = fopen("file_aux.txt","w+");
	file_invoice = fopen("invoice.txt","r+");
	
	while(fread(&client_enter,sizeof(client_enter),1,file_invoice)){
		if(client_enter.code_client == code){
			client_enter.total_owe_client += total;
		}
		fwrite(&client_enter,sizeof(client_enter),1,file_aux);
	}
	fclose(file_aux);
	fclose(file_invoice);
	remove("invoice.txt");
	rename("file_aux.txt","invoice.txt");
} 

// esta funcion guarda el producto vendido y su cantidad
void save_sale(int code_client, int code_product){
	
	FILE* file_sell;
	FILE* file_product;
	
	file_sell = fopen("products_sold.txt","a+");
	file_product = fopen("products.txt","r+");
	
	product_sold_client.code_client = code_client;
	
	while(fread(&product_enter,sizeof(product_enter),1,file_product)){
		if(product_enter.code_product == code_product){
			strcpy(product_sold_client.name_product,product_enter.name_product);
			product_sold_client.cost_product = product_enter.cost_product;
			fwrite(&product_sold_client,sizeof(product_sold_client),1,file_sell);
		}	
	}
	fclose(file_sell);
	fclose(file_product);
}

// esta funcion permite mostrar una factura
void show_invoice(int code_invoice){
	system("cls");
	cout<<"\t\t|-------------------|\n";
	cout<<"\t\t|  Mostrar Factura  |\n";
	cout<<"\t\t|-------------------|\n\n";
	FILE* file_invoice;
	FILE* file_sold;
	file_invoice = fopen("invoice.txt","r");
	while(fread(&client_enter,sizeof(client_enter),1,file_invoice)){
		if(client_enter.code_client == code_invoice){
			cout<<"CLIENTE: "<<client_enter.name_client<<"\t\t";
			cout<<"CEDULA: "<<client_enter.code_client<<"\n";	
			cout<<"DIRECCION: "<<client_enter.address_client<<"\t\t";
			cout<<"TOTAL A PAGAR: "<<client_enter.total_owe_client<<"\n";
		}
	}
	fclose(file_invoice);
	
	file_sold = fopen("products_sold.txt","r");
	cout<<"Cantidad\t"<<"Descripcion\t"<<"Precio\t"<<endl;
	while(fread(&product_sold_client,sizeof(product_sold_client),1,file_sold)){
		if(product_sold_client.code_client == code_invoice){
			cout<<product_sold_client.quantity<<"\t\t";
			cout<<product_sold_client.name_product<<"\t\t";
			cout<<product_sold_client.cost_product<<"\n";
		}
	}
	fclose(file_sold);
}

// esta funion se encarga de eliminar una factura
int delete_invoice(){
	system("cls");
	int code;
	char option[1];
	int support;
	FILE*file_invoice;
	FILE*file_sold;
	FILE* file_support;
	
	cout<<"\t\t|--------------------|\n";
	cout<<"\t\t|  Eliminar Factura  |\n";
	cout<<"\t\t|--------------------|\n\n";
	cout<<"Digite el codigo de la factura a eliminar: ";
	cin>>code;

	cout<<"Esta seguro de eliminar la factura: \n";
	cout<<"1.SI\n";
	cout<<"2.NO\n";
	cout<<"Opcion: ";
	fflush(stdin);
	gets(option);
	support = verify_enter_option(option, 2);

	if(support == 2){
		return 0;
	}
	
	if (verify_client(code)){
		file_invoice = fopen("invoice.txt","r+");
		file_support = fopen("file_aux.txt","w+");
		while(fread(&client_enter,sizeof(client_enter),1,file_invoice)==1){
			if(client_enter.code_client != code){
				fwrite(&client_enter,sizeof(client_enter),1,file_support);
			}
		}	
		fclose(file_invoice);
		fclose(file_support);
		remove("invoice.txt");
		rename("file_aux.txt","invoice.txt");
		
		file_support = fopen("file_aux.txt","w+");
		file_sold = fopen("products_sold.txt","r+");
		while(fread(&product_sold_client,sizeof(product_sold_client),1,file_sold)==1){
			if(product_sold_client.code_client != code){
				fwrite(&product_sold_client,sizeof(product_sold_client),1,file_support);
			}
		}
		fclose(file_sold);
		fclose(file_support);
		remove("products_sold.txt");
		rename("file_aux.txt","products_sold.txt");

		cout<<"\nLa factura ha sido eliminada correctamente.\n";
	}else{
		cout<<"La factura que desea eliminar no se ha encontrado.\n";		
	}
	return 0;
}

//FUNCION PARA PAGAR FACTURA
void subtract_to_total(int code){ 
	int pay;
	FILE* file_aux;
	FILE* file_invoice;
	
	file_aux = fopen("file_aux.txt","w+");
	file_invoice = fopen("invoice.txt","r+");
	
	while(fread(&client_enter,sizeof(client_enter),1,file_invoice)==1){
		fflush(stdin);
		if(client_enter.code_client == code){
			cout<<"\nEl monto total a pagar es de: "<<client_enter.total_owe_client<<endl;
			if(product_enter.name_product==0){
					cout<<"\nLa factura ya ha sido pagada en su totalidad, por lo tanto no se puede ingresar un monto para pagar.\n";
			}else{
					
				cout<<"\nDigite la cantidad que desea pagar: ";
				cin>>pay;
					
				if((pay>0)&&(pay<=client_enter.total_owe_client)){
					client_enter.total_owe_client -= pay;
				}else{
					cout<<"\nLa cantidad que desea pagar no es valida. Verifique la cantidad que desea pagar.\n";
				}
			}
		}
		fwrite(&client_enter,sizeof(client_enter),1,file_aux);
	}
	fclose(file_aux);
	fclose(file_invoice);
	system("cls");
	remove("invoice.txt");
	rename("file_aux.txt","invoice.txt");
} 

//esta funcion muestra las facturas sin pedir codigo o cedula
void show_invoice_without_code(){
	system("cls");
	cout<<"\t\t|-------------------|\n";
	cout<<"\t\t|  Mostrar Factura  |\n";
	cout<<"\t\t|-------------------|\n\n";
	FILE* file_invoice;
	file_invoice = fopen("invoice.txt","r");
	cout<<"CEDULA\t\tNOMBRE\t\tDIRECCION\tTOTAL A PAGAR\n";
	while(fread(&client_enter,sizeof(client_enter),1,file_invoice)){
		cout<<client_enter.code_client<<"\t\t";	
		cout<<client_enter.name_client<<"\t\t";
		cout<<client_enter.address_client<<"\t";
		cout<<client_enter.total_owe_client<<"\n";
	}
	fclose(file_invoice);
}

//---------------------------------------------FIN APARTADO DE FACTURAS---------------------
