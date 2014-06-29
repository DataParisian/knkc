/* KNKC chapter 8 exercise 9
 * Sundeep Kolli 01-feb-2014
 * Program: ex9.c
 * Purpose: using the array of exercise 8, write a program to calculate the
 * average temperature of a month(averaged over all days and all hours of 
 * the day).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HOURS_IN_DAY 24
#define DAYS_IN_MONTH 30
#define MAX_TEMP 50

int main (void){

	float temperature_readings[DAYS_IN_MONTH][HOURS_IN_DAY] = {{0.0f}};
	float avg_daily_temp[DAYS_IN_MONTH] = {0.f};
	float avg_monthly_temp = 0.0f;		
	int i, j;
	
	srand((unsigned) time(NULL));

	/* filling the array with temperatures */
	for (i = 0; i < DAYS_IN_MONTH; i++){
		for (j = 0; j < HOURS_IN_DAY; j++){
			temperature_readings[i][j] = (rand() % MAX_TEMP);
		}
	}
	
	/* displaying the array with temperatures */
	for (i = 0; i < DAYS_IN_MONTH; i++){
		for (j = 0; j < HOURS_IN_DAY; j++){
			printf (" %.0f", temperature_readings[i][j]);
		}
		printf ("\n");
	}
	
	/* Calculating the average hourly temperatures for each day */
	for (i = 0; i < DAYS_IN_MONTH; i++){
		for (j = 0; j < HOURS_IN_DAY; j++){
			avg_daily_temp[i] += temperature_readings[i][j]; 
		}
		avg_daily_temp[i] /= HOURS_IN_DAY;
	}

	printf ("\n");	
	
	/* Displaying the average hourly temperatures for each day */
	for (i = 0; i < DAYS_IN_MONTH; i++){
		printf ("Average hourly temperature for day %d: %.2f\n",
				 i, avg_daily_temp[i]);
	}
	
	/* Calculating the average temperatures for the month */
	for (i = 0; i < DAYS_IN_MONTH; i++){
		avg_monthly_temp += avg_daily_temp[i];
	}
	avg_monthly_temp /= DAYS_IN_MONTH; 
	
	printf ("Monthly average temperature: %.2f\n", avg_monthly_temp);	

	return 0;
}
