/* KNKC ch4 programming project 1
 * Sundeep Kolli 14-dec-2013
 * Program: pp1.c
 * Purpose: asks the user to enter a 2-digit number, then
 * prints the number with its digits reversed
*/

#include <stdio.h>

int main (void)
{
	int inputNumber;
	/*int unitsDigit, tensDigit;*/
	
	printf ("Enter a 2-digit number: ");
	scanf ("%d", &inputNumber);
	
	printf ("The reversal is %d%d\n", (inputNumber % 10), (inputNumber / 10));

	return 0;
}
