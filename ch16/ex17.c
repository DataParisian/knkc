/* KNKC chapter 16 exercise 17
 * Sundeep Kolli 09-july-2014
 * Program: ex17.c
 * Purpose: Suppose that b and i are declared as follows:
 * 		enum {FALSE, TRUE} b;
 *		int i;
 * Which of the following statements are legal? Which ones are "safe" (always
 * yield a meaningful result)?
*/
 
/*
 * a) b = FALSE;
 * Ans) Legal and safe.
*/

/*
 * b) b = i;
 * Ans) Legal but not meaningful since b is supposed to be either False, i.e., 
 * 0 or TRUE, i.e., 1 and i could be any integer.
*/

/*
 * c) b++;
 * Ans) Legal but not meaningful since if b is TRUE, i.e., 1, incrementing b 
 * would be meaningless.
*/


/*
 * d) i = b;
 * Ans) Legal and meaningful.
*/


/*
 * e) i = 2 * b + 1;
 * Ans) Legal and meaningful.
*/

