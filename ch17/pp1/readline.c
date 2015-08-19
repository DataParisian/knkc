/* KNKC chapter 17 Programming Project 1
 * Sundeep Kolli 15-August-2014
 * Program: inventory.c (dynamically allocated array version)
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

