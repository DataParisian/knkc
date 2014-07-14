/* KNKC chapter 16 inventory.c
 * Sundeep Kolli 13-july-2014
 * Program: pp3.c
 * Purpose: Modify the inventory.c program of section 16.3 by making inventory 
 * and num_parts local to the main function.
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

