/*arrego dinamico n numeros ordenar acendente */

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void ordenarDatos(int *, int);
void imprimirDatos(int *, int);
int *elemento, nElementos;

int main(){	
	
	pedirDatos();
	ordenarDatos(int *, int );
	imprimirDatos(int*, int);
	
	getch();
	return 0;
}

void pedirDatos(){
		cout << "digite el numero de elementos: ";
		cin >> nElementos;
		
		elemento = new int[nElementos]; 
		
		for(int i = 0; i <= nElementos-1;i++){
			cout<<"i :";
			cin>> *(elemento+i);
		}
}

void ordenarDatos(int *elemento, int longitud){
	
	int aux, pos, min;
	 for(int i = 0 ;i < longitud;i++){
	 	min = *(elemento+i);
	 	for(int j = i ;j < longitud; j++){
	 		if((min)>*(elemento+j)){
	 			pos = j;
	 			*(elemento+i) = min;}
	 			*(elemento+pos-1)=aux;
			 }
		 }
		 aux=*(elemento+i);
		 *(elemento-longitud) = min;
		 *(elemento+i)=auc;
	 }
	
}
void imprimirDatos(int *vector, int longitud){
	cout <<"\n arreglo ordenado: ";
	for(int i = 0; i < longitud ; i++ ){
		cout << *(vector +i);
	}
}

