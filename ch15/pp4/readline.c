/* KNKC chapter 15 Programming Project 4
 * Sundeep Kolli 30-june-2014
 * Program: pp4.c 
*/

#include "readline.h"

int read_line(char str[], int n){
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}