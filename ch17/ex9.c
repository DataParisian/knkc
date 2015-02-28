/* KNKC chapter 17 exercise 9
 * Sundeep Kolli 29-February-2015
 * Program: ex9.c
 * Purpose: If x is a structure and a is a member of that structure, then
 * (&x)->a is the same as x.a. Justify your answer.
*/

/*
 * The -> operator is just a shortcut to dereference a pointer to a structure
 * variable by applying the the * operator and then using the . operator on the
 * structure thus obtained. So, (&x) is a pointer to the structure x. Therefore
 * the (&x)->a is just a shortcut to say access the structure pointed to by &x 
 * and fetch the 'a' member of the structure. This is the same as x.a
 *    	
*/

