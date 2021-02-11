#include <iostream>
using namespace std;

int main(void){
	//5 pisos y 7 dias (Lunes a domingo)
	int pacients[5][7];
	
	//Paso uno, capturar pacientes piso y día
	for (int i = 0; i <5; ++i){
		for (int j = 0; j < 7; ++j){
			cout<<"Ingresa los pacientes recibidos el dia "<<j+1<<" en el piso "<<i+1<<": ";
			cin>>pacients[i][j];
		}
	}
	
	int total = 0;
	//Paso dos, total de pacientes
	for (int i = 0; i <5; ++i){
		for (int j = 0; j < 7; ++j){
			//total = total + pacients[i][j];
			total += pacients[i][j];
		}
	}
	
	int piso_pacientes = 0;
	float promedio = 0;
	//Paso tres, promedio por piso
	for (int i = 0; i <5; ++i){
		for (int j = 0; j < 7; ++j){
			piso_pacientes += pacients[i][j];
		}
		promedio = piso_pacientes/total;
		cout<<"Promedio del piso "<<i+1<<" "<<promedio<<endl;
		piso_pacientes = 0;
		promedio = 0;
	}
	
	//Paso cuatro, que pisos exceden los 100 pacientes
	for (int i = 0; i <5; ++i){
		for (int j = 0; j < 7; ++j){
			piso_pacientes += pacients[i][j];
		}
		if(piso_pacientes > 100){
			cout<<"El piso "<<i+1<<" supera los 100 pacientes";
		}
		piso_pacientes=0;
	}
	
	return 0;
}
