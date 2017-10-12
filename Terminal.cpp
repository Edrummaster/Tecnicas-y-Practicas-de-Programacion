#include "Terminal.h"
#include <iostream>
using namespace std;

#include <stdlib.h>

void Terminal::leerMovimiento (char &etiqueta1, char &etiqueta2){
	cout << endl;
	cout << "Ingrese Movimiento >> ";
	cin >> etiqueta1 >> etiqueta2;
	cout << endl;
}

void Terminal::limpiarPantalla () {
	system ("cls");
}

