/* KNKC chapter 9 exercise 1
 * Sundeep Kolli 16-feb-2014
 * Program: ex1.c
 * Purpose: Correct the two errors in the exercise 1.
*/

#include <stdio.h>

double triangle_area (double base, double height)
{	double product;
	product = base * height;
	return product / 2;
}

int main (void){
	double b = 11.2, h = 12.2;
	
	printf ("Area: %f\n", triangle_area(b, h));
	
	return 0;
}
