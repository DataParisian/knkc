/* KNKC chapter 17 exercise 17
 * Sundeep Kolli 15-March-2015
 * Program: ex17.c
 * Purpose: Let a be an array of 100 integers. Write a call of qsort that sorts 
 * only the last 50 elements in a. (You don't need to write the comparison  
 * function)
*/

#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *p, const void *q);

int main(void){
	
	int i, a[100];
	
	for (i = 0; i < 100; i++){
		a[i] = rand() % 100 + 1;
	}
	
	for (i = 0; i < 100; i++){
		printf("Before sorting: %d\n", a[i]);
	}
	
	qsort(&a[50], 50, sizeof(int), compare_ints);
	
	for (i = 0; i < 100; i++){
		printf("After sorting: %d\n", a[i]);
	}
	
	return 0;
}

int compare_ints(const void *p, const void *q){
	
	const int *i = p;
	const int *j = q;
	
	return (int)(*i - *j);
}


