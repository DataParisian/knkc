/* KNKC chapter 17 exercise 11
 * Sundeep Kolli 01-March-2015
 * Program: ex11.c
 * Purpose: Write the following function:
 *       int count_occurences(struct node *list, int n);
 * The list parameter points to a linked list. The function should return the 
 * number of times n appears in the list. Assume that the node stucture is the 
 * one defined in Section 17.5.
*/

struct node{
	int value;
	struct node *next;
};

struct node *list;

int count_occurences(struct node *list, int n){
	
	int count = 0;
	
	while(list != NULL){		
		if(list->value == n)
			count++;		
		list = list->next;
	}
	
	return count;
}

