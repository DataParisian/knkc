/* KNKC chapter 15 Programming Project 5
 * Sundeep Kolli 30-june-2014
 * Program: pp5.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_underflow(void);
void stack_overflow(void);

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(int c){
	if (is_full()){
		stack_overflow();		
		exit (EXIT_SUCCESS);		
	}else{
		contents[top++] = c;
	}
}

int pop(void){
	if (is_empty()){
		stack_underflow();
		exit (EXIT_SUCCESS);
	}else{
		return contents[--top];
	}
}

void stack_underflow(void){
	printf ("Not enough operands in expression.\n");
}

void stack_overflow(void){
	printf ("Expression is too complicated.\n");
}
