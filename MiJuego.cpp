#include "MiJuego.h"
#include <iostream>
using namespace std;

MiJuego::MiJuego (string nombre, int movimientos):Juego (nombre,movimientos) {
}
void MiJuego::mostrarInformacion () {
	cout << endl;
	cout << "--------------------------------------------------";
	cout << endl;
	cout << "El Jugador:" <<  nombreJugador << "\t" ;
	cout << " El Puntaje: " << puntaje << "\t";
	cout << " Los Moviimientos: " <<  maxMovimientos;
	cout << endl;
	cout << "--------------------------------------------------";
	cout << endl;
}
