/* KNKC chapter 9 programming project 4
 * Sundeep Kolli 22-feb-2014
 * Program: pp4.c
 * Purpose: Modify the programming project 16 from chapter 8 so that it 
 * includes the following functions:
 *       void read_word(int counts[26]);
 *       bool equal_array(int counts1[26], int counts2[26]);
 * main calls read_word twice, once for each of the two words entered by the 
 * user to update counts array as in the original project. main will then call
 * equal_array by passing the two counts arrays which will return true if they 
 * are equal and false otherwise.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 80
#define ALPHABET_SIZE 26

void read_word(int counts[ALPHABET_SIZE]);
bool equal_array(int counts1[ALPHABET_SIZE], int counts2[ALPHABET_SIZE]);

int main (void){

	int counts1[ALPHABET_SIZE] = {0}, counts2[ALPHABET_SIZE] = {0};
	
	read_word(counts1);
	read_word(counts2);
		
	if (equal_array(counts1, counts2)){	
		printf ("The words are anagrams\n");
	}else{
		printf ("The words are not anagrams\n");
	}
	
	return 0;
}

void read_word(int counts[ALPHABET_SIZE]){

	char c;
	int charCount = 0;	
	
	printf ("Enter a word: ");		
	while ((c = getchar()) != '\n' && charCount < LENGTH){
		if (isalpha(c)){
			counts[toupper(c) - 'A']++;
		}
		charCount++;	
	}	
}

bool equal_array(int counts1[ALPHABET_SIZE], int counts2[ALPHABET_SIZE]){
	
	int i;
	for (i = 0; i < ALPHABET_SIZE; i++){
		if (counts1[i] != counts2[i]){			
			return false;
		}
	}
	return true;
}

