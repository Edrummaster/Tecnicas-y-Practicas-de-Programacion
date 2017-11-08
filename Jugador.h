#ifndef __JUGADOR_H__
#define __JUGADOR_H__
#include <string.h>
#include "Ficha.h"
#include "Tablero.h"


class Jugador{
	public:
		string nombre;
		char simbolo;
	public:
		Jugador();
		Jugador(string nom, char sim);
		char getSimbolo();
		Ficha* nextJugada(Tablero tbl);
		void dibujarse();
		bool verifyTricky(Tablero tbl, int f,int c,int d);
};

#endif
