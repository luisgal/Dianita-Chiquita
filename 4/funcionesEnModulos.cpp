#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

void formula1();
void formula2();
void formula3();
void calcularF1(float t, float w, float d);
void calcularF2(float x, float q);
void calcularF3(float x, float z);

int main(void){
	
	formula1();
	
	formula2();
	
	formula3();
	
	return 0;
}

void formula1(){
	float t,w,d;
	
	cout<<"Formula 1"<<endl;
	cout<<"a = [(t^2 - w^5) / 5d] - seno(40)"<<endl;
	cout<<"Ingresa el valor t: ";
	cin>>t;
	cout<<"Ingresa el valor w: ";
	cin>>w;
	cout<<"Ingresa el valor d: ";
	cin>>d;
	
	calcularF1(t,w,d);
}

void formula2(){
	float x,q;
	
	cout<<"Formula 2"<<endl;
	cout<<"b = [x + e^(cos(q^2)) + (x^2)*(x^3)] / sen(cos(q))"<<endl;
	cout<<"Ingresa el valor x: ";
	cin>>x;
	cout<<"Ingresa el valor q: ";
	cin>>q;
	
	calcularF2(x,q);
}

void formula3(){
	float x, z;
	
	cout<<"Formula 3"<<endl;
	cout<<"c = e^z - z*ln(x^2) + cos(70)"<<endl;
	cout<<"Ingresa el valor x: ";
	cin>>x;
	cout<<"Ingresa el valor z: ";
	cin>>z;
	
	calcularF3(x,z);
}

void calcularF1(float t, float w, float d){
	float a = ((pow(t,2) - pow(w,5)) / 5*d) - sin(40);	
	cout<<"a = "<<a<<endl;
}

void calcularF2(float x, float q){
	float b = (x + exp(cos(pow(q,2))) + pow(x,5)) / sin(cos(q));	
	cout<<"b = "<<b<<endl;
}
void calcularF3(float x, float z){
	float c = exp(z) - z*log(pow(x,2)) + cos(70);	
	cout<<"c = "<<c<<endl;
}
