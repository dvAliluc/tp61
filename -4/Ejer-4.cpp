#include <iostream>
#include <string>
using namespace std; 
void plural(char* pal){
	while(*pal!='\0'){
		pal++;
	}
	pal--;
	if(*pal == 'a' || *pal == 'e' ||*pal == 'i' ||
	   *pal == 'o' || *pal == 'u'){
		pal++;
		*pal = 's';
		pal++;
		*pal = '\0';
	}else{
		pal++;
		*pal = 'e';
		pal++;
		*pal = 's';
		pal++;
		*pal = '\0';
	}
}
void main(){
	char* p=new char[31];
	cout<<"ingrese una palabra:";
	cin.getline(p,30);
	plural(p);
	cout<<p<<endl;
	delete[] p;
	cin.get();
}