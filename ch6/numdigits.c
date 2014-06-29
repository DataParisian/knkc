/* KNKC chapter 6 section 6.1
 * Sundeep Kolli 19-dec-2013
 * Program: numdigits.c
 * Purpose: calculates the number of digits in an integer
*/

#include <stdio.h>

int main(void){

	int digits = 0, n;
	
	printf ("Enter a nonnegative integer: ");
	scanf ("%d", &n);

	do{
		n /= 10;
		digits++;
	}while (n > 0);

	printf ("The number has %d digit(s).\n", digits);

	return 0;
}
