/* KNKC ch4 exercise 9
 * Sundeep Kolli 14-dec-2013
 * Program: ex9.c
 * Purpose: show the output of the following program fragments
 * in the comments, assuming i, j and k are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;
	
	/* 63 8 */
	i = 7; j = 8;
	i *= j + 1;
	printf ("%d %d\n", i, j);

	/* 3 2 1 */
	i = j = k = 1;
	i += j += k;
	printf ("%d %d %d\n", i, j, k);

	/* 2 -1 3 */
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf ("%d %d %d\n", i, j, k);

	/* 0 0 0 */
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf ("%d %d %d\n", i, j, k);

	return 0;
}
