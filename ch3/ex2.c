/* KNKC ch2 exercise 2
 * Sundeep Kolli 11-dec-2013
 * Program: ex2.c
 * Purpose: write calls of printf that display a float variable x
 * in the formats specified in the comments below
*/

#include <stdio.h>

int main(void)
{
	float x = 21.123f;
	
	/* Exponential notation, left justified in a field size of 8
	 * one digit after the decimal
	*/
	printf ("%-8.1e\n", x);

	/* Exponential notation, right justified in a field size of 10
	 * six digits after the decimal
	*/
	printf ("%10.6e\n", x);
	
	/* fixed decimal notation, left justified in a field size of 8
	 * three digits after the decimal
	*/
	printf ("%-8.3f\n", x);
		
	
	/* fixed decimal notation, right justified in a field size of 6
	 * no digits after the decimal
	*/
	printf ("%6.0f\n", x);

	return 0;
}
