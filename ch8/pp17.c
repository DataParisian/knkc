/* KNKC chapter 8 programming project 17
 * Sundeep Kolli 08-feb-2014
 * Program: pp17.c
 * Purpose: Write a program that prints an n x n square of magic 
 * numbers (a square arrangement of numbers 1, 2, ..., n² in which the sums
 * of the rows, columns and diagonals are all the same). The user will specify
 * the value of n. 
*/

#include <stdio.h>

#define MAX_MAGIC 100

int main (void){

	int i, j, squareSize;
	int tempRow, tempCol, row, col;
	int magic[MAX_MAGIC][MAX_MAGIC] = {{0}};
		
	printf ("This program creates a magic square of a specified size.\n");
	printf ("The size must be an odd number between 1 and 99.\n");		

	printf ("Enter size of magic square: ");
	scanf ("%d", &squareSize);
	
	while (squareSize >= MAX_MAGIC || ((squareSize % 2) == 0)){
		printf ("Error: Please select an odd number between 1 and 99:");
		scanf ("%d", &squareSize);
	}
	
	row = 0;
	col = squareSize / 2;
	
	magic[row][col] = 1;

	for (i = 1; i < (squareSize * squareSize); i++){
		tempRow = (squareSize + row - 1) % squareSize;
		tempCol = (col + 1) % squareSize;
		if (magic[tempRow][tempCol] == 0){
			row = tempRow;
			col = tempCol;
		}else{
			row++;
		}		
		magic[row][col] =  i + 1;		
	}
		
	for (i = 0; i < squareSize; i++){
		for (j = 0; j < squareSize; j++){
			printf ("%2d ", magic[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
