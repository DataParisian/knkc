/* KNKC chapter 9 programming project 8
 * Sundeep Kolli 25-feb-2014
 * Program: pp8.c
 * Purpose: Write a program that simulates the game of craps.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

#define DIE_SIDES 6

int roll_dice(void);
bool play_game(void);

int main (void){
	
	bool isWin = false;
	char ans;
	int wins = 0, losses = 0;
	srand((unsigned)time(NULL));
	
	isWin = play_game();
	
	if (isWin){
		printf ("You win!\n");
		wins++;
	}else{
		printf ("You lose!\n");
		losses++;
	}
	printf ("\n");
	printf ("Play again? ");
	ans = toupper(getchar());
	
	while (ans == 'Y'){
		isWin = play_game();
		
		if (isWin){
			printf ("You win!\n");
			wins++;
		}else{
			printf ("You lose!\n");
			losses++;
		}
		printf ("\n");
		printf ("Play again? ");
		getchar();
		ans = toupper(getchar());
	}
	printf ("\n");
	printf ("Wins: %d  Losses: %d\n", wins, losses);
	
	return 0;
}

bool play_game(void){
	
/*	bool result = false;*/
	int point, roll;	
	
	roll = roll_dice();
	printf ("You rolled: %d\n", roll);
	
	switch (roll){
		case (7): case (11): return true;
		case (2): case (3): case (12): return false;
		default: point = roll; printf ("Your point is %d\n", point); break;
	}
	
	roll = roll_dice();
	printf ("You rolled: %d\n", roll);
	
	while ( roll != point){		
		roll= roll_dice();
		printf ("You rolled: %d\n", roll);
	}
	
	return true;
}

int roll_dice(void){
	
	int die1, die2;
	
	die1 = (rand() % DIE_SIDES) + 1;
	die2 = (rand() % DIE_SIDES) + 1;
	
	return (die1 + die2);
}

