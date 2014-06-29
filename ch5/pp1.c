/* KNKC chapter 5 programming project 1
 * Sundeep Kolli 17-dec-2013
 * Program: pp1.c
 * Purpose: program to calculate number of digits in 
 * a number. Assume that the number has no more than 
 * 4 digits 
*/

#include <stdio.h>

int main (void)
{
	int inputNumber;	
	
	printf ("Enter a number: ");
	scanf ("%d", &inputNumber);

	if ((inputNumber / 1000) != 0){
		printf ("The number %d has 4 digits\n", inputNumber);
	} else if ((inputNumber / 100) != 0){
		printf ("The number %d has 3 digits\n", inputNumber);
	} else if ((inputNumber / 10) != 0){
		printf ("The number %d has 2 digits\n", inputNumber);
	} else{
		printf ("The number %d has 1 digit\n", inputNumber);
	}

	return 0;
}
