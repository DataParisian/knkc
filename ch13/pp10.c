/* KNKC chapter 13 programming project 10
 * Sundeep Kolli 27-apr-2014
 * Program: pp10.c
 * Purpose: Modify pp11.c from ch7 so that it includes the following function:
 * 		void reverse_name(char *name);
 * The function expects name to point to a string containing a first name 
 * followed by a last name. It modifies the string so that the last name comes 
 * first, follwed by a comma, a space, the first initial and a period. The 
 * original string may contain extra spaces before the first name, between the 
 * first and last names, and after the last name.
*/

#include <stdio.h>
#include <ctype.h>

#define N 100

void reverse_name(char *name);

int main(void)
{
	char name[N];
		
	printf ("Enter a first and last name (max %d characters): ", N);
	gets(name);	
	
	reverse_name(name);
	
	return 0;
}

void reverse_name(char *name){
	
	char *c;
	int initialFirstName;
	
	c = name;
	while (*c  == ' '){
		c++;		
	}
	initialFirstName = toupper(*c);
	
	while (*c != ' '){
		c++;
	}
	
	while (*c){
		putchar(*c);
		c++;
	}
	
	putchar(',');
	putchar(' ');
	putchar(initialFirstName);
	putchar('\n');
	
}

