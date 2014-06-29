/* KNKC chapter 13 exercise 14
 * Sundeep Kolli 17-apr-2014
 * Program: ex14.c
 * Purpose: What does the following program print?
 * Ans: Grinch
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
/*#include <string.h>*/

#define N 100

int main(void){
	char s[] = "Hsjodi", *p;
	
	for (p = s; *p; p++)
		--*p;
	puts(s);
				
	return 0;
}

