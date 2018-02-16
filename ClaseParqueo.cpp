#include <string>
#include<iostream>
#include "Parqueo.h"

Parqueo::Parqueo(){
	
}
Parqueo::Parqueo(int pisos , int filas,int columnas){
	this->pisos=pisos;
	this->filas=filas;
	this->columnas=columnas;
	this->arreglo3d=Crear();
}
void Parqueo::setPisos(int pisos){
	this->pisos=pisos;
}
int Parqueo::getPisos(){
	return pisos;
}
void Parqueo::setFilas(int filas){
	this->filas=filas;
}
int Parqueo::getFilas(){
	return filas;
}
void Parqueo::setColumnas(int columnas){
	this->columnas=columnas;
}
int Parqueo::getColumnas(){
	return columnas;
}
Parqueo::~Parqueo(){
	for(int i;i<pisos;i++){
		for(int j=0;j<filas;j++){
			for(int k=0;k<columnas;k++){
				arreglo3d[i][j][k]=NULL;
				delete arreglo3d[i][j][k];
			}
			delete[]arreglo3d[i][j];
		}
		delete[]arreglo3d[i];
	}
	delete[]arreglo3d;
}
Carro**** Parqueo::getArreglo(){
	return arreglo3d;
}
Carro**** Parqueo::Crear(){
	Carro**** arreglo3d=new Carro***[pisos];
	for(int i=0;i<pisos;i++){
		arreglo3d[i]=new Carro**[filas];
		for(int j=0;j<filas;j++){
			arreglo3d[i][j]=new Carro*[columnas];
			for(int k;k<columnas;k++){
				arreglo3d[i][j][k]=NULL;
			}
		}
	}
	return arreglo3d;
}
