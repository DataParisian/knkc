/* KNKC ch4 exercise 12
 * Sundeep Kolli 14-dec-2013
 * Program: ex12.c
 * Purpose: show the output of the following program fragments
 * in the comments, assuming i and j are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j;
	
	/* 6 16 */
	i = 5;
	j = ++i * 3 - 2;
	printf ("%d %d\n", i, j);

	/* 6 -7 */
	i = 5;
	j = 3 - 2 * i++;
	printf ("%d %d\n", i, j);
	
	/* 6 23 */
	i = 7;
	j = 3 * i-- + 2;
	printf ("%d %d\n", i, j);

	/* 6 15 */
	i = 7;
	j = 3 + --i * 2;
	printf ("%d %d\n", i, j);

	return 0;
}
