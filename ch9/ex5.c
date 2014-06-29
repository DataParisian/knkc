/* KNKC chapter 9 exercise 5
 * Sundeep Kolli 17-feb-2014
 * Program: ex5.c
 * Purpose: Write a function num_digits(n) that returns the number of 
 * digits in n (a positive integer).
*/

#include <stdio.h>

int num_digits (int n);

int main (void){
	int n;
		
	printf ("Enter n: ");
	scanf ("%d", &n);
			
	printf ("Number of digits in n: %d\n", num_digits(n));
	
	return 0;
}

int num_digits (int n){
	int i = 0;
	
	while (n != 0){
		i++;
		n /= 10;
	}
		
	return i;
}
