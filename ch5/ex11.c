/* KNKC chapter 5 exercise 11
 * Sundeep Kolli 17-dec-2013
 * Program: ex11.c
 * Purpose: write a switch statement to print the corresponding 
 * ciry name when given an area code? 
*/

#include <stdio.h>

int main (void)
{
	int area_code;	
	
	printf ("Enter an area code: ");
	scanf ("%d", &area_code);

	switch (area_code) {
		case 229 : printf ("Albany\n"); break;
		case 404 : case 470 : case 678 : case 770 : printf ("Atlanta\n"); break;
		case 478 : printf ("Macon\n"); break;
		case 706 : case 762 : printf ("Columbus\n"); break;
		case 912 : printf ("Savannah\n"); break; 
		default : printf ("Area code not recognized\n"); break;
	}

	return 0;
}
