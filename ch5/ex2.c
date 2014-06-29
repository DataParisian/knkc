/* KNKC chapter 5 exercise 2
 * Sundeep Kolli 16-dec-2013
 * Program: ex2.c
 * Purpose: show the output of the following program fragments
 * assuming i, j and k are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;
	
	/* 1 */
	i = 10; j = 5;
	printf ("%d\n", !i < j);
	
	/* 1 */
	i = 2; j = 1;
	printf ("%d\n", !!i + !j);

	/* 1 */
	i = 5; j = 0; k = -5;
	printf ("%d\n", i && j || k);

	/* 1 */
	i = 1; j = 2; k = 3;
	printf ("%d\n", i < j || k);	

	return 0;
}
