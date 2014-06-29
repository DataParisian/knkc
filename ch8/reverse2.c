/* KNKC chapter 8 section 8.3
 * Sundeep Kolli 29-jan-2014
 * Program: reverse2.c
 * Purpose: Reverses a series of numbers using a variable-length
 * array - C99 only
*/

#include <stdio.h>

int main(void){
	
	int i, n;
	
	printf ("How many numbers do you want to reverse? ");
	scanf ("%d", &n);

	int a[n]; /* C99 only - length of array depends on n */
	
	printf ("Enter %d numbers: ", n);
	for (i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	
	printf ("In reverse order: ");
	for (i = n -1; i >= 0; i--)
		printf (" %d", a[i]);
	printf ("\n");	

	return 0;
}
