/* KNKC chapter 6 exercise 11
 * Sundeep Kolli 19-dec-2013
 * Program: ex11.c
 * Purpose: write the output of the following 
 * program fragment
*/

#include <stdio.h>

int main(void){

	int i, sum;
	
	sum = 0;
	
	/* 20 */
	for (i = 0; i < 10; i++){
		if (i % 2)
			continue;		
		sum += i;
	}
	
	printf ("%d\n", sum);

	return 0;
}
