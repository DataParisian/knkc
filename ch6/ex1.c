/* KNKC chapter 6 exercise 1
 * Sundeep Kolli 19-dec-2013
 * Program: ex1.c
 * Purpose: write the output of the following 
 * program fragment
*/

#include <stdio.h>

int main(void){

	int i;
	/* 1 2 4 8 16 32 64 128 */
	i = 1;
	while (i <= 128){
		printf ("%d ", i);
		i *= 2;	
	}
	
	return 0;
}
