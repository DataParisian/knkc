/* KNKC chapter 15 Programming Project 5
 * Sundeep Kolli 30-june-2014
 * Program: pp5.c
 * Purpose: Modify pp6 from Chapter 10 so that it has separate stack.h and 
 * stack.c files, as described in Section 15.2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

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

