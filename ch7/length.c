/* KNKC chapter 7 section 7.3
 * Sundeep Kolli 26-dec-2013
 * Program: length.c
 * Purpose: Determines the length of a message
*/

#include<stdio.h>

int main(void){
	char ch;
	int len = 0;

	printf ("Enter a message: ");
	ch = getchar();

	while (ch != '\n'){
		len++;
		ch = getchar();
	}

	printf ("Your message was %d characters long.\n", len);

	return 0;
}
