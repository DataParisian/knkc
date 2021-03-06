/* KNKC chapter 8 programming project 13
 * Sundeep Kolli 05-feb-2014
 * Program: pp13.c
 * Purpose: Modify the Programming Project 11 from chapter 7 so that the 
 * program labels its output. You may assume that the last name is no more 
 * than 20 characters long.
*/

#include <stdio.h>

#define LAST_NAME_SIZE 20
#define TRUE 1
#define FALSE 0

int main (void){
	
	typedef int Bool;

	char lastName[LAST_NAME_SIZE] = {'a'};
	char c, firstNameChar;
	int i = 0, charCount = 0;
	Bool inLastName = FALSE;
	
	printf ("Enter a first and last name: ");
	firstNameChar = getchar();
	
	while ((c = getchar()) != '\n' && charCount < LAST_NAME_SIZE){
		if (inLastName == FALSE){
			if (c == ' '){
				inLastName = TRUE;
			}				
		}else{
			lastName[i] = c;
			i++;
		}
		charCount++;
	}
	lastName[i] = '\n';
	
	printf ("You entered the name: ");
	
	i = 0;
	while ((c = lastName[i]) != '\n'){
		putchar(c);
		i++;
	}
	printf (", %c.\n", firstNameChar);
	
	return 0;
}
