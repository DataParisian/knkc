/* KNKC chapter 7 programming project 6
 * Sundeep Kolli 29-dec-2013
 * Program: pp6.c
 * Purpose: program to print the results of applying the sizeof 
 * operator on int, short, long, float, double and long double types
*/

#include <stdio.h>

int main(void){
		
	printf ("Size of int type: %lu\n", (unsigned long) sizeof(int));
	printf ("Size of short type: %lu\n", (unsigned long) sizeof(short));
	printf ("Size of long type: %lu\n", (unsigned long) sizeof(long));
	printf ("Size of float type: %lu\n", (unsigned long) sizeof(float));
	printf ("Size of double type: %lu\n", (unsigned long) sizeof(double));
	printf ("Size of long double type: %lu\n", (unsigned long) sizeof(long double));

	return 0;
}
