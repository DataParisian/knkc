/* KNKC chapter 8 programming project 9
 * Sundeep Kolli 02-feb-2014
 * Program: pp9.c
 * Purpose: write a program that generates a "random walk" across a 10 x 10 
 * array with all elements initially containing the '.' character, one element
 * at a time and replacing '.' with letters from A to Z. Program terminates 
 * when Z is reached or no move is possible without replacing a previously 
 * assigned letter value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW_COUNT ((int) (sizeof(game) / sizeof(game[0])))
#define COL_COUNT ((int) (sizeof(game[0]) / sizeof(game[0][0])))

int main(void){

	char game[10][10] = {{'.'}};
	int i, j, row = 0, col = 0;
	int tempRow, tempCol, rowUpdate, colUpdate;
	int updateCount;
	
	for (i = 0; i < ROW_COUNT; i++){	
		for (j = 0; j < COL_COUNT; j++){
			game[i][j] = '.';
		}
	}
	
	game[row][col] = 'A';
	
	srand((unsigned)time(NULL));
		
	for (i = 1; i < 26; i++){

		updateCount = 0;
		tempRow = row;
		tempCol = col;
		
		j = rand() % 4;
		switch (j){
			case 0 : rowUpdate = 0; colUpdate = 1; break;
			case 1 : rowUpdate = 1; colUpdate = 0; break;
			case 2 : rowUpdate = 0; colUpdate = -1; break;
			case 3 : rowUpdate = -1; colUpdate = 0; break;
		}
		tempRow += rowUpdate;
		tempCol += colUpdate;
		updateCount++;
		
/*		printf ("row: %d col: %d j: %d tempRow: %d tempCol: %d\n",*/
/*					row, col, j, tempRow, tempCol); */
		while (tempRow < 0 || tempRow > 9 
			|| tempCol < 0 || tempCol > 9
			|| game[tempRow][tempCol] != '.'){
				
			if (updateCount < 4){
				j = (j + 1) % 4;
				switch (j){
					case 0 : rowUpdate = 0; colUpdate = 1; break;
					case 1 : rowUpdate = 1; colUpdate = 0; break;
					case 2 : rowUpdate = 0; colUpdate = -1; break;
					case 3 : rowUpdate = -1; colUpdate = 0; break;
				}
				tempRow = row + rowUpdate;
				tempCol = col + colUpdate;
				updateCount++;
			}else{
					for (i = 0; i < ROW_COUNT; i++){
						for (j = 0; j < COL_COUNT; j++){
							printf (" %c", game[i][j]);
						}
						printf ("\n");
					}
				return 0;
			}
		}
		
		row = tempRow;
		col = tempCol;
		
		game[row][col] = 'A' + i;				
	}
	
		for (i = 0; i < ROW_COUNT; i++){
			for (j = 0; j < COL_COUNT; j++){
				printf (" %c", game[i][j]);
			}
			printf ("\n");
		}
			
	return 0;
}
