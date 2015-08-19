/* KNKC chapter 17 Programming Project 6
 * Sundeep Kolli 18-August-2015
 * Program: pp6.c
 * Purpose: Modify Programming Project 6 so that it uses qsort to sort the array of
 *			pointers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN  60                  /*  maximum number of chars in each word  	 */
#define INIT_SIZE 10                  /*  Initial size of array used to store words  */

int read_line(char str[], int n);
int compare_strings(const void *p, const void *q);

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
	
	qsort(words, num_words, sizeof(char *), compare_strings);		
	
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

int compare_strings(const void *p, const void *q){
	return strcmp(*(char **)p, *(char **)q);
}
