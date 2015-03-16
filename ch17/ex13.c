/* KNKC chapter 17 exercise 13
 * Sundeep Kolli 01-March-2015
 * Program: ex13.c
 * Purpose: The following function is supposed to insert a new node into its
 * proper place in an ordered list, returning a pointer to the first node in 
 * the modified list. Unfortunately, the function doesn't work correctly in all
 * cases. Explain what's wrong with it and show how to fix it. Assume that the 
 * node structure is the one defined in Section 17.5.
 *
 *    struct node *insert_into_ordered_list(struct node *list, 
 *                                          struct node *new_node){
 *    		struct node *cur = list, *prev = NULL;
 *          while (cur->value <= new_node->value){
 *				prev = cur;
 *				cur = cur->next;
 *          }
 *			prev->next = new_node;
 *			new_node->next = cur;
 *			return list;
 *    }
*/

/*
 * Ans: The following problem could arise with the above code:
 * 
 *       list is empty:  In the while loop condition check, we try to access
 *       the 'value' member. If the list supplied is initially empty, list 
 *       would be a NULL pointer and applying the -> operator would be an error.
 *       Adding a check to see if 'cur' is NULL would fix this. 
*/

struct node{
	int value;
	struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, 
                                      struct node *new_node){
	struct node *cur = list, *prev = NULL;
	
	if (cur != NULL){
		while (cur->value <= new_node->value){
			prev = cur;
			cur = cur->next;
		}
	}    
	
	prev->next = new_node;
	new_node->next = cur;
	
	return list;
	
}


