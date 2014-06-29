/* KNKC chapter 13 exercise 3
 * Sundeep Kolli 16-apr-2014
 * Program: ex3.c
 * Purpose: Suppose that we call scanf as follows:
 *			scanf("%d%s%d", &i, s, &j);
 *          If the user enters 12abc34 56def78, what will the values of i, s 
 *          and j after call (assume that i and j are int varibles and s is an 
 *          array of characters)?
*/

#include <stdio.h>

int main (void){
	int i, j;
	char s[30];	

	/* i will be 12, if the length of s permits, s has the value abc34. Since 
	 * scanf stops reading input at the first white space (except for white 
	 * space at the beginning of the input and puts back the remaining input 
	 * for next call, s will have the value abc34 and j will have 56.
	*/	
	printf("Enter input: ");
	scanf("%d%s%d", &i, s, &j);
	
	printf("i: %d\n", i);
	printf("s: %s\n", s);
	printf("j: %d\n", j);
	
	return 0;
}

