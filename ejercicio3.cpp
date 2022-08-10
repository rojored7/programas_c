#include <iostream>
#include<conio.h>


using namespace std;

int main(){
	int nElementos[100],tamano, *dir_num, menor;
	
	cout <<"digite elementos :";
	cin >> tamano;
	
	for (int i = 1;i<tamano ; i++){
		cout << i << " :";
		cin >>nElementos[i];
	}                                
	
	dir_num = nElementos;
	menor = *dir_num;
	
	for( int i =  1; i< tamano; i++){
		dir_num++;
		if(*dir_num < menor ){
			menor = *dir_num;
		}
	}
	
	cout<<"el menor es "<<menor<<endl;	
	getch();
	return 0;
}
