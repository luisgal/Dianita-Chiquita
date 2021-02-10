#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

void calcularGanancia(float Vo, float Vi);
void calcularR2(float Vo, float Vi, float R1);

int main(void){
	float Vo, Vi, R1;
	
	cout<<"Calcular el valor de R2 y G de un amplificador"<<endl;
	cout<<"Vo = G*Vi"<<endl;
	cout<<"G = (1 + R2/R1)"<<endl;
	cout<<"Ingresa el valor Vo: ";
	cin>>Vo;
	cout<<"Ingresa el valor Vi: ";
	cin>>Vi;
	cout<<"Ingresa el valor R1: ";
	cin>>R1;
	
	calcularGanancia(Vo,Vi);
	calcularR2(Vo,Vi,R1);
	
	return 0;
}

void calcularGanancia(float Vo, float Vi){
	float G = Vo/Vi;
	cout<<"G = "<<G<<endl<<endl;
}

void calcularR2(float Vo, float Vi, float R1){
	float R2 = R1*(Vo/Vi - 1);
	cout<<"R2 = "<<R2<<endl<<endl;
}

