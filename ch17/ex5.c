/* KNKC chapter 17 exercise 5
 * Sundeep Kolli 03-August-2014
 * Program: ex5.c
 * Purpose: Suppose that f and p are declared as follows:
 *     struct { 
 *	   	  union {
 *			char a, b;
 *          int c;
 *		  } d;
 *        int e[5];
 *     } f, *p = &f;
 * Which of the following statements are legal?
*/

/* (a) p->b = ' ';
 * Ans: Not legal since we need to first access the union d of struct p and 
 * access the member b of d as follows:
 * 		p->d.b = ' ';
*/

/* (b) p->e[3] = 10;
 * Ans: Legal.
*/

/* (c) (*p).d.a = '*';
 * Ans: Legal.
*/

/* (d) p->d->c = 20;
 * Ans: Not legal since -> is just a shortcut of (*). i.e., indirection 
 * operation on a pointer to a structure and then the dot operator to access 
 * its member. Since d is a union and not a structure, this operator cannot be
 * applied to d. The legal statement would be as follows:
 * 		p->d.c = 20;
*/

