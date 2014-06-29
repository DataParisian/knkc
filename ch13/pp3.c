/* KNKC chapter 13 Programming Project 3
 * Sundeep Kolli 26-apr-2014
 * Program: pp3.c
 * Purpose: Modify the deal.c program of section 8.2 so that it prints the full 
 * names of the cards it deals.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void){
	
	bool in_hand[NUM_SUITS][NUM_RANKS] = {{false}};
	int num_cards, rank, suit;
/*	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',*/
/*							  '9', 't', 'j', 'q', 'k', 'a'};*/
/*	const char suit_code[] = {'c', 'd', 'h', 's'};*/
	
	const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", 
							   "Eight", "Nine", "Ten", "Jack", "Queen", "King",
							   "Ace"};
	const char *suit_code[] = {"clubs", "diamonds", "hearts", "spades"};
	
	srand((unsigned) time(NULL));
	
	printf ("Enter number of cards in hand: ");
	scanf ("%d", &num_cards);
	
	printf ("Your hand:");
	while (num_cards > 0){
		suit = rand() % NUM_SUITS; /* picks a random suit */
		rank = rand() % NUM_RANKS; /* picks a random rank */
		if (!in_hand[suit][rank]){
			in_hand[suit][rank] = true;
			num_cards--;
			printf ("\n%s%s%s", rank_code[rank], " of ", suit_code[suit]);
		}
	}
	printf ("\n");

	return 0;
}
