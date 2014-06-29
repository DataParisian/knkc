/* KNKC chapter 9 exercise 9
 * Sundeep Kolli 17-feb-2014
 * Program: ex9.c
 * Purpose: What is the output of the following program?
 * i = 1, j = 2
 *
 * Since swap is a void function, it returns nothing and since it swaps 
 * copies of i and j inside its body, it has no effect on the i and j in 
 * main function. 
*/

# include <stdio.h>

void swap (int a, int b);

int main (void){
	
	int i = 1, j = 2;

	swap (i, j);
	
	printf ("i = %d, j = %d\n", i, j);

	return 0;
}

void swap (int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

