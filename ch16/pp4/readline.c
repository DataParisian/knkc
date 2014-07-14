/* KNKC chapter 16 pp4.c
 * Sundeep Kolli 14-july-2014
 * Program: pp4.c
 * Purpose: Modify the inventory program of section 16.3 by adding a price 
 * member to the part structure. The insert function should ask the user for 
 * the price of the new item. The search and print functions should display the 
 * price. Add a new command that allows the user to change the price of a part.
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

