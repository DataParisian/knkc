/* KNKC chapter 12 exercise 18
 * Sundeep Kolli 03-apr-2014
 * Program: ex18.c
 * Purpose: Write the evaluate_position described in ex13.c of chapter 9. Use 
 * pointer arithmetic - not subscripting - to visit the array elements. Use a 
 * single loop instead of nested loops.
*/

#include <stdio.h>

#define N 8

int evaluate_position(char board[N][N]);

int main (void){	
	char c, board[N][N] = {{' '}};
/*						{{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},*/
/*						{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},*/
/*						{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},*/
/*						{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},*/
/*						{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},*/
/*						{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},*/
/*						{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},*/
/*						{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},};*/
	int i, j, boardValue = 0;
		
	for (i = 0; i < N; i++){
		printf ("Enter the pieces (ex: RNBQKBNR) for %d: ", (i + 1));
		for (j = 0; j < N; j++){
			c = getchar();
			board[i][j] = c;
		}
		c = getchar();
	}
	
/*	for (i = 0; i < N; i++){	*/
/*		for (j = 0; j < N; j++){*/
/*			printf ("%c", board[i][j]);*/
/*		}*/
/*		printf ("\n");*/
/*	}*/
	
	boardValue = evaluate_position(board);
	
	if (boardValue > 0){
		printf ("White has the advantage.\n");
	}else if (boardValue < 0){
		printf ("Black has the advantage.\n");
	}else{
		printf ("Both white and black have the same value\n");
	}
	
	return 0;
}

int evaluate_position(char board[N][N]){
	int white = 0, black = 0;
	char *p;
	for (p = &board[0][0]; p <= &board[N-1][N-1]; p++){
					
		switch (*p){
			case ('Q'): white += 9; break;
			case ('R'): white += 5; break;
			case ('B'): white += 3; break;
			case ('N'): white += 3; break;
			case ('P'): white += 1; break;
			case ('q'): black += 9; break;
			case ('r'): black += 5; break;
			case ('b'): black += 3; break;
			case ('n'): black += 3; break;
			case ('p'): black += 1; break; 
		}		
	}
	
	printf ("white: %d\n", white);
	printf ("black: %d\n", black);
	
	return (white - black);
}

