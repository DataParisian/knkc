#include <stdio.h>
#include <stdlib.h>
	
	enum Piece {PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY};
  	enum Color {BLACK, WHITE};
	struct Square{
		enum Piece p; 
		enum Color c;
	};



int main(void){

	int i, j;
	
		struct Square s[8][8] = {{{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, 
								{QUEEN, BLACK}, {KING, BLACK}, {BISHOP, BLACK},
								{KNIGHT, BLACK}, {ROOK, BLACK}},
							   {{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, 
								{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
								{PAWN, BLACK}, {PAWN, BLACK}},
							   {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, 
								{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
								{EMPTY, BLACK}, {EMPTY, BLACK}},
							   {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, 
								{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
								{EMPTY, BLACK}, {EMPTY, BLACK}},
							   {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, 
								{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
								{EMPTY, BLACK}, {EMPTY, BLACK}},
							   {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, 
								{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
								{EMPTY, BLACK}, {EMPTY, BLACK}},
							   {{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, 
								{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
								{PAWN, WHITE}, {PAWN, WHITE}},
							   {{ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, 
								{QUEEN, WHITE}, {KING, WHITE}, {BISHOP, WHITE},
								{KNIGHT, WHITE}, {ROOK, WHITE}}};
	
	for (i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			printf("%2.2d-%2.2d", s[i][j].p, s[i][j].c);
			printf("\t");
		}
		printf("\n");
	}
	
	return 0;
}