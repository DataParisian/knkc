/* KNKC chapter 13 Programming Project 1
 * Sundeep Kolli 20-apr-2014
 * Program: pp1.c
 * Purpose: Write a program that finds the smallest and the largest in a series 
 * of words input by the user if they were listed in dictionary order. The 
 * program must stop accepting input when the user enters a four-letter word. 
 * Assume that no word is more than 20 characters long.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define N 20

void sort_smallest_largest(const char *input, char *smallest, char *largest);


int main(void){
	char input[N + 1] = "";
	char smallest[N + 1] = "a";
	char largest[N + 1] = "a";
	
	printf("Enter word: ");
	gets(input);
	strcpy(smallest, input);
	strcpy(largest, input);
	
	for (;;){		
		if (strlen(input) == 4)
			break;
		printf("Enter word: ");
		gets(input);
		sort_smallest_largest(input, smallest, largest);				
	}
	
	printf("\n");
	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);
		
	return 0;
}

void sort_smallest_largest(const char *input, char *smallest, char *largest){
	
/*	printf("Smallest: %s\n", smallest);*/
/*	printf("Largest: %s\n", largest);*/
/*	printf("Input: %s\n", input);*/
	
	if (strcmp(input, smallest) < 0)
		strcpy(smallest, input);
/*	printf("Smallest: %s\n", smallest);*/
	
	if (strcmp(input, largest) > 0)
		strcpy(largest, input);
/*	printf("Largest: %s\n", largest);*/
}

