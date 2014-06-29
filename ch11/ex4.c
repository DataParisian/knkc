/* KNKC chapter 11 exercise 4
 * Sundeep Kolli 17-mar-2014
 * Program: ex4.c
 * Purpose: Write a function which exchanges the values of two variables 
 * when passed their addresses.
*/

#include <stdio.h>

void swap(int *p, int *q);

int main (void){
	
	int i, j;
		
	printf("Enter 2 integers: ");
	scanf("%d", &i);
	scanf("%d", &j);
	
	printf("Before swap: i = %d   j = %d\n", i, j);
	
	swap(&i, &j);
	
	printf("After swap: i = %d   j = %d\n", i, j);
	
	return 0;
}

void swap(int *p, int *q){
	int temp;
	
	temp = *p;
		
	*p = *q;
	
	*q = temp;
}

