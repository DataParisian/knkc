# KNKC chapter 17 Programming Project 1
# Sundeep Kolli 15-August-2014
# Program: pp1

pp1: inventory.o readline.o
	gcc -pedantic -o pp1 inventory.o readline.o

inventory.o: inventory.c readline.h
	gcc -pedantic -c inventory.c

readline.o: readline.c readline.h
	gcc -pedantic -c readline.c

