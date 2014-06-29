pp2: pp2.o word.o line.o
	gcc -o pp2 pp2.o word.o line.o

pp2.o: pp2.c word.h line.h
	gcc -c pp2.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c

