# KNKC chapter 15 Programming Project 4
# Sundeep Kolli 30-june-2014
# Program: pp4.c

pp4: pp4.o readline.o
	gcc -o pp4 pp4.o readline.o

pp4.o: pp4.c readline.h
	gcc -c pp4.c

readline.o: readline.c readline.h
	gcc -c readline.c

