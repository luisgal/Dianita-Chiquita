#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

double fuerza(float q1, float q2, float d);

int main(void){
	
	float q1,q2,d;
	double F;
	
	cout<<"Ley de Coulomb"<<endl;
	cout<<"F = k*(q1 * q2) / d^2"<<endl;
	cout<<"Ingresa el valor q1: ";
	cin>>q1;
	cout<<"Ingresa el valor q2: ";
	cin>>q2;
	cout<<"Ingresa el valor d: ";
	cin>>d;
	
	F = fuerza(q1,q2,d);
	
	cout<<"F = "<<F<<endl;
	
	return 0;
}

double fuerza(float q1, float q2, float d){
	double F = 9*pow(10,9) * (q1 * q2) / pow(d,2);
	return F;
}
