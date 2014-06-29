/* KNKC chapter 10 programming project 1
 * Sundeep Kolli 28-feb-2014
 * Program: pp1.c
 * Purpose: Modify the stack example of Section 10.2 so that it stores 
 * characters instead of integers. Next, add a main function that asks the 
 * user to enter a series of parantheses and/or braces, then indicates whether 
 * or not they're properly nested;
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void){
	
	char ch, poppedChar;

	make_empty();
	
	printf ("Enter parantheses and/or braces: ");
	
	for (;;){
		ch = getchar();
		
		if (ch == '{' || ch == '('){			
			
			push(ch);
			
		}else if (ch == '}' || ch == ')'){

			poppedChar = pop();
			if (ch == '}' && poppedChar != '{'){
				printf ("Parantheses/braces are not nested properly\n");
				exit (EXIT_SUCCESS);
			}else if (ch == ')' && poppedChar != '('){
				printf ("Parantheses/braces are not nested properly\n");
				exit (EXIT_SUCCESS);
			}
			
		}else if (ch == '\n'){
			if (is_empty()){
				printf ("Parantheses/braces are nested properly\n");
				exit (EXIT_SUCCESS);
			}else{
				printf ("Parantheses/braces are not nested properly\n");
				exit (EXIT_SUCCESS);
			}
		}else{
		}
	}
	
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

void push(char c){
	if (is_full()){
		stack_overflow();
		printf ("Parantheses/braces are not nested properly\n");
		exit (EXIT_SUCCESS);		
	}else{
		contents[top++] = c;
	}
}

char pop(void){
	if (is_empty()){
		stack_underflow();
		printf ("Parantheses/braces are not nested properly\n");
		exit (EXIT_SUCCESS);
	}else{
		return contents[--top];
	}
}

void stack_underflow(void){
	printf ("Stack Underflow\n");
}

void stack_overflow(void){
	printf ("Stack Overflow\n");
}

