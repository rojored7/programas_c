#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void mul(int **,int **, int,int,int,int);


int **PmatrizA, **PmatrizB, **PmatrizC, filaA, colA, filaB, colB;

int main(){
	pedirdatos();
	mul(PmatrizA,PmatrizB,filaA,colA,filaB,colB);

	
	getch();
	return 0;
}


void pedirdatos(){
	cout << "digite el numero de fila A: ";
	cin >> filaA;
	cout << "Digite el numero de columnas A: ";
	cin >> colA;
	
	cout << "digite el numero de filas B: ";
	cin >> filaB;
	cout << "Digite el numero de columnas B: ";
	cin >> colB;
	
	if (filaB != colA){
		cout << "error en dimensiones";
		exit(0);
		
	}
	else{

	PmatrizA = new int *[filaA];
	for (int i = 0; i < filaA; i++){
		PmatrizA[i] = new int [colA];
	}
	
	PmatrizB = new int *[filaB];
	for (int i = 0; i < filaB; i++){
		PmatrizB[i] = new int [colB];
	}
	
	PmatrizC = new int *[filaA];
	for (int i = 0; i < filaA; i++){
		PmatrizB[i] = new int [colB];
	}
	
	cout << "llenar la matriz A: "<<endl;
	for (int i = 0; i < filaA; i++){
			for (int j = 0; j < colA; j++){
				cout << i+1 << "  " << j+1 << "  ";
				cin >> *(*(PmatrizA+j)+i);
			}
	}
	
	cout << "llenar la matriz B: "<<endl;
	for (int i = 0; i < filaB; i++){
			for (int j = 0; j < colB; j++){
				cout << i+1 << "  " << j+1 << "  ";
				cin >> *(*(PmatrizB+j)+i);
			}
		}
	}
	
}
void mul(int **matrizA, int **matrizB, int filaA,int colA, int filaB,int colB){
		
		int aux=0;
		cout << "mostrar la multiplicacion es: "<<endl;	
		for (int i = 0; i < filaA; i++){
			for (int j = 0; j < colB; j++){
				aux=0;
				for(int a = 0; a< colB; a++){
					 aux= aux+(*(*(PmatrizA+j)+a)* *(*(PmatrizB+a)+i));
					 //cout<<"aux "<<aux<<endl;					 
				}
				*(*(PmatrizC+j)+i) = aux;
				aux=0;
				
				cout<<*(*(PmatrizC+j)+i)<<"  ";
			}
			cout << endl;
		}
}


