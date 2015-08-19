pp4: justify.o word.o line.o
	gcc -pedantic -Wall -Werror -o pp4 justify.o word.o line.o

justify.o: justify.c word.h line.h
	gcc -pedantic -Wall -Werror -c justify.c

word.o: word.c word.h
	gcc -pedantic -Wall -Werror -c word.c

line.o: line.c line.h
	gcc -pedantic -Wall -Werror  -c line.c

