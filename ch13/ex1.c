/* KNKC chapter 13 exercise 1
 * Sundeep Kolli 15-apr-2014
 * Program: ex1.c
 * Purpose: Identify which of the following calls that are supposed to write a 
 * single new-line character don't work and explain why.
*/

#include <stdio.h>

int main (void){
	
	
	/* a) printf("%c", '\n');*/	
	/*    Ans: It prints a new-line character since %c specification accepts a 
	*     	   a character and '\n' is a character.
	*/
	
/*		printf("%c", '\n');*/
		
	/* b) printf("%c", "\n");*/	
	/*    Ans: It produces a compiler warning since %c specification requires  
	*     	   a character (int) and "\n" is a string literal which is a 
	*          pointer, so it will be cast to integer. So it doesn't print a 
	*		   new-line character
	*/
	
/*		printf("%c", "\n");*/
	
	/* c) printf("%s", '\n');*/	
	/*    Ans: It produces a compiler warning since %s specification requires  
	*     	   a string which is a pointer and '\n' is a character which is an 
	*          integer, so it will be cast to pointer. So it doesn't print a 
	*		   new-line character
	*/
	
/*		printf("%s", '\n');*/
	
	/* d) printf("%s", "\n");*/	
	/*    Ans: It prints a new-line character since %s specification accepts a 
	*     	   a string and "\n" is a string.
	*/
	
/*		printf("%s", "\n");*/

	/* e) printf('\n');*/	
	/*    Ans: It produces a compiler error since the first argument printf of
	*          must be a pointer to a string which '\n' is not.
	*/
	
/*		printf('\n');*/

	/* f) printf("\n");*/	
	/*    Ans: It prints a new-line character since the first argument printf of
	*          must be a pointer to a string which "\n" is.
	*/
	
/*		printf("\n");*/

	/* g) putchar('\n');*/	
	/*    Ans: It prints a new-line character since putchar function prints a 
	 *         a character which '\n' is.
	*/
	
/*		putchar('\n');*/

	/* h) putchar("\n");*/	
	/*    Ans: It producess a compiler error since putchar function takes a 
	 *		   character as argument to print as output whereas "\n" is a 
	 *		   pointer. Default casting leads to warning/error and undefined 
	 *	       behavior.
	*/
	
/*		putchar("\n");*/
	
	/* i) puts('\n');*/	
	/*    Ans: It producess a compiler error since puts function expects a 
	 *	       pointer to a string as argument to print as output whereas '\n'
	 *	       is a character (int). Default casting leads to warning/error 
	 *         and undefined behavior.
	*/
	
/*		puts('\n');*/
	
	/* j) puts("\n");*/	
	/*    Ans: It prints 2 new-line characters since puts function prints a 
	 *         a string which "\n" is and terminates with a trailing newline.
	*/
	
/*		puts("\n");*/
	
	/* k) puts("");*/	
	/*    Ans: It prints 1 new-line character since puts function prints a 
	 *         an empty string due to the input "" and terminates with a 
	 *         trailing newline.
	*/
	
		puts("");
	
	return 0;
}
