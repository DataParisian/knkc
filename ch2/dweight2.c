/* KNKC ch2 section 2.4
 * Sundeep Kolli 09-dec-2013
 * Program: dweight2.c
 * Purpose: to compute the dimesional weight of a box from
 * provided by the user
*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main (void)
{
	int height, length, width, volume, weight;
	
	printf ("Enter the height of the box: ");
 	scanf ("%d", &height);

	printf ("Enter the length of the box: ");
 	scanf ("%d", &length);

	printf ("Enter the width of the box: ");
 	scanf ("%d", &width);

    volume = height * length * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf ("Dimensions: %dx%dx%d\n", length, width, height);
	printf ("Volume (cubic inches): %d\n", volume);
	printf ("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
