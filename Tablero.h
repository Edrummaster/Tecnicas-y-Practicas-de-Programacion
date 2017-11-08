#ifndef __TABLERO_H_
#define __TABLERO_H_
#include "Ficha.h"
#include <iostream>
using namespace std;

class Tablero{
	private:
		Ficha matriz[3][3];
	public:
		Tablero();
		Tablero(string etiquetas);
		void dibujarse();
		Ficha *obtenerFicha(char etiqueta);
		bool verificarTickyFilas(int &fila);
		bool verificarTickyColumnas(int &col);
		bool verificarTickyDiagonal(int &diag);
		void asignarSimbolo(char &etiqueta1, char &simbolo1);
};

#endif
