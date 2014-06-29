/* KNKC chapter 13 exercise 10
 * Sundeep Kolli 17-apr-2014
 * Program: ex10.c
 * Purpose: What is wrong with following function that supposedly creates an 
 * identical copy of the string.
*/

/* char *duplicate(const char *p){
*      char *q;
*	   strcpy(q, p);*	   
*  }
 *  
 *  Ans) Since the pointer variable q is unintialized, it's address is 
 *  meaningless. Therefore, the strcpy call results in an error as the function
 *  attempts to copy the string p to some unknown address, which could 
 *  potentially be a read-only memory area.
*/

