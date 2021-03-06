/* KNKC ch4 exercise 11
 * Sundeep Kolli 14-dec-2013
 * Program: ex11.c
 * Purpose: show the output of the following program fragments
 * in the comments, assuming i, j and k are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;
	
	/* 0 2 */
	i = 1;
	printf ("%d ", i++ - 1);
	printf ("%d\n", i);
	
	/* 4 11 6 */
	i = 10; j = 5;
	printf ("%d ", i++ - ++j);
	printf ("%d %d\n", i, j);

	/* 0 8 7 */
	i = 7; j = 8;
	printf ("%d ", i++ - --j);
	printf ("%d %d\n", i, j);

	/* 3 4 5 4 */
	i = 3; j = 4; k = 5;
	printf ("%d ", i++ - j++ + --k);
	printf ("%d %d %d\n", i, j, k);

	return 0;
}
