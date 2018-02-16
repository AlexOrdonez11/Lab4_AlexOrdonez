#include <string>
#include "Carro.h"

using namespace std;

Carro::Carro(){

}
Carro::Carro(int altura,string color,string marca){
	this->altura=altura;
	this->color=color;
	this->marca=marca;
}
string Carro::getColor(){
	return color;
}
void Carro::setColor(string color){
	this->color=color;
}
void Carro::setMarca(string marca){
	this->marca=marca;
}
string Carro::getMarca(){
	return marca;
}
int Carro::getAltura(){
	return altura;
}
void Carro::setAltura(int altura){
	this->altura=altura;
}
