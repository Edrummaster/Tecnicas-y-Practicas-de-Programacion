#include "Juego.h"
#include <string.h>

#include <iostream>
using namespace std;

Juego::Juego (string nuevoNombre, int nuevoMaximo) {
	puntaje = 0;
	nombreJugador = nuevoNombre;
	maxMovimientos = nuevoMaximo;
}

void Juego::aumentarPuntaje (int nuevoPuntaje) {
	puntaje += nuevoPuntaje;
}

int Juego::reducirMovimientos () {
	maxMovimientos--;
}

void Juego::mostrarInformacion () {
	cout << endl;
	cout << "--------------------------------------------------";
	cout << endl;
	cout << "Jugador:" <<  nombreJugador << "\t" ;
	cout << " Puntaje: " << puntaje << "\t";
	cout << " Moviimientos: " <<  maxMovimientos;
	cout << endl;
	cout << "--------------------------------------------------";
	cout << endl;
}

bool Juego::verificarFinal () {
	if (maxMovimientos <= 0 )
		return true;
	return false;
}
