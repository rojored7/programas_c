#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirNombre();
int contarvocales(char *);

char nombre[50];

int main(){
	
	int x;
	pedirNombre();
	x=contarvocales(nombre);
	
	
	cout << "el numero de vocales son: " << x << endl; 
	
	getch();
	return 0;
}

void pedirNombre(){
	cout<<"ingresa tu nombre: ";
	cin.getline(nombre,50,'\n');
	
	strupr(nombre);//palabras en mayusculas
	//strlwr() para minusculas
	
}

int contarvocales(char *palabra){
	int c = 0;
	
	while(*palabra){
		switch(*palabra){
			case 'A':
				
			case 'E':
				
			case 'I':
				
			case 'O':
				
			case 'U':
				c++;					
		}
		palabra++;	
	}
	
	return c;
	
}

