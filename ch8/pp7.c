/* KNKC chapter 8 programming project 7
 * Sundeep Kolli 01-feb-2014
 * Program: pp7.c
 * Purpose: write a program that reads a 5 x 5 array of integers 
 * and prints the row and columns sums.
*/

#include <stdio.h>

#define ROW_COUNT ((int) (sizeof(inputArr) / sizeof(inputArr[0])))
#define COL_COUNT ((int) (sizeof(inputArr[0]) / sizeof(inputArr[0][0])))

int main(void){

	int i, j, inputArr[5][5] = {{0}};
	long rowSum, colSum;
	
	for (i = 0; i < ROW_COUNT; i++){
		printf ("Enter row %d: ", i + 1);
		for (j = 0; j < COL_COUNT; j++){
			scanf("%d", &inputArr[i][j]);
		}
	}
	
	printf ("Row totals:");
	for (i = 0; i < ROW_COUNT; i++){
		rowSum = 0.0;
		for (j = 0; j < COL_COUNT; j++){
			rowSum += inputArr[i][j];
		}
		printf (" %ld", rowSum);
	}
	printf ("\n");
	
	
	printf ("Column totals:");
	for (i = 0; i < COL_COUNT; i++){
		colSum = 0.0;
		for (j = 0; j < ROW_COUNT; j++){
			colSum += inputArr[j][i];
		}
		printf (" %ld", colSum);
	}
	printf ("\n");
	
	return 0;
}
