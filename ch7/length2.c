/* KNKC chapter 7 section 7.3
 * Sundeep Kolli 26-dec-2013
 * Program: length2.c
 * Purpose: Determines the length of a message
*/

#include<stdio.h>

int main(void){
	
	int len = 0;

	printf ("Enter a message: ");
	
	while (getchar() != '\n'){
		len++;	
	}

	printf ("Your message was %d characters long.\n", len);

	return 0;
}
