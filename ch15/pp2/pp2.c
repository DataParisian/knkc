/* KNKC chapter 15 Programming Project 2
 * Program: pp2.c 
 * Sundeep Kolli 22-june-2014
 * Purpose: Modify the justify program of Section 15.3 by having the read_word 
 * function (instead of main) store the * character at the end of a word that's 
 * been truncated.
*/

#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(void){
	
	char word[MAX_WORD_LEN + 2];
	int word_len;
	
	clear_line();
	
	for(;;){
		word_len = read_word(word, MAX_WORD_LEN + 1);
		if (word_len == 0){
			flush_line();
			return 0;
		}
		/*
			if (word_len > MAX_WORD_LEN)
				word[MAX_WORD_LEN] = '*';
		*/
		if (word_len + 1 > space_remaining()){
			write_line();
			clear_line();
		}
		add_word(word);
	}
}

