/* KNKC chapter 7 programming project 5
 * Sundeep Kolli 29-dec-2013
 * Program: pp5.c
 * Purpose: program to compute the value of a word by summing 
 * the values of its letters similar to the SCRABBLE Crossword game
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
	
	char ch;
	int sum = 0;

	printf ("Enter a word: ");
	
	while ((ch = getchar()) != '\n'){

		ch = toupper(ch);
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
	}

	printf ("Scrabble value: %d\n", sum);			

	return 0;
}
