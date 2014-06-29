/* KNKC chapter 12 exercise 10
 * Sundeep Kolli 01-apr-2014
 * Program: ex10.c
 * Purpose: Modify the find_middle function of Section 11.5 so that it uses 
 * pointer arithmetic to calculate the return value.
*/

#include <stdio.h>

#define N 6

int *find_middle(int a[], int n);

int main(void){
	int a[N] = {1, 2, 3, 4, 5, 6};
	
	printf("Middle element: %d\n", *find_middle(a, N));
	
	return 0;
}

int *find_middle(int a[], int n){
	return (a + n/2);
}

