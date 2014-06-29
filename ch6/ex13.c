/* KNKC chapter 6 exercise 13
 * Sundeep Kolli 19-dec-2013
 * Program: ex13.c
 * Purpose: rewrite the following loop so that the 
 * body is empty
*/

#include <stdio.h>

int main(void){

	int n, m;
		
	printf ("Enter a number: ");
	scanf ("%d", &m);
	/*
	for (n = 0; m > 0; n++)
		m /= 2;
	*/
	for (n = 0; m > 0; n++, m /= 2)
		;

	printf ("%d\n", n);

	return 0;
}
