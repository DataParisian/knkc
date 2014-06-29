/* KNKC chapter 6 exercise 3
 * Sundeep Kolli 19-dec-2013
 * Program: ex3.c
 * Purpose: write the output of the following 
 * for statement
*/

#include <stdio.h>

int main(void){

	int i, j;

	/* 5 4 3 2 */
	for (i = 5, j = i -1; i > 0, j > 0; --i, j = i - 1)
		printf ("%d ", i);
	
	return 0;
}
