/* KNKC chapter 6 exercise 4
 * Sundeep Kolli 19-dec-2013
 * Program: ex4.c
 * Purpose: which one of the following statements is 
 * not equivalent to the other two (assuming the loop
 * bodies are the same)
*/

#include <stdio.h>

int main(void){

	int i;
	
	/* 0 1 2 3 4 5 6 7 8 9 */
	for (i = 0; i < 10; i++)
		printf ("%d ", i);

	printf ("\n");

	/* 0 1 2 3 4 5 6 7 8 9 */
	for (i = 0; i < 10; ++i)
		printf ("%d ", i);

	printf ("\n");

	/* 0 1 2 3 4 5 6 7 8 9 10 */
	for (i = 0; i++ < 10; )
		printf ("%d ", i);

	printf ("\n");

	return 0;
}
