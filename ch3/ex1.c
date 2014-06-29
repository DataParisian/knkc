/* KNKC ch2 exercise 1
 * Sundeep Kolli 11-dec-2013
 * Program: ex1.c
 * Purpose: write the output of the following printf
 * calls in comments above each printf call
*/

#include <stdio.h>

int main(void)
{
	/*    86,1040*/
	printf ("%6d,%4d", 86, 1040);
	printf ("\n");	

	/* 3.02530e+01*/
	printf ("%12.5e", 30.253);
	printf ("\n");

	/*83.1620*/
	printf ("%.4f", 83.162);
	printf ("\n");

	/*9.98e-07*/
	printf ("%-6.2g", .0000009979);
	printf ("\n");

	return 0;
}
