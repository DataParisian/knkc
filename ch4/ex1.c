/* KNKC ch4 exercise 1
 * Sundeep Kolli 15-dec-2013
 * Program: ex1.c
 * Purpose: show the output of the following program fragments,
 * assume that i, j and k are int variables.
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;
	
	/*1 2*/
	i = 5; j = 3;
	printf ("%d %d\n", i / j, i % j);
	
	/*0*/
	i = 2; j = 3;
	printf ("%d\n", (i + 10) % j);
		
	/*1*/
	i = 7; j = 8; k = 9;
	printf ("%d\n", (i + 10) % k / j);

	/*0*/
	i = 1; j = 2; k = 3;
	printf ("%d\n", (i + 5) % (j + 2) / k);
			
	return 0;
}
