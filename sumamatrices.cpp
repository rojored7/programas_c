#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void sumar(int **, int **, int,int);
void mostrar(int **, int, int);

int **PmatrizA, **PmatrizB, fila, col;

int main(){
	pedirdatos();
	sumar(PmatrizA,PmatrizB,fila,col);
	mostrar(PmatrizA,fila,col);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout << "digite el numero de filas: ";
	cin >> fila;
	cout << "Digite el numero de columnas: ";
	cin >> col;
	
	PmatrizA = new int *[fila];
	for (int i = 0; i < fila; i++){
		PmatrizA[i] = new int [col];
	}
	
	PmatrizB = new int *[fila];
	for (int i = 0; i < fila; i++){
		PmatrizB[i] = new int [col];
	}
	
	cout << "llenar la matriz A: "<<endl;
	for (int i = 0; i < fila; i++){
			for (int j = 0; j < col; j++){
				cout << i << "  " << j << "  ";
				cin >> *(*(PmatrizA+j)+i);
			}
	}
	
	cout << "llenar la matriz B: "<<endl;
	for (int i = 0; i < fila; i++){
			for (int j = 0; j < col; j++){
				cout << i << "  " << j << "  ";
				cin >> *(*(PmatrizB+j)+i);
			}
	}
	
}
void sumar(int **matrizA, int **matrizB, int fila,int col){
		for (int i = 0; i < fila; i++){
			for (int j = 0; j < col; j++){
				 *(*(PmatrizA+j)+i)= *(*(PmatrizA+j)+i)+ *(*(PmatrizB+j)+i);
			}
	}
	
	
}
void mostrar(int **matrizA, int fila, int col){
	cout << "mostrar la suma A + B: "<<endl;
		for (int i = 0; i < fila; i++){
			for (int j = 0; j < col; j++){
				 cout << *(*(PmatrizA+j)+i) << "   ";
			}
			
			cout << endl;
	}	
}
