#ifndef __PERSONA_H__
#define __PERSONA_H__
#include "Jugador.h"
#include "Tablero.h"

class Persona : public Jugador{
	public:
		Persona(string nombre, char simbolo);
		char nextJugada(Tablero tbl);
};

#endif
