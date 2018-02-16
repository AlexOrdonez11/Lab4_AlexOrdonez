#include<string>
#include"edificio.h"

using namespace std;

Edificio::Edificio(){

}
Edificio::Edificio(int pisos,int personas){
	this->pisos=pisos;
	this->personas=personas;
}
int Edificio::getN(){
	return personas/10;
}
int Edificio::getM(){
	if(getN()>=12){
		return getN()*0.4;
	}else{
		return getN()*0.7;
	}
}
