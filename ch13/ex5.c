/* KNKC chapter 13 exercise 5
 * Sundeep Kolli 17-apr-2014
 * Program: ex5.c
 * Purpose: Write a function named capitalize that takes in a null-terminated 
 * string argument and converts all letters to upper case using the toupper 
 * function. 
 *  a) Use array subscripting to access characters in the string.
 *  b) Use pointer arithmetic to access characters in the string.
*/

/* UNSAFE UNSAFE UNSAFE*/
/* UNSAFE UNSAFE UNSAFE*/
/* UNSAFE UNSAFE UNSAFE*/
/* UNSAFE UNSAFE UNSAFE*/
/* UNSAFE UNSAFE UNSAFE*/
/* UNSAFE UNSAFE UNSAFE*/
/* UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <ctype.h>

#define N 100

char *capitalize(char str[]);
/*void capitalize(char str[]);*/

int main (void){
	
	char inputStr[N + 1];
		
	printf("Enter a sentence with less than %d characters: ", N);
	gets(inputStr);
	
	printf("Capitalized sentence: %s\n", capitalize(inputStr));
	
	return 0;
}

char *capitalize(char str[]){
	
	char *p = &str[0];
/*	int i = 0;*/
	
	/* Array subscripting*/			
/*	while (str[i] != '\0'){*/
/*		str[i] = toupper(str[i]);*/
/*		i++;*/
/*	}*/

	/* Pointer arithmetic*/
	
	while (*p != '\0'){
		*p = toupper(*p);
		p++;
	}


	return str;	
}

