/* KNKC chapter 9 exercise 2
 * Sundeep Kolli 16-feb-2014
 * Program: ex2.c
 * Purpose: Write a function check(x, y, n) that returns 1 if both x and y 
 * fall between 0 and n-1, inclusive and 0 otherwise. Assume x, y and n are 
 * all of type int.
*/

#include <stdio.h>

int check (int x, int y, int n);

int main (void){
	int num1, num2, upperBound;
	
	printf ("Enter 2 numbers to be checked: ");
	scanf ("%d%d", &num1, &num2);
	
	printf ("Enter upper bound: ");
	scanf ("%d", &upperBound);
	
	printf ("Check result: %d\n", check (num1, num2, upperBound));
	
	return 0;
}

int check (int x, int y, int n){
	
	if (x >= 0 && y >= 0 && x <= (n-1) && y <= (n - 1)){
		return 1;
	}else{
		return 0;	
	}
}
