/* KNKC chapter 10 programming project 3
 * Sundeep Kolli 02-mar-2014
 * Program: pp3.c
 * Purpose: Remove num_in_rank, num_in_suit and card_exists arrays from 
 * the poker.c program of section 10.5. Have the program store the cards 
 * in a 5 x 2 array instead. Each row of the array will represent a card. 
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define NUM_COLS 2
#define RANK_COL 0
#define SUIT_COL 1

/* external variables */
bool straight, flush, four, three;
int pairs; /* can be 0, 1 or 2 */

/* prototypes */
void read_cards(int hand[NUM_CARDS][NUM_COLS]);
void analyze_hand(int hand[NUM_CARDS][NUM_COLS]);
void print_result(void);

/*************************************************************
 * main: Calls read_cards, analyze_hand and print_result     *
 *       repeatedly.                                         *
 *************************************************************/

int main(void){

	int hand[NUM_CARDS][NUM_COLS] = {{0}};
	
	for (;;){
		read_cards(hand);
		analyze_hand(hand);
		print_result();
	}
}

/*************************************************************
 * read_cards: Reads the cards into the external             *
 *             variables num_in_rank and num_in_suit;        *
 *             checks for bad cards and duplicate cards.     *
 *************************************************************/
void read_cards(int hand[][NUM_COLS]){
	
	int i, j;
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card, card_exists;
	int cards_read = 0;	
	
	for (i = 0; i < NUM_CARDS; i++){		
		for (j = 0; j < NUM_COLS; j++){
			hand[i][j] = 0;
		}
	}
	
	while (cards_read < NUM_CARDS){
		
		bad_card = false;
		card_exists = false;
		
		printf ("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch){
			case '0':				exit(EXIT_SUCCESS);
			case '2':				rank = 1; break;
			case '3':				rank = 2; break;
			case '4':				rank = 3; break;
			case '5':				rank = 4; break;
			case '6':				rank = 5; break;
			case '7':				rank = 6; break;
			case '8':				rank = 7; break;
			case '9':				rank = 8; break;
			case 't': case 'T':		rank = 9; break;
			case 'j': case 'J':		rank = 10; break;
			case 'q': case 'Q':		rank = 11; break;
			case 'k': case 'K':		rank = 12; break;
			case 'a': case 'A':		rank = 13; break;
			default:                bad_card = true;
		}
		
		suit_ch = getchar();
		switch (suit_ch){
			case 'c': case 'C': suit = 1; break;
			case 'd': case 'D': suit = 2; break;
			case 'h': case 'H': suit = 3; break;
			case 's': case 'S': suit = 4; break;
			default:            bad_card = true;
		}
		
		while ((ch = getchar()) != '\n'){
			if (ch != ' '){
				bad_card = true;
			}
		}
		
		for (i = 0; i < NUM_CARDS; i++){		
			if (hand[i][RANK_COL] == rank && hand[i][SUIT_COL] == suit){
				card_exists = true;
			}				
		}
		
		if (bad_card){
			printf ("Bad card; ignored.\n");
		}else if (card_exists){
			printf ("Duplicate card; ignored.\n");
		}else{
			hand[cards_read][RANK_COL] = rank;
			hand[cards_read][SUIT_COL] = suit;
			cards_read++;
		}
	}
}

/*************************************************************
 * analyze_hand:                                             *
 *************************************************************/
void analyze_hand(int hand[][NUM_COLS]){
		
	int rank_matches;
	int rank, suit;
	int min_rank, max_rank;
	int i, j;
	
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;
	
	/* checks for flush */
	suit = hand[0][SUIT_COL];
	for (i = 1; i < NUM_CARDS; i++){
		if (hand[i][SUIT_COL] == suit){
			flush = true;
		}else{
			flush = false;
		}
	}
	
	/* checks for straight */
	min_rank = hand[0][RANK_COL];
	max_rank = hand[0][RANK_COL];
	for (i = 1; i < NUM_CARDS; i++){
		if (hand[i][RANK_COL] < min_rank){			
			min_rank = hand[i][RANK_COL];
		}
		if (hand[i][RANK_COL] > max_rank){			
			max_rank = hand[i][RANK_COL];
		}
	}
	
	if ((max_rank - min_rank + 1) % NUM_CARDS == 0){
		straight = true;
	}
	
	/*9 1 9 9 9*/
	/* checks for 4-of-a-kind, 3-of-a-kind and pairs */
	for (i = 0; i < NUM_CARDS; i++){
		rank = hand[i][RANK_COL];
/*		printf ("rank1: %d\n", rank);*/
		rank_matches = 1;
		for (j = i+1; j < NUM_CARDS; j++){
/*			printf ("rank2: %d\n", hand[j][RANK_COL]);*/
			if (hand[j][RANK_COL] == rank){
				rank_matches++;
			}
		}
		switch (rank_matches){
			case 4: four = true; break;
			case 3: three = true; break;
			case 2: pairs++; break;
		}
	}
}

/*************************************************************
 * print_result: Prints the classification of the hand,      *
 *               based on the values of the external         *
 *               variables straight, flush, four, three      *
 *               and paris.                                  *
 *************************************************************/
void print_result(void){
	
	if (straight && flush){
		printf ("Straight flush");
	}else if (four){
		printf ("Four of a kind");
	}else if (three && pairs == 1){
		printf ("Full house");
	}else if (flush){
		printf ("Flush");
	}else if (straight){
		printf ("Straight");
	}else if (three){
		printf ("Three of a kind");
	}else if (pairs == 2){
		printf ("Two pairs");
	}else if (pairs == 1){
		printf ("Pair");
	}else{
		printf ("High card");
	}
	
	printf ("\n\n");
}

