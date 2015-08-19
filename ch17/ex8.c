/* KNKC chapter 17 exercise 8
 * Sundeep Kolli 29-January-2015
 * Program: ex8.c
 * Purpose: Modify the stack.c program of Section 15.2 so that the stack is 
 * stored as a linked list. Replace the contents and top variables by a single 
 * variable that points to the first node in the list (the "top" of the stack).
 * Write the functions in stack.c so that they use this pointer. Remove the 
 * is_full function, instead having push return either true (if memory was 
 * available to create a node) or false(if not).
*/

/*
	Credit: K N King Solutions on http://knking.com/books/c2/answers/c17.html
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
	int value;
	struct node *next;
};

struct node *top = NULL;


void make_empty(void){
	struct node *temp;
	
	while(top == NULL){
		temp = top;
		top->next = temp;
		free(temp);
	}
}

bool is_empty(void){
	return top == NULL;
}

bool push(int i){

	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	
	if (new_node == NULL)
		return false;
	
	new_node->value = i;
	new_node->next = top;	
	top = new_node;
	
	return true;
}

int pop(void){
	
	struct node *temp;
	int i;
	
	if (is_empty()){
		printf("*** Stack underflow; Program terminated. ***\n");
		exit(EXIT_FAILURE);
	}

	i = top->value;	
	
	temp = top;	
	top->next = temp->next;
		
	free(temp);
	return i;
}

