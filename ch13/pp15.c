/* KNKC chapter 13 Programming Project 15.
 * Sundeep Kolli 28-apr-2014
 * Program: pp15.c
 * Purpose: Modify pp6 from ch10 so that it includes the following function:
 * 		int evaluate_RPN_expression(const char *expression);
 * The function returns the value of the RPN expression pointed to by 
 * expression.
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int evaluate_RPN_expression(const char *expression);

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int c);
int pop(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void){
	
	char expn[STACK_SIZE + 1];
	
	make_empty();	
	
	for (;;){
		if (is_empty()){
			printf ("Enter an RPN expression: ");
			gets(expn);
			
			printf ("Value of expression: %d\n", 
				evaluate_RPN_expression(expn));
			
			make_empty();
			continue;
		}
		
	}
	
	return 0;
}

int evaluate_RPN_expression(const char *expression){
	const char *ch = expression;
	int op1, op2;	
	
	while (*ch){		
		
		if (*ch >= '0' && *ch <= '9'){			
			push(*ch - '0');			
		}else if (*ch == '+' || *ch == '-' || *ch == '*' || *ch == '/'){
			op2 = pop();
			op1 = pop();
			switch (*ch){
				case '+': push(op1 + op2); break;
				case '-': push(op1 - op2); break;
				case '*': push(op1 * op2); break;
				case '/': push(op1 / op2); break;
			}						
		}else if (*ch == '='){
			return pop();						
		}else if (*ch == ' '){
			ch++;
			continue;
		}
		else{
			exit (EXIT_SUCCESS);
		}		
		ch++;
	}
	
	return 0;
}

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
