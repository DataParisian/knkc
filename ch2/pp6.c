/* KNKC ch2 programming project 6
 * Sundeep Kolli 09-dec-2013
 * Program: pp6.c
 * Purpose: the program asks the user to enter a value for x and
 * then displays the value of the following polynomial:
 * 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
*/

#include<stdio.h>

int main(void)
{
	float x = 0.0f;

	printf ("Enter a value for x: ");
	scanf ("%f", &x);
	printf ("Value of the polynomial: %.2f\n", 
			3 * x * x * x * x * x
		   + 2 * x * x * x * x
		   - 5 * x * x * x
		   - x * x
           + 7 * x
		   - 6);

	return 0;
}
