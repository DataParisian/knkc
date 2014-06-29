/* KNKC chapter 7 programming project 4
 * Sundeep Kolli 27-dec-2013
 * Program: pp4.c
 * Purpose: program to translate an alphabetic phone number 
 * into numeric form
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
	
	char ch;

	printf ("Enter phone number: ");
	
	while ((ch = getchar()) != '\n'){

		ch = toupper(ch);
		if (ch == 'A' || ch == 'B' || ch == 'C'){
			putchar('2');
		}else if (ch == 'D' || ch == 'E' || ch == 'F'){
			putchar('3');
		}else if (ch == 'G' || ch == 'H' || ch == 'I'){
			putchar('4');
		}else if (ch == 'J' || ch == 'K' || ch == 'L'){
			putchar('5');
		}else if (ch == 'M' || ch == 'N' || ch == 'O'){
			putchar('6');
		}else if (ch == 'P' || ch == 'R' || ch == 'S'){
			putchar('7');
		}else if (ch == 'T' || ch == 'U' || ch == 'V'){
			putchar('8');
		}else if (ch == 'W' || ch == 'X' || ch == 'Y'){
			putchar('9');
		}else{
			putchar(ch);
		}			
	}

	printf ("\n");

	return 0;
}
