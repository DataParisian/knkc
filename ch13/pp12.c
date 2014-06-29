/* KNKC chapter 13 programming project 12
 * Sundeep Kolli 27-apr-2014
 * Program: pp12.c
 * Purpose: Modify pp14.c from ch8 so that it stores the words in a 
 * two-dimensional char array as it reads the sentence with each row of the 
 * array storing a single word. Assume that the sentence contains no more than 
 * 30 words and no word is more than 20 characters long. Be sure to store a 
 * null character at the end of each word so that it can be treated as a string.
*/

#include <stdio.h>

#define WORDS 30
#define WORD_LENGTH 20

int main (void){

	char sentence[WORDS][WORD_LENGTH] = {{""}};
	char c, endChar;
	int charCount = 0, wordCount = 0;	
	
	printf ("Enter a sentence: ");
		
	while ((c = getchar()) != '\n' && wordCount < (WORDS - 1)){
		
		if (c == '.' || c == '?' || c == '!'){
			endChar = c;				
			sentence[wordCount][charCount] = '\0';
		}else{			
			sentence[wordCount][charCount] = c;
			charCount++;
			if (c == ' '){
				sentence[wordCount][charCount - 1] = '\0';
				wordCount++;
				charCount = 0;
			}
		}		
	}	
	
	printf ("Reversal of sentence: ");
	
	while (wordCount > 0){
		printf("%s ", sentence[wordCount]);
		wordCount--;
	}
	printf("%s%c\n", sentence[wordCount], endChar);	
	
	return 0;
}
