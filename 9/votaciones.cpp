#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
	
	float votos = 0;
	float aspirante[] = {0,0,0,0,0};
	int x;
	
	int otro;
	do{
		votos++; //Un nuevo voto
		
		cout<<"Elije la opcion de a que aspirante deseas votar del 1 al 5: ";
		cin>>x;
		aspirante[x-1]++; //Recordar que los arreglos inician en 0
		cout<<aspirante[x-1]<<endl;
		
		cout<<"Deseas realizar otro voto?"<<endl;
		cout<<"1 - Si"<<endl<<"2 - No"<<endl;
		cin>>otro;
	}while(otro == 1);
	
	float porcentaje;
	cout<<"\nPorccentaje de votos por aspirante"<<endl;
	for(int i = 1; i<=5;i++){
		porcentaje = (aspirante[i-1]/votos)*100;
		cout<<"Apirante "<<i<<" -> Porcentaje "<<porcentaje<<"%"<<endl;
	}
	
	return 0;
}
