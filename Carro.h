#include<string>

using namespace std;

#ifndef CARRO
#define CARRO

class Carro{
	private:
		int altura;
		string color;
		string marca;
	public:
		Carro();
		Carro(int,string,string);
		void setAltura(int);
		int getAltura();
		void setColor(string);
		string getColor();
		void setMarca(string);
		string getMarca();
};

#endif
