#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int N;
	cout<<"Cuantos numeros aleatorios se obtendran? ";
	cin>>N;
	
	int v[N];
	
	//Generar aleatorios multiplos de 3, impares, menores a 1000
	int aleatorio = 0;
	for(int x=0; x<N; x++){
		aleatorio = rand() % 1000;
		if(aleatorio%3==0 && aleatorio%2!=0){
			v[x] = aleatorio;
		}else{
			x--;
		}
	}
	
	//Imprimir los numeros
	cout<<"Numeros generados"<<endl;
	for(int x=0; x<N; x++){
		cout<<v[x]<<" - ";
	}
	cout<<endl;
	
	
	
	int j,i, aux;
	// Ordenación
	for(i=0; i<N-1; i++){
		// Comparaciones
		for(j=0; j<N-1-i; j++){
		// Intercambiar los elementos
		if(v[j] > v[j+1]){
			aux=v[j];
			v[j]=v[j+1];
			v[j+1]=aux;
			}
		}
	}
	
	
	
	//Imprimir los numeros ya ordenados
	cout<<"Numeros ordenados"<<endl;
	for(int x=0; x<N; x++){
		cout<<v[x]<<" - ";
	}
	cout<<endl;
	
	return 0;
}
