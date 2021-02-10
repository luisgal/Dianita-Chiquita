#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(void){
	int a, r, n, x, b;
	
	cout<<"Expresion matematica 1"<<endl;
	cout<<"suma = a(r^n - 1) / r - 1"<<endl;
	cout<<"Ingresa el valor a: ";
	cin>>a;
	cout<<"Ingresa el valor r: ";
	cin>>r;
	cout<<"Ingresa el valor n: ";
	cin>>n;
	
	int suma = (a*(pow(r, n) - 1)) / (r - 1);
	
	cout<<"suma = "<<suma<<endl<<endl;
	
	
	
	cout<<"Expresion matematica 2"<<endl;
	cout<<"R = raiz(seno(2x) - cos(2x))"<<endl;
	cout<<"Ingresa el valor x: ";
	cin>>x;
	
	float R = sqrt(sin(2*x) - cos(2*x));
	
	cout<<"R = "<<R<<endl<<endl;
	
	
	
	cout<<"Expresion matematica 3"<<endl;
	cout<<"m = e^(x - log(a+b)) / a - b"<<endl;
	cout<<"Ingresa el valor x: ";
	cin>>x;
	cout<<"Ingresa el valor a: ";
	cin>>a;
	cout<<"Ingresa el valor b: ";
	cin>>b;
	
	float m = exp(x - log(a+b)) / (a - b);
	
	cout<<"m = "<<m<<endl<<endl;
	
	return 0;
}
