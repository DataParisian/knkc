/* KNKC chapter 7 programming project 3
 * Sundeep Kolli 27-dec-2013
 * Program: pp3.c
 * Purpose: modify the sum2.c program of section 7.1 to 
 * sum a series of double values
*/

#include <stdio.h>

int main(void){

	double n, sum = 0;

	printf ("This program sums a series of doubles.\n");
	printf ("Enter double-values (0 to terminate): ");
	scanf ("%lf", &n);

	while (n != 0.0){
		sum += n;
		scanf ("%lf", &n);
	}
	
	printf ("The sum is: %f\n", sum);

	return 0;
}
