/* KNKC ch4 programming project 2
 * Sundeep Kolli 14-dec-2013
 * Program: pp2.c
 * Purpose: asks the user to enter a 3-digit number, then
 * prints the number with its digits reversed
*/

#include <stdio.h>

int main (void)
{
	int inputNumber;
	/*int unitsDigit, tensDigit;*/
	
	printf ("Enter a 3-digit number: ");
	scanf ("%d", &inputNumber);
	
	printf ("The reversal is %d%d%d\n", 
		(inputNumber % 10), ((inputNumber / 10) % 10), (inputNumber / 100));

	return 0;
}
