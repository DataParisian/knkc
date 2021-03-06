/* KNKC chapter 9 exercise 3
 * Sundeep Kolli 16-feb-2014
 * Program: ex3.c
 * Purpose: Write a function gcd(m, n) that calculates the greatest common 
 * divisor of the integers m and n.
*/

#include <stdio.h>

int gcd (int m, int n);

int main (void){
	int num1, num2;
		
	printf ("Enter 2 integers: ");
	scanf ("%d%d", &num1, &num2);
	
	while (num1 == 0 || num2 == 0){
		printf ("Enter 2 positive integers!\n");
		scanf ("%d%d", &num1, &num2);
	}	
	
	printf ("GCD: %d\n", gcd (num1, num2));
	
	return 0;
}

int gcd (int m, int n){

	int num, denom, remainder;

	if (m < n){
		num = n;
		denom = m;
	}else{
		num = m;
		denom = n;
	}
	
	remainder = num % denom;	
	while (remainder != 0){
		num = denom;
		denom = remainder;
		remainder = num % denom;
	}
	
	return denom;
}
