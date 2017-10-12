#include "GeneradorEtiquetas.h"

GeneradorEtiquetas::GeneradorEtiquetas (string nuevasEtiquetas) {
	cadenaEtiquetas = nuevasEtiquetas;
	contadorEtiquetas=0;
}

char GeneradorEtiquetas::nextEtiqueta () {
	return cadenaEtiquetas [contadorEtiquetas++];
}
