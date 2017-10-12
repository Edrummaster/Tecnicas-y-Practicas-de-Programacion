#include "GeneradorSimbolos.h"
#include <stdlib.h>

#include <iostream>
using namespace std;

GeneradorSimbolos::GeneradorSimbolos (string nuevosSimbolos) {
	cadenaSimbolos = nuevosSimbolos;
}

char GeneradorSimbolos::nextSimbolo () {
	int nCandys = cadenaSimbolos.size();
	int k = rand() % nCandys;
	return cadenaSimbolos [k];
}
