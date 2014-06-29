/* KNKC chapter 7 exercise 2
 * Sundeep Kolli 27-dec-2013
 * Program: exercise2.c
 * Purpose: Verify if the following are legal constants in C.
 * Classify the constant as either integer or floating-point constant
*/

#include <stdio.h>

int main(void){

	/* legal floating constant 1000.000000 */
	printf ("%f\n", 010E2);

	/* legal floating constant 3210000.000000 */
	printf ("%f\n", 32.1E+5);

	/* illegal integer and illegal floating constant due to 9 */
	/* in the octal constant */
	/*	
	printf ("%d\n", 0790);
	printf ("%f\n", 0790);
	*/

	/* illegal integer and illegal floating constant */
	/* due to the underscore character */
	/*
	printf ("%d\n", 100_000);
	printf ("%d\n", 100_000);
	*/

	/* legal floating constant 0.039780*/
	printf ("%f\n", 3.978e-2);
	
	return 0;
}
