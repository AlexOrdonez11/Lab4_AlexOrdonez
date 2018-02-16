#include <string>

using namespace std;

#ifndef EDIFICIO
#define EDIFICIO

class Edificio{
	private:
		int personas;
		int pisos;
	public:
		Edificio();
		Edificio(int,int);
		int getN();
       		int getM();
				
			
};
#endif
