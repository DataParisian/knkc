/* KNKC chapter 5 exercise 1
 * Sundeep Kolli 16-dec-2013
 * Program: ex1.c
 * Purpose: show the output of the following program fragments
 * assuming i, j and k are int variables
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;
	
	/* 1 */
	i = 2; j = 3;
	k = i * j == 6;
	printf ("%d\n", k);
	
	/* 1 */
	i = 5; j= 10; k = 1;
	printf ("%d\n", k > i < j);

	/* 1 */
	i = 3; j = 2; k = 1;
	printf ("%d\n", i < j == j < k);

	/* 4 */
	i = 3; j = 4; k = 5;	
	printf ("%d\n", i % j + i < k);

	return 0;
}
