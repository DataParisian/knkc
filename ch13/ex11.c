/* KNKC chapter 13 exercise 11
 * Sundeep Kolli 17-apr-2014
 * Program: ex11.c
 * Purpose: Modify the strcmp function in the Q&A section of chapter 13 to use 
 * pointer arithmetic instead of array subscripting.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include<stdio.h>

int my_strcmp(char *s, char *t);

#define N 100

int main(void){
	char str1[N], str2[N];
	
	printf("Enter the first string: ");
	gets(str1);
		
	printf("Enter the second string: ");
	gets(str2);
	
	printf("Comparing strings: %d\n", my_strcmp(str1, str2));
				
	return 0;
}

int my_strcmp(char *s, char *t){
	char *p1 = s, *p2 = t;
	
	for (; *p1 == *p2; p1++, p2++)
		if (*p1 == '\0')
			return 0;
	
	return (*p1 - *p2);	
}

