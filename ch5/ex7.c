/* KNKC chapter 5 exercise 7
 * Sundeep Kolli 17-dec-2013
 * Program: ex7.c
 * Purpose: what is the output if i has the value 17 ?
 * What is the output if i has the value -17 ? 
*/

#include <stdio.h>

int main (void)
{
	int i = 17;	
	
	/* 17 */ 
	printf ("%d\n", i >= 0 ? i : -i);
	
	i = -17;	
	/* 17 */ 
	printf ("%d\n", i >= 0 ? i : -i);	

	return 0;
}
