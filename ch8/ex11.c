/* KNKC chapter 8 exercise 11
 * Sundeep Kolli 01-feb-2014
 * Program: ex11.c
 * Purpose: write a declaration for an 8 x 8 char array named checker_board
 * and initialize it with one character per array element (as shown in the
 * book) using a loop.
*/

#include <stdio.h>

int main (void){
	char checker_board[8][8];
    int i, j;
    
    
    for (i = 0; i < 8; i++){
    	for (j = 0; j < 8; j++){
    		if (((i + j) % 2) != 0){
    			checker_board[i][j] = 'R';
    		}else{
    			checker_board[i][j] = 'B';
    		}
    	}
    }
    
    for (i = 0; i < 8; i++){
    	for (j = 0; j < 8; j++){
    		printf (" %c", checker_board[i][j]);
    	}
    	printf ("\n");
    }
	
	return 0;
}
