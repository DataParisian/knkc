# KNKC chapter 15 Programming Project 5
# Sundeep Kolli 30-june-2014
# Program: pp5.c

pp5: pp5.o stack.o
	gcc -o pp5 pp5.o stack.o

pp5.o: pp5.c stack.h
	gcc -c pp5.c

stack.o: stack.c stack.h
	gcc -c stack.c

