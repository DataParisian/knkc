/* KNKC chapter 8 programming project 14
 * Sundeep Kolli 05-feb-2014
 * Program: pp14.c
 * Purpose: Write a program that reverses the words in a sentence.
*/

#include <stdio.h>

#define LENGTH 200

int main (void){

	char sentence[LENGTH] = {'a'};
	char c, endChar;
	int charCount = 0, wordCount = 0;
	int i = 0, startPos = 0, endPos;
	int wordPos[LENGTH] = {0};
	
	printf ("Enter a sentence: ");
		
	while ((c = getchar()) != '\n' && charCount < LENGTH){
		if (c == '.' || c == '?' || c == '!'){
			endChar = c;				
		}else{
			if (c == ' '){
				wordPos[wordCount] = i + 1;
				wordCount++;
			}
			sentence[i] = c;
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
