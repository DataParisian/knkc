/* KNKC chapter 13 exercise 4
 * Sundeep Kolli 16-apr-2014
 * Program: ex4.c
 * Purpose: Modify the read_line function in the following ways:
 *	a) Have it skip white space before storing input characters.
 *  b) Have it stop reading at the first white space character. Hint: To 
 *	   determine whether or not a character is a white space, call isspace 
 *     function.
 *  c) Have it stop reading at the first new-line character, then store the 
 *     new-line character in the string.
 *  d) Have it leave behind characters that it deosn't have room to store.
*/

#include <stdio.h>
#include <ctype.h>

#define N 20

int read_line(char str[], int n);

int main (void){
	
	char inputStr[N + 1];
		
	printf("Enter a sentence with less than %d characters: ", N);
	read_line(inputStr, N);
	
	printf("Sentence: %s\n", inputStr);
	
	return 0;
}

/* a) read_line version skips white space before storing input characters */
/*int read_line(char str[], int n){*/
/*	int ch, i = 0, j = 0;*/

/*	while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n'){*/
/*		if (j >= n)*/
/*			return 0;*/
/*		j++;*/
/*	}*/
/*	*/
/*	*/
/*	str[i++] = ch;*/
/*		*/
/*	while ((ch = getchar()) != '\n')*/
/*		if (i < n)*/
/*			str[i++] = ch;*/
/*	str[i] = '\0';*/
/*	*/
/*	return i;*/
/*}*/

/* b) read_line version that stops reading input at the first white space. It 
 *    uses the isspace function */
/*int read_line(char str[], int n){*/
/*	int ch, i = 0;*/
/*			*/
/*	while ((ch = getchar()) != '\n'){		*/
/*		if (isspace(ch))*/
/*			break;			*/
/*		if (i < n)*/
/*			str[i++] = ch;	*/
/*	}*/
/*	str[i] = '\0';*/
/*	return i;*/
/*}*/

/* c) read_line version that stops reading input at the first new-line 
 *    character. It then stores the new-line character in the string.
*/
/*int read_line(char str[], int n){*/
/*	int ch, i = 0;*/
/*	*/
/*	do {*/
/*		ch = getchar();*/
/*		if (i < n)*/
/*			str[i++] = ch;*/
/*	}while (ch != '\n');*/
/*	*/
/*	str[i] = '\0';*/
/*	*/
/*	return i;*/
/*}*/

/* d) read_line version that leaves behind the characters that it doesn't have
 *    the room to store.
*/

int read_line(char str[], int n){
	int ch, i = 0;
			
	while (i < n){
		ch = getchar();
		if (ch == '\n')
			break;
		str[i++] = ch;				
	}
	str[i] = '\0';
	
	return i;
}

