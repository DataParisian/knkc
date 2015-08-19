/* KNKC chapter 17 exercise 7
 * Sundeep Kolli 29-January-2015
 * Program: ex7.c
 * Purpose: The following loop is supposed to delete all nodes from a linked
 * list and release the memory that they occupy. Explain what's wrong and fix 
 * the bug:
 * 		for (p = first; p != NULL; p = p->next)	
 *      	free(p);
*/

/* Ans: If p is a NULL pointer, free(p) has no effect. If p is not a NULL 
 * pointer, free(p) will leave p "dangling" i.e., p would no longer be pointing 
 * at any object of memory. So, the assignment p=p->next will be an error.
 * A correct way would be as follows:
 *      p = first;
 *      while (p != NULL){
 *      	tempPtr = p;
 *          p = p->next;
 *          free(tempPtr);
 *      }
*/

