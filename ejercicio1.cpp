#include <iostream>
#include <conio.h>//libreria control entradas y salidas 

using namespace std;


int main(){
	int numero;//definir variable 
	int *dir_num;//definir apuntador
	
	cout <<"digite el numero: ";
	cin >> numero;
	
	
	dir_num = &numero; //como obtener la direccion
	
	if(*dir_num%2==0){
		cout << "el numero "<< *dir_num <<" es par" <<endl;
		cout << "posisicon_ "<< dir_num;
	}
	else{
		cout << "el numero "<< *dir_num <<" es impar" <<endl;
		cout << "posisicon_ "<< dir_num;
	}
	getch();//esperar accion de teclado
	return 0;
}
