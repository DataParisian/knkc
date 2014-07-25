/* KNKC chapter 17 inventory2.c
 * Sundeep Kolli 25-july-2014
 * Program: inventory2.c
 * Purpose: Maintains a parts database (linked list version).
*/

#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n){

	int ch, i = 0;
	
	while (isspace(ch = getchar()))
		;
	
	while (ch != '\n' && ch != EOF){
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';
	
	return i;
}

