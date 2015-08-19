/* KNKC chapter 17 Programming Project 4 
 * Sundeep Kolli 17-august-2015
 * Program: pp4.c
*/

#include "line.h"

struct word{
	char word[MAX_WORD_LEN + 2];
	struct word *next;
};

struct word *first_word = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void){
	
	struct word *cur, *next;
	
	for(cur = first_word; cur != NULL; cur=next){
		next = cur->next;
		free(cur);
	}
	
	first_word = NULL;
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word){

	struct word *cur, *new_word;	
	new_word = malloc(sizeof(struct word));	
	
	if (new_word == NULL){
		printf("Memory allocation failure in add_word in line.c\n");		
		exit(EXIT_FAILURE);
	}
	
	if(first_word == NULL){	
		strcpy(new_word->word, word);		
		first_word = new_word;
		line_len += strlen(new_word->word);
		num_words++;		
	}else{
		
		for(cur = first_word; cur->next != NULL; cur=cur->next)
			;
		
		strcpy(new_word->word, " ");
		strcat(new_word->word, word);
		
		cur->next = new_word;
		line_len += strlen(new_word->word);
		num_words++;		
	}
	
	new_word->next = NULL;
}

int space_remaining(void){
	return MAX_LINE_LEN - line_len;
}

void write_line(void){

	struct word *cur;
	int extra_spaces, spaces_to_insert, i;
	
	extra_spaces = MAX_LINE_LEN - line_len;
	
		
	/*
		printf("num_words: %d, line_len: %d, extra_spaces: %d\n", 
			num_words, line_len, extra_spaces);
	*/
	
	printf("%s", first_word->word);
		
	for(cur=first_word->next; cur!= NULL; cur=cur->next){
		
		if(num_words > extra_spaces && num_words > 1){		
			spaces_to_insert = extra_spaces / (num_words-1);			
			for(i = 1; i <= spaces_to_insert + 1; i++)
				putchar(' ');				
			extra_spaces -= (spaces_to_insert + 1);			
		}
		
		printf("%s", cur->word);	
		num_words--;					
	}		
	putchar('\n');	
}

void flush_line(void){
	struct word *cur;
	
	if(line_len > 0){		
		for (cur = first_word; cur != NULL; cur=cur->next){
			printf("%s", cur->word);
		}
	}
}

