#include "Ficha.h"
#include <iostream>
using namespace std;

Ficha::Ficha(){
	simbolo=' ';
	etiqueta=' ';
}

Ficha::Ficha(char simbolo1, char etiqueta1){
	simbolo= simbolo1;
	etiqueta= etiqueta1;
	
}




char Ficha::getSimbolo(){
	return simbolo;
}


void Ficha::setSimbolo(char nsim){
	simbolo=nsim;
}

char Ficha::getEtiqueta(){
	return etiqueta;
}	

void Ficha::setEtiqueta(char netq ){
	etiqueta = netq; 
}

void Ficha::dibujarFicha(){
	cout<< simbolo << "|" <<etiqueta;
}



