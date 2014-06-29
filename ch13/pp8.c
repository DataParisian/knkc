/* KNKC chapter 13 programming project 8
 * Sundeep Kolli 26-apr-2014
 * Program: pp8.c
 * Purpose: Modify pp5.c from ch7 so that it includes the following function:
 * 		int compute_scrabble_value(const char *word);
 * The function returns the SCRABBLE value of the string pointed to by word.
*/

#include <stdio.h>
#include <ctype.h>

#define N 100

int compute_scrabble_value(const char *word);

int main(void){
	
	char inputWord[N];
	int scrabbleValue;

	printf ("Enter a word: ");
	gets(inputWord);
	
	scrabbleValue = compute_scrabble_value(inputWord);
	
	printf ("Scrabble value: %d\n", scrabbleValue);			

	return 0;
}

int compute_scrabble_value(const char *word){
	
	char ch;
	const char *p = word;
	int sum = 0;
	
	while (*p){

		ch = toupper(*p);
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' 
			|| ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U'){
			sum++;
		}else if (ch == 'D' || ch == 'G'){
			sum += 2;
		}else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P'){
			sum += 3;
		}else if (ch == 'F' || ch == 'H' || ch == 'V' 
				|| ch == 'W' || ch == 'Y'){
			sum += 4;
		}else if (ch == 'K'){
			sum += 5;
		}else if (ch == 'J' || ch == 'X'){
			sum += 8;
		}else if (ch == 'Q' || ch == 'Z'){
			sum += 10;
		}
		
		p++;
	}
	
	return sum;
}

