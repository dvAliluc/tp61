#include <iostream>
#include<string.h> //para char
using namespace std;
void main1(){
	int* pa; //declaracion de puntero de int
	pa = new int; //pido memoria dinamica para inicializarlo. saco esto y crash!
	*pa = 10; //un entero
	cout<<"el puntero es:"<<pa<<" y el entero es:"<<*pa<<endl;
	delete pa; //liberar la memoria solicitada, obligatorio para evitar memory leak
	cin.get();
}
void main2(){
	int i;
	int* pa=& i; //un puntero de entero, lo inicializo con la direccion de otra var entera
	*pa = 10; //entero, equivale a i = 10;
	cout<<"el puntero es:"<<pa<<" y el entero es:"<<*pa<<endl;
	cout<<"la direccion de i es:"<<&i<<" e i es:"<<i;
	//delete pa; //NO! no se puede liberar algo que no pediste.
	cin.get();
}
void main3(){
	int* pX = new int;
	int* pY = new int;
	*pX = 10;
	*pY = 20;
	pY = pX; //error pierdo el puntero, no recupero la memoria
	delete pX;
	//delete pY; //error!
	cin.get();
}
// swap version c con punteros
void swap (int* x, int* y){
int aux = *x;
	*x = *y;
	*y = aux;
}
void swap2(int &x, int &y){//sin el & se trabaja por copias.
int aux = x;
	x = y;
	y = aux;
}
void main4(){
int x = 10;
int y = 20;    
	cout<<"x:"<< x << " y:"<<y<<endl;
	swap(&x, &y);// le envio la direcciones de memoria de x e y
	cout<<"x:"<< x << " y:"<<y<<endl;
	cin.get();
}
void main(){
	int* pNum = new int[10];
	int* pCursor = pNum;
	for(int i = 0; i<10;i++){
		*pCursor = 0;
		pCursor++;
	}
	pCursor = pNum;
	//for(int i =0; i<10; i++){
	while((pCursor-pNum)!=9){ //resta entre punteros
		cout<<*pCursor<<",";
		pCursor++;
	}
	delete[] pNum;
	cin.get();
}