#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "DGeneradorEtiquetas.h"
#include "DGeneradorSimbolos.h"
#include "DFicha.h"
#include "DJuego.h"
#include "DMiJuego.h"
#include "DTablero.h"
#include "DTerminal.h"

using namespace std;

int main(){
	string nombre;
	int filas, columnas;
	string simbolos= "#@&$%";
	string etiquetas = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"ingrese nombre"<<endl;
	cin>> nombre;
	cout<<"ingrese filas"<<endl;
	cin>>filas;
	cout<<"ingrese columnas"<<endl;
	cin>>columnas;
	int MaxMov=20;
	Juego j1(nombre,MaxMov);
	Tablero t1(filas,columnas);
	Terminal T;
	GeneradorSimbolos smb(simbolos);
	GeneradorEtiquetas etq(etiquetas);

	t1.inicializarse(smb,etq);
	T.limpiarPantalla();
	t1.inicializarse(smb,etq);
	

	do{
		
		t1.dibujarse();
		int n,m;
		char e1, e2;
		T.leerMovimiento(e1,e2);
		Ficha *f1 = t1.obtenerFicha(e1);
		Ficha *f2 = t1.obtenerFicha(e2);
		f1->intercambiarSimbolos(f2);


		Ficha *trf = t1.buscarTripletaFilas(n,m);
		if (trf != NULL){
			t1.reemplazarTripletaFilas(n,m, smb);
			j1.aumentarPuntaje(20);
		}

		Ficha *trc = t1.buscarTripletaColumnas(n,m);
		if (trf != NULL){
			t1.reemplazarTripletaColumnas(n,m,smb);
			j1.aumentarPuntaje(20);
		}

		j1.reducirMovimientos();
		j1.mostrarInformacion();

		}

		while(j1.verificarFinal()==false);


	return 0;

}

