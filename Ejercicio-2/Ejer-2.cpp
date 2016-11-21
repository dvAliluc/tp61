#include <iostream>
#include <time.h>
using namespace std;
void main(){
	int a, b = 0, c, d;
	srand(time(NULL));
	cout<<"ingrese el tamanio del arreglo: ";
	cin>>a;
	cin.get();
	int* vec = new int[a];
	int* vecAux = vec;
	for(int i = 0; i<a; i++){
		*vecAux = 100+rand()%(151-100);
		cout<<"\nvec["<<i<<"]= "<<*vecAux<<" - "<<vecAux;
		vecAux++;
	}
	vecAux = vec;
	for(int i = 0; i <a; i++){
		if(*vecAux > b)
			b = *vecAux;
		vecAux++;
	}
	vecAux = vec;
	for(int i = 0; i <a; i++){
		if(*vecAux == b)
			cout<<"\nel mayor elemento es: "<<b<<" y la direccion es: "<<vecAux;
		vecAux++;
	}
	cout<<"\ningrese un valor a ingresar en el arreglo: ";
	cin>>c;
	cout<<"\ningrese posicion desde 0 hasta "<<(a-1)<<" inclusive: ";
	cin>>d;
	cin.get();
	vecAux = vec;
	if(d < a && d > 0){ //deberia hacerse con un do while. Sirve para loop, usar if es terminante para el prog.
		for(int i=0; i<a; i++){
			if(i==d){
				*vecAux=c;
				break;
			}
			vecAux++;
		}
	
	vecAux = vec;
	for(int i = 0; i<a; i++){
		cout<<"\nvec["<<i<<"]= "<<*vecAux<<" - "<<vecAux;
		vecAux++;
	}
	}else
		cout<<"posicion invalida.";
	delete[] vec;
	cin.get();
}