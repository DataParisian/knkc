/* KNKC chapter 13 exercise 16
 * Sundeep Kolli 19-apr-2014
 * Program: ex16.c
 * Purpose: Use techniques of Section 13.6 to condense the count_spaces 
 * function of Section 13.4. In particular, replace the for loop with a while 
 * statement.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <string.h>

int count_spaces(const char *s);

#define N 100

int main(void){
	char inputStr[N + 1] = "";
	
	printf("Enter a string with less than %d characters: ", N);
	gets(inputStr);
	
	printf("There a %d space characters\n", count_spaces(inputStr));
	
	return 0;
}

int count_spaces(const char *s){	
	int count = 0;
	
	while (*s){
		if (*s == ' ')
			count++;
		s++;
	}
	return count;
}

