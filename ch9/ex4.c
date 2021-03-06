/* KNKC chapter 9 exercise 4
 * Sundeep Kolli 17-feb-2014
 * Program: ex4.c
 * Purpose: Write a function day_of_year(month, day, year) that returns the 
 * day of the year (an integer between 1 and 366) specified by the three 
 * arguments.
*/

#include <stdio.h>

int day_of_year (int month, int day, int year);

int main (void){
	int month, day, year;
		
	printf ("Enter month, day and year: ");
	scanf ("%d%d%d", &month, &day, &year);
	
	if (month > 12){
		printf ("oops, no more than 12 months in an year!\n");
		return 0;
	}
	
	if (day > 31){
		printf ("oops, no more than 31 days in a month!\n");
		return 0;
	}
		
	printf ("Day of the year: %d\n", day_of_year (month, day, year));
	
	return 0;
}

int day_of_year (int month, int day, int year){

	const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 
							   31, 31, 30, 31, 30, 31};
	int i, days = 0;
	
	for (i = 0; i < month - 1; i++){
		days += daysInMonth[i];
	}
	
	days += day;
	
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
		days++;
	}
	
	return days;
}
