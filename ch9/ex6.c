/* KNKC chapter 9 exercise 6
 * Sundeep Kolli 17-feb-2014
 * Program: ex6.c
 * Purpose: Write a function digit(n, k) that returns the k-th digit of 
 * from the right in n. If k is greater than the number of digits in n, the 
 * function returns 0.
*/

#include <stdio.h>

int digit (int n, int k);
int num_digits (int n);

int main (void){
	int n, k;
		
	printf ("Enter n and k: ");
	scanf ("%d%d", &n, &k);
			
	printf ("digit: %d\n", digit(n, k));
	
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

int digit (int n, int k){
	int i, digit, digitCount;

	digitCount = num_digits(n);
	
	if (digitCount < k){
		digit = 0;
	}else{
		for (i = 0; i < (k - 1); i++){
			n /= 10;
		}
		digit = n % 10;
	}
	
	return digit;
}

