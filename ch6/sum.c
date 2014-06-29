/* KNKC chapter 6 section 6.1
 * Sundeep Kolli 19-dec-2013
 * Program: sum.c
 * Purpose: sums a series of user input numbers
*/

#include <stdio.h>

int main(void){
	int n, sum = 0;
	
	printf ("This program sums a series of integers\n");
	printf ("Enter integers (0 to terminate): ");

	scanf ("%d", &n);

	while (n != 0){
		sum += n;
		scanf ("%d", &n);
	}

	printf ("The sum is: %d\n", sum);

	return 0;
}
