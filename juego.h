#ifndef __JUEGO_H__
#define __JUEGO_H__
#include "Tablero.h"


class Juego{
	public:
		Juego();
		void asignarTurnos(jugador *j1, Jugador *j2);
		void verificarTriqui(Tablero tbl);
		void mostrarGanador( Jugador j1);
};

#endif
