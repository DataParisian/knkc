/* KNKC chapter 13 Programming Project 14.
 * Sundeep Kolli 28-apr-2014
 * Program: pp14.c
 * Purpose: Modify pp16 from ch8 so that it includes the following function:
 * 		bool are_anagrams(const char *word1, const char *word2);
 * The function returns true if the strings pointed to by word1 and word2 
 * are anagrams.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 80
#define ALPHABET_SIZE 26

bool are_anagrams(const char *word1, const char *word2);

int main (void){
	
	char firstWord[N], secondWord[N];
	
	printf ("Enter first word with less than %d characters: ", N);
	gets(firstWord);
	
	printf ("Enter second word with less than %d characters: ", N);
	gets(secondWord);
	
	if (are_anagrams(firstWord, secondWord))
		printf ("The words are anagrams\n");
	else
		printf ("The words are not anagrams\n");
		
	return 0;
}

bool are_anagrams(const char *word1, const char *word2){
	
	int i, letterCount[ALPHABET_SIZE] = {0};	
	
	while(*word1){
		if (isalpha(*word1))
				letterCount[toupper(*word1) - 'A']++;		
		word1++;
	}
	
	while(*word2){
		if (isalpha(*word2))
				letterCount[toupper(*word2) - 'A']--;		
		word2++;
	}
	
	for (i = 0; i < ALPHABET_SIZE; i++){
		if (letterCount[i] != 0){
			return false;
		}
	}
	
	return true;
}
