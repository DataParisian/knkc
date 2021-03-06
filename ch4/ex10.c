/* KNKC ch4 exercise 10
 * Sundeep Kolli 14-dec-2013
 * Program: ex10.c
 * Purpose: show the output of the following program fragments
 * in the comments, assuming i and j are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j;
	
	/* 12 12 */
	i = 6;
	j = i += i;
	printf ("%d %d\n", i, j);
	
	/* 3 4 */
	i = 5;
	j = (i -= 2) + 1;
	printf ("%d %d\n", i, j);

	/* 2 8 */
	i = 7;
	j = 6 + (i = 2.5);
	printf ("%d %d\n", i, j);

	/* 6 9 */
	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf ("%d %d\n", i, j);

	return 0;
}
