/* KNKC ch4 exercise 5
 * Sundeep Kolli 15-dec-2013
 * Program: ex5.c
 * Purpose: write all possible values of each expression
 * below in C89?
*/

#include <stdio.h>

int main (void)
{
	/* 3 */
	printf ("%d\n", 8 % 5);

	/* -3 or 2 */
	printf ("%d\n", -8 % 5);

	/* 3 or -2 */
	printf ("%d\n", 8 % -5);

	/* -3 */
	printf ("%d\n", -8 % -5);

	return 0;
}
