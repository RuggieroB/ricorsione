CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS= -lm

.PHONY: clean
clean:
	rm -f *.o