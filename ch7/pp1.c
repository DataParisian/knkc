/* KNKC chapter 7 programming project 1
 * Sundeep Kolli 27-dec-2013
 * Program: pp1.c
 * Purpose: Find out the number of bits used to store integers on this
 * computer by playing with square2.c program of section 6.3 by setting
 * the variable i to short, int and long and finding the smallest value 
 * of n that causes failure 
*/

#include <stdio.h>

int main(void){

	/* Min int n that causes overflow of (i*i): 46341 */
	/* Min short int n that causes overflow of (i*i): 182 */
	/* Min long int n that causes overflow of (i*i): 15780717506 */
	long i, n;
	
	printf ("This program prints a table of squares.\n");
	printf ("Enter number of entries in table: ");
	scanf ("%ld", &n);
	printf ("Enter starting value: ");
	scanf ("%ld", &i);

	
	for (; i <= n; i++)
		printf ("%20ld%20ld\n", i, i * i);
	

	return 0;
}
