/* KNKC chapter 5 exercise 6
 * Sundeep Kolli 17-dec-2013
 * Program: ex6.c
 * Purpose: check the legality of the program fragment below and 
 * write the output when n is equal to 5
*/

#include <stdio.h>

int main (void)
{
	int n = 5;	
	
	/* this statement is legal but it does not check */
	/* whether n is between 1 and 10 */
	/* when n is 5, the expression evaluates to 0 */
	/* so the printf statement is not executed */
 
	if (n == 1 - 10)
		printf ("n is between 1 and 10\n");
	
	return 0;
}
