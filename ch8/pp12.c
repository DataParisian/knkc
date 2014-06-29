/* KNKC chapter 8 programming project 12
 * Sundeep Kolli 05-feb-2014
 * Program: pp12.c
 * Purpose: Modify the Programming Project 5 from chapter 7 so that the 
 * SCRABBLE values of the letters are stored in an array of 26 elements 
 * corresponding to the 26 letters of the alphabet. Use an initializer to set 
 * up the array.
*/

#include <stdio.h>
#include <ctype.h>

#define LETTER_COUNT 26

int main (void){

	const int scrabbleValue[LETTER_COUNT] = {1, 3, 3, 2, 1, 4, 
											 2, 4, 1, 8, 5, 1,
											 3, 1, 1, 3, 10, 1,
											 1, 1, 1, 4, 4, 8,
											 4, 10};
	char c;
	int scrabbleScore = 0;
	
	printf ("Enter a word: ");
	
	while ((c = toupper(getchar())) != '\n'){
		scrabbleScore += scrabbleValue[c - 'A'];
	}
	
	printf ("Scrabble Value: %d\n", scrabbleScore);
	
	return 0;
}
