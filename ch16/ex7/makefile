# KNKC chapter 16 Exercise 7
# Sundeep Kolli 08-july-2014
# Program: ex7.c

ex7: ex7.o fraction.o gcd.o
	gcc -o ex7 ex7.o fraction.o gcd.o

ex7.o: ex7.c fraction.h
	gcc -c ex7.c
	
fraction.o: fraction.c fraction.h
	gcc -c fraction.c

gcd.o: gcd.c gcd.h
	gcc -c gcd.c
