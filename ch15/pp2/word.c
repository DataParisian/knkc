/* KNKC chapter 15  
 * Program: pp2.c
 * Sundeep Kolli 22-june-2014
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
		if (pos < len-1)
			word[pos++] = ch;				
		ch = read_char();
	}
	
	if (pos == len){
		word[pos++] = ch;				
	}
	
	word[pos] = '\0';
	return pos;
}

