CC = gcc
CFLAGS = -c
LDFLAGS = -o
#DEPS = lib.h
OBJ = eratosthenes.o


all: eratosthenes

eratosthenes: $(OBJ)
	$(CC) $(LDFLAGS) $@ eratosthenes.o -lm

eratosthenes.o: eratosthenes.c
	$(CC) $(CFLAGS) eratosthenes.c

clean:
	rm -f *.o
	rm -f ./eratosthenes
	rm -f *~