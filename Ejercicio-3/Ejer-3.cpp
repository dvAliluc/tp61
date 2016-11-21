#include <iostream>
#include <time.h>
using namespace std;

int* buscar(int* array, int tamanio, int num){
	int* pos = new int;
	for(int i = 0; i < tamanio; i++){
		cout<<"\nvec["<<i<<"]= "<<*array<<" pos: "<<array;
		if(*array == num)
			pos = array;
		else
			pos = NULL;
		array++;
	}
	cout<<"\n"<<num<<" esta en la posicion "<<pos<<endl;
	return array;
}

void main(){
	srand(time(NULL));
	int a, b;
	cout<<"ingrese la cantidad de numeros que tiene el arreglo: ";
	cin>>a;
	cin.get();
	int* vec= new int[a];
	int* vecAux=vec;
	for(int i = 0; i<a; i++){
		*vecAux = rand()%(101);
		cout<<"\nvec["<<i<<"]= "<<*vecAux<<" pos: "<<vecAux;
		vecAux++;
	}
	vecAux = vec;
	cout<<"\ningrese un numero a buscar: ";
	cin>>b;
	cin.get();
	buscar(vecAux, a, b);
	cin.get();
}