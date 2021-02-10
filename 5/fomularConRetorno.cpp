#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

void formula1();
void formula2();
float calcularF1(float f, float w, float d);
float calcularF2(float x, float q);

int main(void){
	
	formula1();
	
	formula2();
	
	return 0;
}

void formula1(){
	float n,f,w,d;
	
	cout<<"Formula 1"<<endl;
	cout<<"n = [(f^2 - w^5) / 5d] - seno(15)"<<endl;
	cout<<"Ingresa el valor f: ";
	cin>>f;
	cout<<"Ingresa el valor w: ";
	cin>>w;
	cout<<"Ingresa el valor d: ";
	cin>>d;
	
	n = calcularF1(f,w,d);
	
	cout<<"n = "<<n<<endl;
}

void formula2(){
	float h,x,z;
	
	cout<<"Formula 2"<<endl;
	cout<<"h = e^z - z*ln(x^2) + cos(80)"<<endl;
	cout<<"Ingresa el valor x: ";
	cin>>x;
	cout<<"Ingresa el valor z: ";
	cin>>z;
	
	h = calcularF2(x,z);
	
	cout<<"h = "<<h<<endl;
}

float calcularF1(float f, float w, float d){
	float n = ((pow(f,2) - pow(w,5)) / 5*d) - sin(15);	
	return n;
}

float calcularF2(float x, float z){
	float h = exp(z) - z*log(pow(x,2)) + cos(80);	
	return h;
}
