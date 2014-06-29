/* KNKC chapter 5 exercise 4
 * Sundeep Kolli 17-dec-2013
 * Program: ex4.c
 * Purpose: write a single expression whose value is either 
 * -1, 0 or +1 depending on whether i is less than, equal to
 * or greater than j respectively.
*/

#include <stdio.h>

int main (void)
{
	int i, j;
	
	printf ("Enter i, i: ");
	scanf ("%d , %d", &i, &j);

	printf ("%d\n", (i == j) - (i <= j) + (i > j));

	return 0;
}
