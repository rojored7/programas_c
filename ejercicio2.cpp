#include <iostream>
#include<conio.h>


using namespace std;

int main(){
	int numero, cont=0;
	int *dir_num;

	cout <<"digite el numero: ";
	cin >> numero;
	
	dir_num = &numero; //como obtener la direccion	
	
	for(int i=1;i <= *dir_num; i++){
		if(*dir_num%i==0){
			cont++;
		}
	}
	if(cont > 2){
		cout<<"el numero "<<*dir_num<<"no es primo" <<endl;
	}
	else{
		cout<<"el numero  "<<*dir_num<<"es primo" <<endl;
		cout<<"la direccion  "<<dir_num <<endl;
	}
	getch();
	return 0;
}
