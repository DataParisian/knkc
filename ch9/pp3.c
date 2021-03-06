/* KNKC chapter 9 programming project 9
 * Sundeep Kolli 22-feb-2014
 * Program: pp9.c
 * Purpose: Modify the programming project 9 from chapter 8 so that it 
 * includes the following functions:
 *     - void generate_random_walk(char walk[10][10]);
 *     - void print_array(char walk[10][10]);
 * main first calls generate_random_walk which initializes the array to 
 * contain '.' characters and then replaces some of these characters by the 
 * letters A through Z as described in the original project. main then calls 
 * print_array to display the array on the screen.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW_COUNT 10
#define COL_COUNT 10

void generate_random_walk(char walk[ROW_COUNT][COL_COUNT]);
void print_array(char walk[ROW_COUNT][COL_COUNT]);

int main(void){

	char game[ROW_COUNT][COL_COUNT] = {{'.'}};
	
	
	generate_random_walk(game);
	print_array(game);
			
	return 0;
}

void generate_random_walk(char walk[ROW_COUNT][COL_COUNT]){

	int i, j, row = 0, col = 0;
	int tempRow, tempCol, rowUpdate, colUpdate;
	int updateCount;
	
	for (i = 0; i < ROW_COUNT; i++){	
		for (j = 0; j < COL_COUNT; j++){
			walk[i][j] = '.';
		}
	}
	
	walk[row][col] = 'A';
	
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
			|| walk[tempRow][tempCol] != '.'){
				
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
							printf (" %c", walk[i][j]);
						}
						printf ("\n");
					}
					exit (0);
			}
		}
		
		row = tempRow;
		col = tempCol;
		
		walk[row][col] = 'A' + i;
	
	}
}

void print_array(char walk[ROW_COUNT][COL_COUNT]){
	int i, j;

	for (i = 0; i < ROW_COUNT; i++){
		for (j = 0; j < COL_COUNT; j++){
			printf (" %c", walk[i][j]);
		}
		printf ("\n");
	}
}


