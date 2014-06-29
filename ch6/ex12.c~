/* KNKC chapter 6 exercise 12
 * Sundeep Kolli 19-dec-2013
 * Program: ex12.c
 * Purpose: modified prime testing program that tests 
 * if divisors from 2 to square of user input number
*/

#include <stdio.h>

int main(void){

	int d, n;
		
	printf ("Enter the number to be checked for primality: ");
	scanf ("%d", &n);

	for (d = 2; (d * d) <= n; d++){
		/* printf ("value of d at the beginning of for loop: %d\n", d);*/
		if ((n % d) == 0)
			break;
	}
	
	if ((d * d) <= n){
		printf ("%d is divisible by %d\n", n, d);
	}else{
		printf ("%d is prime\n", n);
	}

	return 0;
}
