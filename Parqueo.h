#include <string>
#include "Carro.h"
using namespace std;

#ifndef PARQUEO
#define PARQUEO

class Parqueo{
	private:
		int pisos;
		int filas;
		int columnas;
		Carro**** arreglo3d;
		
	public:
		Parqueo();
		Parqueo(int,int,int);
		void setPisos(int);
		int getPisos();
		void setFilas(int);
		int getFilas();
		Carro**** getArreglo();
		void setColumnas(int);
		int getColumnas();
		Carro**** Crear();
		~Parqueo();
};
#endif
