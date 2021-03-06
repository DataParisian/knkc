/* KNKC chapter 10 programming project 6
 * Sundeep Kolli 08-mar-2014
 * Program: pp6.c
 * Purpose: Write a program that evaluates a Reverse Polish Notation(RPN) 
 * expression. For example, the expression 1 + 2 * 3 would be written as 
 * 1 2 3 * +. The algorithm to evaluate RPN expressions uses a stack and 
 * performs the following steps while reading the operands and operators 
 * left to right:
 *    When an operand is encountered, push it onto the stack.
 *    When an operator is encountered, pop its operands from the stack, 
 *    perform the operation on them and push the result onto the stack. 
 * The program will evaluate RPN expressions with single-digit integer operands 
 * and with operators +, -, *, / and =. The = operator causes the top stack 
 * item to be displayed; afterwards the stack is cleared and the user is 
 * prompted to enter another expession. The process continues until a character 
 * is entered that is neither an operand nor an operator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

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
	
	char ch;
	int op1, op2;

	make_empty();	
	
	for (;;){
		if (is_empty()){
			printf ("Enter an RPN expression: ");
		}
		scanf (" %c", &ch);
/*		printf ("ch: %c\n", ch);*/
		
		if (ch >= '0' && ch <= '9'){			
			push(ch - '0');			
		}else if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
			op2 = pop();
			op1 = pop();
/*			printf ("op1: %d\n", op1);*/
/*			printf ("op2: %d\n", op2);		*/
			switch (ch){
				case '+': push(op1 + op2); break;
				case '-': push(op1 - op2); break;
				case '*': push(op1 * op2); break;
				case '/': push(op1 / op2); break;
			}						
		}else if (ch == '='){
			printf ("Value of expression: %d\n", pop());
			make_empty();
			continue;
		}else{
			exit (EXIT_SUCCESS);
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

