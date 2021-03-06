/* KNKC chapter 12 exercise 13
 * Sundeep Kolli 02-apr-2014
 * Program: ex13.c
 * Purpose: Rewrite the program fragment from Section 8.2 in which two nested 
 * for loops initialized the array ident for use as an identity matrix. Rewrite 
 * this code using a single pointer to step through the array one element at a
 * time.
*/

#include <stdio.h>

#define N 10

void printArr(double a[][N], int row, int col);

int main(void){
	
	double ident[N][N];
	double *p;
	int zeroCount = N;

	
	for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++){
			
		if (zeroCount == N){
			*p = 1.0;
			zeroCount = 0;						
		}else{
			*p = 0;
			zeroCount++;			
		}
	}
	
	printArr(ident, N, N);
	
	return 0;
}

void printArr(double a[][N], int row, int col){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%.0f ", a[i][j]);
		}
		printf("\n");
	}
}

