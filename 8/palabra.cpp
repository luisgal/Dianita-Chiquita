#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
	int opcion;
	int vocales = 0;
	char palabra[10];
	
	do{
		cout<<"1 - Escribir una palabra"<<endl;
		cout<<"2 - Leer la palabra"<<endl;
		cout<<"3 - Contar vocales de la palabra"<<endl;
		cout<<"0- Salir"<<endl;
		
		cout<<"Elige la opcion que desees: ";
		cin>>opcion;
		
		switch(opcion){
			case 0: 
				cout<<"Adios"<<endl;
				break;
			case 1: 
				cout<<"Escribe la palabra que desees: ";
				cin>>palabra;
				break;
				
			case 2: 
				cout<<"La palabra es: "<<palabra<<endl;
				break;
				
			case 3:
				for(int x = 0; x<10; x++){
					if(palabra[x] == 'a'){
						vocales++;
					}
					else if(palabra[x] == 'e'){
						vocales++;
					}
					else if(palabra[x] == 'i'){
						vocales++;
					}
					else if(palabra[x] == 'o'){
						vocales++;
					}
					else if(palabra[x] == 'u'){
						vocales++;
					}
				}
				cout<<"Tiene "<<vocales<<" vocales"<<endl;
				break;
			
			default:
				break;
		}
		
	}while(opcion != 0);
	
	return 0;
}
