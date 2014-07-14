# KNKC chapter 16
# Sundeep Kolli 13-july-2014
# Program: pp3.c

pp3: pp3.o readline.o
	gcc -pedantic -Wall -Werror -o pp3 pp3.o readline.o

pp3.o: pp3.c readline.h
	gcc -c pp3.c

readline.o: readline.c readline.h
	gcc -c readline.c

