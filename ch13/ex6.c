/* KNKC chapter 13 exercise 6
 * Sundeep Kolli 17-apr-2014
 * Program: ex6.c
 * Purpose: Write a function named censor that modifies a string by replacing 
 * every occurence of foo by xxx. Make the function as short as possible 
 * without sacrifying clarity.
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

void censor(char str[]);

int main (void){
	
	char inputStr[N + 1];
		
	printf("Enter a sentence with less than %d characters: ", N);
	gets(inputStr);
	
	censor(inputStr);
	
	printf("Censored sentence: %s\n", inputStr);
	
	return 0;
}

void censor(char str[]){
	
	char *p = &str[0];
	
	while (*p != '\0'){
		if(*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
			*p = *(p + 1) = *(p + 2) = 'x';
		p++;
	}
}

