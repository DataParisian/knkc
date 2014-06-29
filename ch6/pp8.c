/* KNKC chapter 6 programming project 8
 * Sundeep Kolli 21-dec-2013
 * Program: pp8.c
 * Purpose: program to print a one-month calendar. 
 * The user specifies the number of days in the month 
 * and the day of the week on which the month begins
*/

#include <stdio.h>

int main(void){
	int i;
	int startOfWeek, daysInMonth;
	
	printf ("Enter number of days in month: ");
	scanf ("%d", &daysInMonth);
	printf ("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf ("%d", &startOfWeek);
		
	for (i = 1; i < startOfWeek; i++)
		printf ("   ");
	
	for (i = 1; i <= daysInMonth; i++){		
		printf ("%2d ", i);
		if ((i + startOfWeek - 1) % 7 == 0)
			printf ("\n");
	}
	
	printf ("\n");

	return 0;
}
