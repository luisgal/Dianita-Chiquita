#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(void){
	float Vo, R1, R2;
	float I_adj = 0.0001;
	
	cout<<"Calcular el valor de R2 para un regulador de voltaje"<<endl;
	cout<<"Vo = 1.25(1 + R2/R1) + R2*I_adj"<<endl;
	cout<<"I_adj = 100 uA"<<endl;
	cout<<"Ingresa el valor Vo: ";
	cin>>Vo;
	cout<<"Ingresa el valor R1: ";
	cin>>R1;
	
	R2 = (Vo - 1.25) / (1.25/R1 + I_adj);
	
	cout<<"R2 = "<<R2<<endl<<endl;
	
	return 0;
}
