/* KNKC chapter 6 exercise 2
 * Sundeep Kolli 19-dec-2013
 * Program: ex2.c
 * Purpose: write the output of the following 
 * program fragment
*/

#include <stdio.h>

int main(void){

	int i;
	
	/* 9384 938 93 9 */
	i = 9384;
	do {
		printf ("%d ", i);
		i = i / 10;
	} while (i > 0);
	
	return 0;
}
