# KNKC chapter 17
# Sundeep Kolli 25-july-2014
# Program: inventory2.c

inventory2: inventory2.o readline.o
	gcc -pedantic -o inventory2 inventory2.o readline.o

inventory2.o: inventory2.c readline.h
	gcc -pedantic -c inventory2.c

readline.o: readline.c readline.h
	gcc -pedantic -c readline.c

