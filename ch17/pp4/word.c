/* KNKC chapter 17 Programming Project 4 
 * Sundeep Kolli 17-august-2015
 * Program: pp4.c
*/

#include <stdio.h>
#include "word.h"

int read_char(void){
	
	int ch = getchar();
	
	if (ch == '\n' || ch == '\t')
		return ' ';
	
	return ch;
}

int read_word(char *word, int len){

	int ch, pos = 0;
	
	while ((ch = read_char()) == ' ')
		;
	while (ch != ' ' && ch != EOF){
		if (pos < len)
			word[pos++] = ch;
		ch = read_char();
	}
	word[pos] = '\0';
	return pos;
}

