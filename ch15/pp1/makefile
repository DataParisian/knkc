pp1: pp1.o word.o line.o
	gcc -o pp1 pp1.o word.o line.o

pp1.o: pp1.c word.h line.h
	gcc -c pp1.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c

