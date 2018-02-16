#include <iostream>
#include <string>
#include "Carro.h"
#include "Parqueo.h"
#include "edificio.h"
using namespace std;

void parqueando(Parqueo*&,Edificio*,int);
void Desparquear(Edificio*,Parqueo*&);
void ContarLibres(Parqueo*&,Edificio*);

int main(){
	int personas,pisos,altmax;
	cout<<"Ingrese las personas por piso"<<endl;
	cin>>personas;
	while(personas>200||personas<50){
		cout<<"cantidad de personas no validas"<<endl;
		cin>>personas;
	}
	cout<<"Ingrese la altura maxima de los pisos"<<endl;
	cin>>altmax;
	cout<<"Ingrese la cantidad de pisos"<<endl;
	cin>>pisos;
	Edificio* edificio=new Edificio(pisos,personas);
	Parqueo* parqueo=new Parqueo(pisos,edificio->getN(),edificio->getM());
	char resp='s';
	while(resp=='s'){
	cout<<"Ingrese el lo que desea hacer:"<<endl;
	cout<<"1.-Parquear Carro"<<endl;
	cout<<"2.-Quitar Carro"<<endl;
	cout<<"3.-Contar puestos libres"<<endl;
	int op;
	cin>>op;
		switch(op){
			case 1:
				parqueando(parqueo,edificio,altmax);
				break;
			case 2:
				Desparquear(edificio,parqueo);
				break;
			case 3:
				ContarLibres(parqueo,edificio);
				break;
		}
		cout<<"Desea continuar[s/n]:"<<endl;
		cin>>resp;
	}
	return 0;
}
void parqueando(Parqueo*& parqueo,Edificio* edificio,int altmax){
	int piso,altura;
	string marca,color;
	cout<<"la altura del carro"<<endl;
	cin>>altura;
	cout<<"Ingrese la marca del carro"<<endl;
	cin>>marca;
	cout<<"Ingrese el color del carro"<<endl;
	cin>>color;
	if(altura>altmax){
		cout<<"Es muy alto el carro"<<endl;
	}else{
		Carro* carro=new Carro(altura,color,marca);
		cout<<"Ingrese el piso del parqueo"<<endl;
		cin>>piso;
		bool parquio=false;
		for(int i=0;i<edificio->getN();i++){
			for(int j=0;edificio->getM();j++){
				if(parqueo->getArreglo()[piso][i][j]==NULL){
					parqueo->getArreglo()[piso][i][j]=carro;
					parquio=true;
					break;
				}	
			}
			if(parquio==true){
				break;
			}
		}
	}
}
void Desparquear(Edificio* edificio,Parqueo*& parqueo){
	int piso,fila,columna;
	cout<<"Ingrese el piso"<<endl;
	cin>>piso;
	cout<<"Ingrese la fila"<<endl;
	cin>>fila;
	cout<<"Ingrese la columna"<<endl;
	cin>>columna;
	delete parqueo->getArreglo()[piso][fila][columna];
	parqueo->getArreglo()[piso][fila][columna];
}
void ContarLibres(Parqueo*& parqueo,Edificio* edificio){
	cout<<"Ingrese el piso que quiere ver"<<endl;
	int fila;
	cin>>fila;
	int libres=0;
	int ocupados=0;
	for(int i=0;i<edificio->getN();i++){
		for(int j=0;j<edificio->getM();j++){
			if(parqueo->getArreglo()[fila][i][j]==NULL){
				libres++;
			}else{
				ocupados++;
			}	
		}
	}
	cout<<"libres: "<<libres<<endl;
	cout<<"ocupados: "<<ocupados<<endl;
}
