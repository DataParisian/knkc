/* KNKC chapter 9 exercise 18
 * Sundeep Kolli 21-feb-2014
 * Program: ex18.c
 * Purpose: Write a recursive version of the gcd function. The function 
 * gcd(m, n) should return m, if n is zero and call gcd recursively passing 
 * n as the first argument and m % n as the second.
*/


#include <stdio.h>

int gcd(int m, int n);

int main (void){
	int num1, num2;
	int num, denom;		

	printf ("Enter 2 integers: ");
	scanf ("%d%d", &num1, &num2);
	
	while (num1 == 0 || num2 == 0){
		printf ("Enter 2 positive integers!\n");
		scanf ("%d%d", &num1, &num2);
	}	

	if (num1 < num2){
		num = num1;
		denom = num2;
	}else{
		num = num2;
		denom = num1;
	}
		
	printf ("GCD: %d\n", gcd(num, denom));
	
	return 0;
}

int gcd (int m, int n){
	return (n == 0) ? m : gcd(n, (m % n));
}
