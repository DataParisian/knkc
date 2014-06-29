/* KNKC chapter programming project 5
 * Sundeep Kolli 21-dec-2013
 * Program: pp5.c
 * Purpose: asks the user to enter an integer, then
 * prints the number with its digits reversed
*/

#include <stdio.h>

int main (void)
{
	int inputNumber, tempInput;
	
	printf ("Enter a number: ");
	scanf ("%d", &inputNumber);

	tempInput = inputNumber;

	printf ("The reversal of %d is ", inputNumber);

	do{		
		printf ("%d", tempInput % 10);
		tempInput = tempInput / 10;
    }while (tempInput != 0);

	printf ("\n");	
	
	return 0;
}
