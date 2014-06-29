/* KNKC ch4 programming project 4
 * Sundeep Kolli 14-dec-2013
 * Program: pp4.c
 * Purpose: reads an integer input by the user and 
 * displays it in octal (base 8)
*/

#include <stdio.h>

int main (void)
{
	int inputNumber;	
	int remainingQuotient;
	int i1, i2, i3, i4, i5;
	
	printf ("Enter a number between 0 and 32767: ");
	scanf ("%d", &inputNumber);

	i1 = inputNumber % 8;
	
	remainingQuotient = inputNumber / 8;
	i2 = remainingQuotient % 8;
	
	remainingQuotient = remainingQuotient / 8;
	i3 = remainingQuotient % 8;

	remainingQuotient = remainingQuotient / 8;
	i4 = remainingQuotient % 8;

	remainingQuotient = remainingQuotient / 8;
	i5 = remainingQuotient % 8;
	
	printf ("In octal, your number is %1d%1d%1d%1d%1d\n", 
								i5, i4, i3, i2, i1);

	return 0;
}
