/* KNKC chapter 8 exercise 10
 * Sundeep Kolli 01-feb-2014
 * Program: ex10.c
 * Purpose: write a declaration for an 8 x 8 char array named chess_board
 * and initialize it with one character per array element (as shown in the
 * book).
*/

#include <stdio.h>

int main (void){
	char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                			  {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                			  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                			  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                			  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                			  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                			  {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                			  {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    int i, j;
    
    for (i = 0; i < 8; i++){
    	for (j = 0; j < 8; j++){
    		printf (" %c", chess_board[i][j]);
    	}
    	printf ("\n");
    }
	
	return 0;
}