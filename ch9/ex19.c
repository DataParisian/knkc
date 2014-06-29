/* KNKC chapter 9 exercise 19
 * Sundeep Kolli 21-feb-2014
 * Program: ex19.c
 * Purpose: Trace the execution of the "mystery" function below by hand. 
 * Then write a program that calls the function passing it a number entered 
 * by the user. What does the function do?
*/


#include <stdio.h>

void pb(int n);

int main (void){
	int input;		

	printf ("Enter an integer: ");
	scanf ("%d", &input);
	
	pb(input);
	
	printf ("\n");
	
	return 0;
}

void pb(int n){
	if (n != 0){
		pb(n / 2);
		putchar('0' + n % 2);
	}
}

/* Analysis of the mystery function:
 * The function does not return any thing. It has only a side effect of
 * printing output via the putchar statement. When called with an int 
 * argument n, the function first checks if n is 0 in which case it does 
 * nothing. If not it calls itself recursively with the argument (n / 2) 
 * which evaluates to 2 when n < 2. When the last of the pb recursive calls
 * terminates because the suppied argument is either 0 or 1, it exits without 
 * doing anything. Then the control passes to the putchar statement in the 
 * caller pb function which prints the character version of 0 or 1. It does 
 * this by first determining if the argument is 0 or 1 by doing a modulo by 2 
 * to get the remainder. Then it adds this remainder to the integer value of 
 * '0' and then outputs the character version of the ASCII code thus obtained.
 * Then the control passes to the previous pb caller function and so on. The 
 * pb function when called outputs the binary value of the supplied integer.
*/

