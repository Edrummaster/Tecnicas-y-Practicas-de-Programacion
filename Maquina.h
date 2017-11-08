#ifndef __MAQUINA_H__
#define __MAQUINA_H__
#include "Jugador.h"
#include "Tablero.h"


class Maquina : public Jugador{
	public:
		char nextJugada(Tablero tbl);
};

#endif
