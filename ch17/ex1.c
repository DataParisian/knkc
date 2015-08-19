/* KNKC chapter 17 exercise 1
 * Sundeep Kolli 03-August-2014
 * Program: ex1.c
 * Purpose: Write a function named my_malloc that serves as a "wrapper" for 
 * malloc. When we call my_malloc and ask it to allocate n bytes, it in turn 
 * calls malloc, tests to make sure that malloc doesn't return a null pointer, 
 * and then returns the pointer from malloc. Have my_malloc print an error 
 * message and terminate the program if malloc returns a null pointer.
*/

#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n);

int main(void){
	
	unsigned long n;
	void *p;
	
	
	printf("Enter the number of bytes you wan't to allocate: ");
	scanf("%lu", &n);
	
	p = my_malloc((size_t)n);
	printf("Successfully allocated %lu bytes.\n", n);
	
	free(p);
	
	return 0;
}

void *my_malloc(size_t n){
	
	void *p;
	
	if((p = malloc(n)) == NULL){
		printf("malloc failed to allocate memory in my_malloc.\n");
		exit(EXIT_FAILURE);
	}else{
		return p;
	}
	
}
