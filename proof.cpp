#include<iostream>
#include<string.h>
#include "Ficha.h"
#include "Jugador.h"
#include "Tablero.h"
using namespace std;


int main(){
	string etqs= "abcdefghi";
	Ficha f('X','D');
	//f.dibujarFicha();
	Jugador j1("plyer",'X');
	Tablero tb(etqs);
	tb.dibujarse();
	return 0;
	


}
