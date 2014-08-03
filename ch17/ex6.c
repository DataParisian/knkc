/* KNKC chapter 17 exercise 6
 * Sundeep Kolli 03-August-2014
 * Program: ex6.c
 * Purpose: Modify the delete_from_list function so that it uses only one 
 * pointer variable instead of two (cur and prev).
*/

struct node *delete_from_list(struct node *list, int n){
	
	struct node *cur, *prev;
	
	for (cur = list, prev = NULL; 
		 cur != NULL && cur->value != n;
		 prev = cur, cur = cur->next)
	  ;
	
	if (cur == NULL)
		return list;                          /* n was not found         */
	
	if (prev == NULL)
		list = list->next;					  /* n is in the first node  */
	else
		prev->next = cur->next;               /* n is in some other node */
	free(cur);
	return list;
}

