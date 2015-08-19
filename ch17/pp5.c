/* KNKC chapter 17 Programming Project 5
 * Sundeep Kolli 17-August-2015
 * Program: pp5.c
 * Purpose: Write a program that sorts a series of words entered by the user. Assume
 *			that each word is no more than 20 characters long. Stop reading when the 
 *			user enters an empty word(i.e., presses Enter without entering a word). 
 *			Store each word in a dynamically allocated string, using an array of 
 *			pointers to keep track of the strings, as in the remind2.c program 
 *   	    (Section 17.2). After all words have been read, sort the array (using any)
 *			sorting technique) and then use a loop to print the words in sorted order.
 *			Hint: Use the read_line function to read each word, as in remind2.c.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN  60                  /*  maximum number of chars in each word  	 */
#define INIT_SIZE 10                  /*  Initial size of array used to store words  */

int read_line(char str[], int n);
void sort_str_arr(char **str, int num_strings);

int main(void){
	
	char **words = malloc(INIT_SIZE * sizeof(char *));
		
	char word[WORD_LEN + 1];
	
	int i, word_size;
	int num_words = 0;
	int allocated = INIT_SIZE;
	
	for (i = 0; i < INIT_SIZE; i++)
		words[i] = malloc(WORD_LEN + 1);
	
	
	for(;;){
		if (num_words == allocated){			
			words = realloc(words, (allocated + INIT_SIZE) * sizeof(char *));
			
			if(words == NULL){
				printf("Memory allocation error\n");
				exit(EXIT_FAILURE);
			}
			for (i = allocated; i < (allocated + INIT_SIZE); i++)
				words[i] = malloc(WORD_LEN + 1);
			
			printf("Reallocated Memory\n");			
			allocated += INIT_SIZE;
		}
		
		word_size = 0;
		printf("Enter word: ");
		
		word_size = read_line(word, WORD_LEN);		
				
		if (word_size == 0)
			break;		
				
		strcpy(words[num_words++], word);		
	}
	
	printf("Words before sorting: ");
	for (i = 0; i < num_words; i++)
		printf(" %s", words[i]);
	printf("\n");
	
	sort_str_arr(words, num_words);
	
	printf("In sorted order: ");
	for (i = 0; i < num_words; i++)
		printf(" %s", words[i]);
	printf("\n");
	
	return 0;
}

int read_line(char str[], int n){
	
	int ch, i = 0;
	
	ch = getchar();
	while (ch != '\n' && ch != EOF){
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';
	return i;
}

void sort_str_arr(char **str, int num_strings){
	char *p, min[WORD_LEN + 1];
	int i, j;
	
	for (i = 0; i < (num_strings - 1); i++){
		p = str[i];
		for (j = i + 1; j < num_strings; j++)
			if (strcmp(str[j], p) < 0)  p = str[j];
		
		strcpy(min, p);
		strcpy(p, str[i]);
		strcpy(str[i], min);		
	}

}
