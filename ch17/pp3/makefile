# KNKC chapter 17
# Sundeep Kolli 15-August-2015
# Program: pp3.c

pp3: inventory2.o readline.o
	gcc -pedantic -o pp3 inventory2.o readline.o

inventory2.o: inventory2.c readline.h
	gcc -pedantic -c inventory2.c

readline.o: readline.c readline.h
	gcc -pedantic -c readline.c

