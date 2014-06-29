/* KNKC chapter 7 programming project 13
 * Sundeep Kolli 26-01-2014
 * Program: pp13.c
 * Purpose: program to calculate the average word length for a sentence
*/

#include <stdio.h>

int main(void){

	typedef int bool;	
	
	char c;
	bool inWord = 0;
/*	int i;*/
	long charCount = 0, wordCount = 0;
/*	float avgWordLength = 0.0f;*/
	
	printf ("Enter a sentence: ");

	while ((c = getchar()) != '\n'){		
		
		if (c == ' ' || c == '\t'){
			inWord = 0;
		}else{
			charCount++;
			if (inWord != 1){
				wordCount++;
			}
			inWord = 1;			
		}		
			
	}
	
	printf ("charCount: %ld\n", charCount);
	printf ("wordCount: %ld\n", wordCount);
	
	printf ("Average word length: %0.2f\n", ((float)charCount / wordCount));		

	return 0;
}		
