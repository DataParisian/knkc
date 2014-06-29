	/* KNKC chapter 10 Programming Project 7
 * Sundeep Kolli 15-mar-2014
 * Program: pp7.c
 * Purpose: Write a program that prompts the user for a number and then 
 * displays the number, using characters to simulate the effect of a seven 
 * segment display. Characters other than digits should be ignored. Write the 
 * program so that the maximum number of digits is controlled by a macro named 
 * MAX_DIGITS which has the value 10. If the number contains more than this 
 * number of digits, the extra digits are ignored.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define CHAR_HEIGHT 3
#define CHAR_WIDTH 4
#define SEG_COUNT 7

const int segments[10][SEG_COUNT] = {{1, 1, 1, 1, 1, 1, 0},
							 {0, 1, 1, 0, 0, 0, 0},
							 {1, 1, 0, 1, 1, 0, 1},
							 {1, 1, 1, 1, 0, 0, 1},
							 {0, 1, 1, 0, 0, 1, 1},
							 {1, 0, 1, 1, 0, 1, 1},
							 {1, 0, 1, 1, 1, 1, 1},
							 {1, 1, 1, 0, 0, 0, 0},
							 {1, 1, 1, 1, 1, 1, 1},								 
							 {1, 1, 1, 1, 0, 1, 1}};

char digits[CHAR_HEIGHT][MAX_DIGITS * CHAR_WIDTH];

void clear_digits_away(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main (void){
	int i;
	char ch;
	
	clear_digits_away();
	
	printf ("Enter a number: ");
	for (i = 0; i < MAX_DIGITS; i++){
		ch = getchar();
		if (ch >='0' && ch <= '9'){
			process_digit(ch - '0', i);
		}
	}	
	print_digits_array();
	printf("\n");
	return 0;
}

void clear_digits_away(void){
	int i, j;
	for (i = 0; i < CHAR_HEIGHT; i++){
		for (j = 0; j < MAX_DIGITS * CHAR_WIDTH; j++){
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position){

	int start;
		
	start = position * CHAR_WIDTH;
	
	if (segments[digit][0] == 1){
		digits[0][start + 1] = '_';
	}
	
	if (segments[digit][1] == 1){
		digits[1][start + 2] = '|';
	}
	
	if (segments[digit][2] == 1){
		digits[2][start + 2] = '|';
	}
	
	if (segments[digit][3] == 1){
		digits[2][start + 1] = '_';
	}
	
	if (segments[digit][4] == 1){
		digits[2][start] = '|';
	}
	
	if (segments[digit][5] == 1){
		digits[1][start] = '|';
	}
	
	if (segments[digit][6] == 1){
		digits[1][start + 1] = '_';
	}

}

void print_digits_array(void){
	int i, j;
	for (i = 0; i < CHAR_HEIGHT; i++){
		for (j = 0; j < MAX_DIGITS * CHAR_WIDTH; j++){
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
	
}

