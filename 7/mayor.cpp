#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
	int a,b,c,mayor;
	
	cout<<"Calcular el mayor de 3 numeros"<<endl;
	
	cout<<"Ingresa el valor a: ";
	cin>>a;
	cout<<"Ingresa el valor b: ";
	cin>>b;
	cout<<"Ingresa el valor c: ";
	cin>>c;
	
	if(a>b && a>c){
		mayor = a;
	} 
	else if(b>a && b>c){
		mayor = b;
	} 
	else{
		mayor = c;
	}
	
	cout<<"EL mayor de los tres numeros es: "<<mayor<<endl;
	
	return 0;
}
