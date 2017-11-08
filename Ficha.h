#ifndef __FICHA_H__
#define __FICHA_H__

#include<iostream>
using namespace std;

class Ficha {
	
	private:
		char simbolo;
		char etiqueta;
		
	public:
		Ficha();
		Ficha(char simbolo, char etiqueta);
		char getSimbolo();	
		void setSimbolo(char nsim);
		char getEtiqueta();	
		void setEtiqueta(char netq);
		void dibujarFicha();
};

#endif
