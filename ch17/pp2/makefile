# KNKC chapter 17
# Sundeep Kolli 15-August-2015
# Program: pp2.c

pp2: inventory.o readline.o
	gcc -o pp2 inventory.o readline.o

inventory.o: inventory.c readline.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c

