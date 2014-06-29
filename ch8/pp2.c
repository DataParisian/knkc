/* KNKC chapter 8 programming project 2
 * Sundeep Kolli 01-feb-2014
 * Program: pp2.c
 * Purpose: checks a number and prints out how many times each digit 
 * appears in the number
*/

#include <stdio.h>

int main(void){
	
	int digit_count[10] = {0};
	int digit, i;
	long n;
	
	printf ("Enter a number: ");
	scanf ("%ld", &n);

	while (n > 0){
		digit = n % 10;	
		digit_count[digit]++;
		n /= 10;
	}
	
	printf ("Digit:       0 1 2 3 4 5 6 7 8 9\n");
	printf ("Occurences: ");
	for (i = 0; i < 10; i++){
		printf (" %d", digit_count[i]);
	}
	printf ("\n");
	
	return 0;
}
