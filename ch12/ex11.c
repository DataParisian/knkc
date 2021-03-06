/* KNKC chapter 12 exercise 11
 * Sundeep Kolli 02-apr-2014
 * Program: ex11.c
 * Purpose: Modify the find_largest function so that it uses pointer 
 * arithmetic to visit array elements.
*/

#include <stdio.h>

#define N 6

int find_largest(int a[], int n);

int main(void){
	int a[N] = {1, 2, 3, 4, 5, 6};
	
	printf("Largest: %d\n", find_largest(a, N));
	
	return 0;
}

int find_largest(int a[], int n){

	int max, *p;

	p = a;
	max = *p;

	for (; p < a + n; p++)
		if (*p > max)
			max = *p;

	return max;
}

