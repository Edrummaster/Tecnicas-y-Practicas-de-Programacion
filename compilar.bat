clear
g++  maincandyoo.o \
	 Juego.o \
	 Tablero.o \
	 GeneradorSimbolos.o \
	 GeneradorEtiquetas.o \
	 Terminal.o \
	 Ficha.o \
	 MiJuego.o \
	 -fmax-errors=2 -o candy.exe
