/* KNKC ch2 programming project 4
 * Sundeep Kolli 09-dec-2013
 * Program: pp4.c
 * Purpose: the program asks the user to enter the dollar-and-cents
 * amount, then displays the amount with 5% tax added.
*/

#include<stdio.h>

int main(void)
{
	float userAmount=0.0f;

	printf ("Enter an amount: ");
	scanf ("%f", &userAmount);
	printf ("With tax added: %.2f\n", userAmount * (1 + 0.05));

	return 0;
}
