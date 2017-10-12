CC=g++
CFLAGS=-I.

DEPS = main.cpp \
	   Juego.h \
	   Ficha.h \
	   Tablero.h \
	   GeneradorSimbolos.h \
	   GeneradorEtiquetas.h \
	   Terminal.h \
	   Tablero.h \
	   Mijuego.h

OBJ = main.o \
      Ficha.o \
	  GeneradorEtiquetas.o \
	  GeneradorSimbolos.o \
	  Juego.o \
	  Tablero.o \
	  Terminal.o \
	  MiJuego.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

candy.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *~ core  

