/* KNKC chapter 9 exercise 13
 * Sundeep Kolli 18-feb-2014
 * Program: ex13.c
 * Purpose: Write a function int evaluate_position(char board[8][8]); 
 * board represents a configuration of pieces on a chessboard, where the 
 * letters K, Q, R, B, N, P represent white pieces and k, q, r,b, n represent
 * black pieces. The function should sum the values of white pieces (Q = 9, 
 * R = 5, B = 3, N = 3, P = 1) and do the same for the black pieces. The 
 * function should return the difference between the two numbers which if 
 * posititve means an advantage for white and if negative, means an advantage 
 * for black.
*/

#include <stdio.h>

#define N 8

int evaluate_position(char board[8][8]);

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

int evaluate_position(char board[8][8]){
	int white = 0, black = 0;
	int i, j;
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){			
			switch (board[i][j]){
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
	}
	
	printf ("white: %d\n", white);
	printf ("black: %d\n", black);
	
	return (white - black);
}

