/* KNKC chapter 5 programming project 2
 * Sundeep Kolli 17-dec-2013
 * Program: pp2.c
 * Purpose: program to convert a 24 hour time to 12 hour form
*/

#include <stdio.h>

int main (void)
{
	int inputHour, inputMinutes;	
	
	printf ("Enter a 24-hour time: ");
	scanf ("%d : %d", &inputHour, &inputMinutes);

	if (inputHour >= 13){
		printf ("Equivalent 12-hour time: %.2d:%.2d PM\n", 
						inputHour - 12, inputMinutes);
	} else{
		printf ("Equivalent 12-hour time: %.2d:%.2d AM\n", 	
						inputHour, inputMinutes);
	}

	return 0;
}
