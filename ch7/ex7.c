/* KNKC chapter 7 exercise 7
 * Sundeep Kolli 27-dec-2013
 * Program: exercise7.c
 * Purpose: write octal escapes for the following character
 * escapes
*/

#include <stdio.h>

int main(void){

	/* 010 */
	printf ("%o\n", '\b');	

	/* 012 */
	printf ("%o\n", '\n');	

	/* 015 */
	printf ("%o\n", '\r');	

	/* 011 */
	printf ("%o\n", '\t');	

	return 0;
}
