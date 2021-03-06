/* KNKC chapter 9 exercise 7
 * Sundeep Kolli 17-feb-2014
 * Program: ex7.c
 * Purpose: Which of the following statements are legal assuming the 
 * following definition for function f:
 * int f(int a, int b) { ... }
 * Also assume type int for i and type double for x.
*/

# include <stdio.h>

int f (int a, int b);

int main (void){
	int i;
	double x;
	
/*	i = f(83, 12);	*/
/*	printf ("i: %d\n", i);*/
	
/*	x = f(83, 12);	*/
/*	printf ("x: %f\n", x);*/

/*	i = f(3.15, 9.28);*/
/*	printf ("i: %d\n", i);*/

/*	x = f(3.15, 9.28);	*/
/*	printf ("x: %f\n", x);*/

	f (83, 12);
	
	return 0;
}

int f (int a, int b){

	printf ("a: %d\n", a);
	printf ("b: %d\n", b);
	
	return 1; 
}

/* (a) i = f(83, 12);  legal
 * 
 * (b) x = f(83, 12);  legal implicit casting of result of f from int to double
 *
 * (c) i = f(3.15, 9.28);  legal
 * implicit casting of 3.15 and 9.28 to int.
 *
 * (d) x = f(3.15, 9.28);  legal
 * implicit casting of 3.15 and 9.28 to int.
 *
 * (e) f(83, 12);  legal
 * expression statement:  f is evaluated and the result discarded.
*/

