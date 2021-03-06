/* KNKC chapter 11 exercise 7
 * Sundeep Kolli 18-mar-2014
 * Program: ex8.c
 * Purpose: Write a function which, when given the day of a specific year 
 * which is a number between 1 and 366, will represent it as equivalent day 
 * of month(1 - 31) and a month(1 - 12) and store these values in variables 
 * supplied as pointers to the function.
*/

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int isLeapYear(int year);

int main (void){
	
	int dayOfYear, year;
	int month, day;
	
	printf("Enter day of an year and the year: ");
	scanf("%d", &dayOfYear);
	scanf("%d", &year);

	split_date(dayOfYear, year, &month, &day);	
			
	printf("Day:%2d    Month:%2d\n", month, day);
	
	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day){
	const int leapYrMonthEnd[] = {31, 29, 31, 30, 31, 30, 
								  31, 31, 30, 31, 30, 31}; 
    const int nonLeapYrMonthEnd[] = {31, 29, 31, 30, 31, 30, 
 	  							     31, 31, 30, 31, 30, 31};
 	int i, days = 0;
 	 
	if(isLeapYear(year)){
		for (i = 0; i < 12; i++){			
			if (day_of_year <= (days + leapYrMonthEnd[i])){
				*month += 1;
				*day = days - *day; 
			}
			days += leapYrMonthEnd[i];
		}
	}else{
		for (i = 0; i < 12; i++){			
			if (day_of_year <= (days + nonLeapYrMonthEnd[i])){
				*month += 1;
				*day = days - *day; 
			}
			days += nonLeapYrMonthEnd[i];
		}
	}
}

int isLeapYear(int year){
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

