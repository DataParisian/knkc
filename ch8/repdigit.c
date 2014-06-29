/* KNKC chapter 8 section 8.1
 * Sundeep Kolli 01-feb-2014
 * Program: repdigit.c
 * Purpose: checks numbers for 	repeated digits
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
	
	bool digit_seen[10] = {false};
	int repeated_digits[10] = {0};
	int digit;
	long n;
	
	printf ("Enter a number:");
	scanf ("%ld", &n);

	while (n > 0){
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}
	
	if (n > 0)
		printf ("Repeated digit\n");
	else
		printf ("No repeated digit\n");
	
	return 0;
}
