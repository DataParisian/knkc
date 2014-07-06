# KNKC chapter 16
# Sundeep Kolli 05-july-2014
# Program: inventory.c

inventory: inventory.o readline.o
	gcc -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c

