/* KNKC chapter 13 exercise 15
 * Sundeep Kolli 17-apr-2014
 * Program: ex15.c
 * Purpose: Given the definition of the function f below, answer the following
 * questions.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <string.h>

int f(char *s, char *t);

#define N 100

int main(void){
/*	char str1[N + 1] = "", str2[N + 1] = "";*/
	
	/* a) What is the value of f("abcd", "babc"); ?
	 * Ans: 3.
	*/
	printf("Ans: %d\n", f("abcd", "babc"));
	
	/* b) What is the value of f("abcd", "bcd"); ?
	 * Ans: 0.
	*/
	printf("Ans: %d\n", f("abcd", "bcd"));
		
	
	/*	c) f returns the subscript of the first character in the first string
	 *  that has no match in the second string.
	*/
	
	return 0;
}

int f(char *s, char *t){	
	char *p1, *p2;
	
	for (p1 = s; *p1; p1++){
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2) break;
		if (*p2 == '\0') break;
	}	
	return p1 - s;
}

