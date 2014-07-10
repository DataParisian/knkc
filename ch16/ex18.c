/* KNKC chapter 16 exercise 18
 * Sundeep Kolli 10-july-2014
 * Program: ex18.c
 * Purpose: Exercises on enumerated types.
*/
 
/*
 * a) Each square of a chessboard can hold one piece - a pawn, kinght, bishop, 
 * rook, queen or king - or it may be empty. Each piece is either black or 
 * white. Define two enumerated types: Piece, which has seven possible values 
 * (one of which is "empty"), and Color, which has two.
*/
		enum Piece {PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY};
  		enum Color {BLACK, WHITE};


/*
 * b) Using types from part (a), define a structure type named Square that can 
 * store both the type of a piece and its color.
*/
		struct Square {
 			enum Piece p; 
 			enum Color c;
 		};


/*
 * c) Using the Square type from part (b), declare an 8x8 array named board 
 * that can store the entire contents . 
*/
	struct Square s[8][8];

/*
 * d) Add an initializer to the declaration in part (c) so that the board's 
 * initial value corresponds to the usual arrangement of pieces at the start 
 * of a chess game. A square that's not occupied by a piece should have an 
 * "empty" piece value and the color black. 
*/
	struct Square s[][] = {{{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, 
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
