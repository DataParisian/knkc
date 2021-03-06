/* KNKC chapter 13 exercise 2
 * Sundeep Kolli 16-apr-2014
 * Program: ex2.c
 * Purpose: Suppose that p has been declared as follows:
 *			char *p = "abc";
 *          Which of the following calls are legal? Show the output of each
 *          legal call and explain why others are illegal?
*/

#include <stdio.h>

int main (void){
	
	char *p = "abc";	
	
	/* a) putchar(p);*/	
	/*    Ans: Illegal since putchar expects a character (int) where as p is a 
	*     	   pointer to a string. Produces compiler error and undefined 
	*          behavior.
	*/	
/*		putchar(p);*/
		
	/* b) putchar(*p);*/	
	/*    Ans: Legal since putchar expects a character (int) where as *p is the 
	*          value stored in the first element of the array "abc" which is a. 
	*     	   However, doesn't improve program clarity and should be avoided.
	*/
	
/*		putchar(*p);*/
	
	/* c) puts(p);*/	
	/*    Ans: Legal since puts expects a pointer to a string and p is one. 
			   Output will be the string abc followed by a new-line character.
	*/
	
/*		puts(p);*/
	
	/* d) puts(*p);*/	
	/*    Ans: Illegal since puts expects a pointer to a string where as *p is 
	*          the value stored at the address pointed to by p and this value 
	*          is an integer. Produces compiler error and undefined behavior 
	*          due to default casting, most likely a segmentation fault.
	*/
	
		puts(*p);
	
	return 0;
}

