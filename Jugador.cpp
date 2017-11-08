#include "Jugador.h"
#include "Ficha.h"
#include "Tablero.h"
#include <iostream>
using namespace std;



Jugador::Jugador(string nom, char sim){
	this -> nombre=nom;
	this -> simbolo= sim;
}


char Jugador::getSimbolo(){
	return simbolo;
}



Ficha* Jugador::nextJugada(Tablero tbl){
	char a;
	cout<<"ingresa Movimiento---> ";
	cin >> a;
	Ficha *f = tbl.obtenerFicha(a);
	return f;
}

void Jugador::dibujarse(){
	cout << nombre << " su simbolo --> "<< simbolo <<endl;
}



bool Jugador::verifyTricky(Tablero tbl, int f,int c,int d){
	tbl.verificarTickyFilas(f);
	tbl.verificarTickyColumnas(c);
	tbl.verificarTickyDiagonal( d);
	
}