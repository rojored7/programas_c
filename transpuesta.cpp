#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void invertir(int **, int,int);
void mostrar(int **, int, int);

int **PmatrizA, **PmatrizB, fila, col;

int main(){
	pedirdatos();
	invertir(PmatrizA,fila,col);
	mostrar(PmatrizA,fila,col);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout << "digite el numero de filas de A: ";
	cin >> fila;
	cout << "Digite el numero de columnas de A: ";
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
				cout << i+1 << "  " << j+1 << "  ";
				cin >> *(*(PmatrizA+j)+i);
			}
			cout << endl;
	}
	
}

void invertir(int **matrizA, int fila,int col){
		for (int i = 0; i < fila; i++){
			for (int j = 0; j < col; j++){
				 *(*(PmatrizB+j)+i)= *(*(PmatrizA+i)+j);
			}
	}	
}

void mostrar(int **matrizB, int fila, int col){
	cout << "mostrar trans: "<<endl;
		for (int i = 0; i < fila; i++){
			for (int j = 0; j < col; j++){
				 cout << *(*(PmatrizB+j)+i) << "   ";
			}
			
			cout << endl;
	}	
}
