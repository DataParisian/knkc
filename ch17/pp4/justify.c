/* KNKC chapter 17 Programming Project 4 
 * Sundeep Kolli 17-august-2015
 * Program: pp4.c
 * Purpose: Modify the justify program of Section 15.3 by rewriting the 
 * 			line.c file so that it stores the current line in a linked list.
 *			Each node in the list will store a single word. The line array will
 *			be replaced by a variable that points to the node containing the 
 *			first word. This variable will store a null pointer whenever the line
 *			is empty.
*/

#include "line.h"
#include "word.h"

int main(void){
	
	char word[MAX_WORD_LEN + 2];
	int word_len;
	
	clear_line();
	
	for(;;){
		word_len = read_word(word, MAX_WORD_LEN + 1);		
		
		if (word_len == 0){
			flush_line();
			return EXIT_SUCCESS;
		}
		
		if (word_len > MAX_WORD_LEN){			
			word[MAX_WORD_LEN] = '*';
		}
		
		if (word_len + 1 > space_remaining()){					
			write_line();			
			clear_line();			
		}
		
		add_word(word);
	}	
}

