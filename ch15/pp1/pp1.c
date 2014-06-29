/* KNKC chapter 15 Programming Project 1.
 * Sundeep Kolli 24-june-2014
 * Program: pp1.c
 * Purpose: The justify program of Section 15.3 justifies lines by inserting 
 * extra spaces between words. The way the write_line function currently 
 * works, the words closer to the end of the line tend to have slightly wider 
 * gaps between them than the words at the beginning. Improve the program by 
 * having write_line alternate between putting the larger gaps at the end of 
 * the line and putting them at the beginning of the line. 
*/

#include <string.h>
#include "boolean.h"
#include "line.h"
#include "word.h"


#define MAX_WORD_LEN 20

int main(void){
	
	char word[MAX_WORD_LEN + 2];
	int word_len;
	BOOL moreSpaceAtBeginFlag = FALSE;
	
	clear_line();
	
	for(;;){
		word_len = read_word(word, MAX_WORD_LEN + 1);
		if (word_len == 0){
			flush_line();
			return 0;
		}
		if (word_len > MAX_WORD_LEN)
			word[MAX_WORD_LEN] = '*';
		if (word_len + 1 > space_remaining()){			
			
			write_line(moreSpaceAtBeginFlag);
			
			if (moreSpaceAtBeginFlag)
				moreSpaceAtBeginFlag = FALSE;
			else
				moreSpaceAtBeginFlag = TRUE;
			
			clear_line();
		}
		add_word(word);
	}
}

