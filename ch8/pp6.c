/* KNKC chapter 8 programming project 6
 * Sundeep Kolli 01-feb-2014
 * Program: pp6.c
 * Purpose: write a "B1FF filter" that reads a message entered by the 
 * user and translates it into B1FF-speak. The program should convert 
 * the message to upper-case letters and subsitute digits for the following 
 * letters: A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5 and then append 
 * 10 or so exclamation marks.
*/

#include <stdio.h>
#include <ctype.h>

#define ARR_SIZE ((int) (sizeof(inputStr) / sizeof(inputStr[0])))

int main(void){

	int i = 0;
	char c, inputStr[100] = {'a'};
	
	
	printf ("Enter message: ");
	while ((c = getchar()) != '\n'){
		inputStr[i] = toupper(c);
		i++;
	}
	
	for (i = 0; i < ARR_SIZE; i++){
		switch (inputStr[i]){
			case ('A'): printf("4"); break;
			case ('B'): printf("8"); break;
			case ('E'): printf("3"); break;
			case ('I'): printf("1"); break;
			case ('O'): printf("0"); break;
			case ('S'): printf("5"); break;
			default: printf ("%c", inputStr[i]); 
		}
	}
	
	printf ("!!!!!!!!!!!!\n");
	
	return 0;
}
