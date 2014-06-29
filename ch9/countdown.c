/* KNKC chapter 9 section 9.1
 * Sundeep Kolli 08-feb-2014
 * Program: countdown.c
 * Purpose: Prints a countdown. 
*/

#include <stdio.h>

void print_count(int n){
	printf ("T minus %d and counting\n", n);
}

int main (void){
	
	int i;
	
	for (i = 10; i > 0; i--)
		print_count(i);
	
	return 0;
}

