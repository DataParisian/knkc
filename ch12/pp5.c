/* KNKC chapter 12 programming project 5
 * Sundeep Kolli 04-apr-2014
 * Program: pp5.c
 * Purpose: Modify pp14 from chapter 8 so that it uses a pointer instead of an 
 * integer to keep track of the current position in the array that contains the 
 * sentence.
*/

#include <stdio.h>

#define LENGTH 200

int main (void){

	char sentence[LENGTH] = {'a'}, *p = sentence;
	char c, endChar;
	int charCount = 0, wordCount = 0;
	int i = 0, startPos = 0, endPos;
	int wordPos[LENGTH] = {0};
	
	printf ("Enter a sentence: ");
	/*This is a test sentence!*/
	while ((c = getchar()) != '\n' && charCount < LENGTH){
		if (c == '.' || c == '?' || c == '!'){
			endChar = c;				
		}else{
			if (c == ' '){
				wordPos[wordCount] = i + 1;
				wordCount++;
			}	
			*p = c;
			p++;
			i++;
		}
		charCount++;
	}	
	endPos = i - 1;
	startPos = wordCount - 1;
	
	printf ("Reversal of sentence: ");
	
	while (wordCount >= 0){
	
		for (i = wordPos[startPos]; i <= endPos; i++){
			printf("%c", sentence[i]);			
		}
		printf (" ");
		wordCount--;
		endPos = wordPos[startPos] - 2;
		startPos = wordCount - 1;
	}
	
	printf ("\b%c\n", endChar);
	
	return 0;
}
