/* KNKC chapter 17 exercise 6
 * Sundeep Kolli 03-August-2014
 * Program: ex6.c
 * Purpose: Modify the delete_from_list function so that it uses only one 
 * pointer variable instead of two (cur and prev).
*/

struct node *delete_from_list(struct node *list, int n){
	
	struct node *cur;
	
	if (list->value == n){                    /* n is in the first node  */
		free(cur);
		return list->next;
	}
				
	for (cur = list; 
		 cur->next->next != NULL && cur->next->value != n;
		 cur = cur->next)
	  ;
	
	if (cur->next->next == NULL){             /* n was not found         */
		free(cur);
		return list;                          
	}else{       							  /* n is in some other node */
		cur->next = cur->next->next;
		free(cur);
		return list;
	}	
}

