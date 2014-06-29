/* KNKC chapter 8 programming project 16
 * Sundeep Kolli 07-feb-2014
 * Program: pp16.c
 * Purpose: Write a program that tests whether two words are 
 * anagrams (permutations of the same letters).
*/

#include <stdio.h>
#include <ctype.h>

#define LENGTH 80
#define ALPHABET_SIZE 26

int main (void){
	
	char c;
/*	char word[LENGTH] = {'a'};*/
	int i, charCount = 0;
	int letterCount[ALPHABET_SIZE] = {0};
	
	printf ("Enter first word: ");		
	while ((c = getchar()) != '\n' && charCount < LENGTH){
/*		word[charCount] = c;*/
		if (isalpha(c)){
			letterCount[toupper(c) - 'A']++;
		}
		charCount++;	
	}
	
	charCount = 0;
	printf ("Enter second word: ");		
	while ((c = getchar()) != '\n' && charCount < LENGTH){
		if (isalpha(c)){
			letterCount[toupper(c) - 'A']--;
		}
		charCount++;	
	}
	
	for (i = 0; i < ALPHABET_SIZE; i++){
		if (letterCount[i] != 0){
			printf ("The words are not anagrams\n");
			return 0;
		}
	}	
	printf ("The words are anagrams\n");
		
	return 0;
}
