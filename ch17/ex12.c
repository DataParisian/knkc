/* KNKC chapter 17 exercise 12
 * Sundeep Kolli 01-March-2015
 * Program: ex12.c
 * Purpose: Write the following function:
 *       struct node *find_last(struct node *list, int n);
 * The list parameter points to a linked list. The function should return the 
 * last node that contains n; it should return NULL if it doesn't appear in the
 * list. Assume that the node structure is the one defined in Section 17.5.
*/

struct node{
	int value;
	struct node *next;
};

struct node *list;

struct node *find_last(struct node *list, int n){
	
	struct node *last = NULL;
	
	while(list != NULL){	
		if(list->value == n)
			last = list;		
		list = list->next;
	}
	
	return last;
}

