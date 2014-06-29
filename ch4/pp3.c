/* KNKC ch4 programming project 3
 * Sundeep Kolli 14-dec-2013
 * Program: pp3.c
 * Purpose: asks the user to enter a 3-digit number, then
 * prints the number with its digits reversed without
 * using arithmetic to split the numbers
*/

#include <stdio.h>

int main (void)
{
	int i, j, k;	
	
	printf ("Enter a 3-digit number: ");
	scanf ("%1d%1d%1d", &i, &j, &k);
	
	printf ("The reversal is %1d%1d%1d\n", k,j,i);

	return 0;
}
