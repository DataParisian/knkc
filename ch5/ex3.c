/* KNKC chapter 5 exercise 3
 * Sundeep Kolli 16-dec-2013
 * Program: ex3.c
 * Purpose: show the output of the following program fragments
 * assuming i, j and k are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;
	
	/* 1 */
	/* 3 5 5 */
	i = 3; j = 4; k = 5;
	printf ("%d\n", i < j || ++j < k);
	printf ("%d %d %d\n", i, j, k);
	
	/* 0 */
	/* 7 9 9 */
	i = 7; j = 8; k = 9;
	printf ("%d\n", i - 7 && j++ < k);
	printf ("%d %d %d\n", i, j, k);

	/* 1 */
	/* 8 8 9 */
	i = 7; j = 8; k = 9;
	printf ("%d\n", (i = j) || (j = k));
	printf ("%d %d %d\n", i, j, k);

	/* 1 */
	/* 2 1 1 */
	i = 1; j = 1; k = 1;
	printf ("%d\n", ++i || ++j && ++k);
	printf ("%d %d %d\n", i, j, k);

	return 0;
}
