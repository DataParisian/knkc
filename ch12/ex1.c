/* KNKC chapter 11 exercise 1
 * Sundeep Kolli 31-mar-2014
 * Program: ex1.c
 * Purpose: Answer each of the following.
*/

#include <stdio.h>

int main (void){
	
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];
	
	/* 1) What is the value of * (p + 3)*/	
	/*    Ans: 14*/
	/*	printf ("* (p + 3): %d\n", * (p + 3));	*/
		
	/* 2) What is the value of * (q - 3)*/	
	/*    Ans: 34*/
	/*	printf ("* (q - 3): %d\n", * (q - 3));*/
	
	/* 3) What is the value of (q - p)*/	
	/*    Ans: 4*/
	/*	printf ("(q - p): %d\n", (int)(q - p));*/
	
	/* 4) Is the condition p < q true or false?*/	
	/*    Ans: true represented as 1*/
	/*	printf ("p < q: %d\n", (p < q));*/
	
	/* 4) Is the condition *p < *q true or false?*/	
	/*    Ans: false since *p = 15 and *q = 2*/
	/*         represented as 0*/
	printf ("*p < *q: %d\n", (*p < *q));
	
	return 0;
}
