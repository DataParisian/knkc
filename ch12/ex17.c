/* KNKC chapter 12 exercise 17
 * Sundeep Kolli 03-apr-2014
 * Program: ex17.c
 * Purpose: Rewrite the following function to use pointer arithmetic instead of 
 * array subscripting. Use a single loop instead of nested loops.
 *       int sum_two_dimensional_array(const int a[][LEN], int n){
 *		 	int i, j, sum = 0;
 *			
 *			for (i = 0; i < n; i++)
 *				for (j = 0; j < LEN; j++)
 *					sum += a[i][j];
 *
 *			return sum;
 *       }
*/

#include <stdio.h>

#define N 7
#define LEN 6

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void){	
	
	const int a[N][LEN] = {{18, 25, 27, 30, 21, 15},
					 {12, 15, 17, 23, 12, 7},
					 {12, 15, 17, 23, 12, 7},
					 {12, 15, 17, 23, 12, 7},
					 {12, 15, 31, 23, 12, 7},
					 {12, 15, 17, 23, 12, 7},
					 {21, 25, 3, 23, 19, 17}};
	
	
	
	printf("Sum: %d\n", sum_two_dimensional_array(a, N));
	
	
	return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n){
	int *p, sum = 0;
	
	for (p = &a[0][0]; p <= &a[n-1][LEN - 1]; p++)
			sum += *p;

	return sum;
}

/*int sum_two_dimensional_array(const int a[][LEN], int n){*/
/*	int i, j, sum = 0;*/
/*	*/
/*	for (i = 0; i < n; i++)*/
/*		for (j = 0; j < LEN; j++)*/
/*			sum += a[i][j];*/

/*	return sum;*/
/*}*/

