# KNKC chapter 16 Programming Project 2
# Sundeep Kolli 12-july-2014
# Program: pp2.c

pp2: pp2.o readline.o quicksort.o
	gcc -o pp2 pp2.o readline.o quicksort.o

pp2.o: pp2.c readline.h quicksort.h
	gcc -c pp2.c

readline.o: readline.c readline.h
	gcc -c readline.c

quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c

