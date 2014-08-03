/* KNKC chapter 17 exercise 2
 * Sundeep Kolli 03-August-2014
 * Program: ex2.c
 * Purpose: Write a function named duplicate that uses dynamic allocation to 
 * create a copy of a string. For example, the call
 *     p = duplicate(str);
 * would allocate space for a string of the same length as str, copy the 
 * contents of str into the new string and return a pointer to it. Have 
 * duplicate return a null pointer if the memory allocation fails.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

char *duplicate(const char *str);

int main(void){
	
	int i = 0;
	char ch, str[LEN + 1];
	char *new_str;
		
	printf("Enter a string of not more than %d characters: ", LEN);
	
	while ((ch = getchar()) != '\n' && i < LEN)
		str[i++] = ch;
	str[i] = '\0';
	
	new_str = duplicate(str);
	
	if (new_str != NULL){	
		printf("Duplicate string: \n");
		printf("%s\n", new_str);
	}
	
	free(new_str);
	
	return 0;
}

char *duplicate(const char *str){
	
	char *c;
	size_t n = strlen(str);	
	
	c = malloc((n + 1) * sizeof(char));
	if (c == NULL){
		printf("Memory allocation error.\n");
		return c;
	}
	strcpy(c, str);	
	
	return c;
}

