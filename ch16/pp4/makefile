# KNKC chapter 16
# Sundeep Kolli 14-july-2014
# Program: pp4.c

pp4: pp4.o readline.o
	gcc -pedantic -Wall -Werror -o pp4 pp4.o readline.o

pp4.o: pp4.c readline.h
	gcc -c pp4.c

readline.o: readline.c readline.h
	gcc -c readline.c

