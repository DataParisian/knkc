/* KNKC chapter 16 inventory.c
 * Sundeep Kolli 05-july-2014
 * Program: inventory.c
 * Purpose: Maintains a parts database (arrays version).
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

