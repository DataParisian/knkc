/* KNKC ch2 programming project 2
 * Sundeep Kolli 09-dec-2013
 * Program: pp2.c
 * Purpose: to compute the volume of a sphere with a 10-metre
 * radius using the formula v = (4/3)*pi*r³
*/

#include<stdio.h>

int main(void)
{
	float r = 10;
	printf ("The volume of a sphere of %f-metre radius: %f\n", 
				r, (4.0f/3.0f)*3.14*r*r*r);
	return 0;
}
