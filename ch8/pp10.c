/* KNKC chapter 8 programming project 10
 * Sundeep Kolli 04-feb-2014
 * Program: pp9.c
 * Purpose: Modify the Programming Project 8 from chapter 5 so that the 
 * departure and arrival times are stored in an array. The program will use 
 * a loop to search the array of departure times for the one closest to the 
 * time entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>

#define SCHEDULE_SIZE 8

int main (void){

	const int departures[SCHEDULE_SIZE] = {(8 * 60 + 0), (9 * 60 + 43), (11 * 60 + 19), 
							  (12 * 60 + 47), (14 * 60 + 0), (15 * 60 + 45),
							  (19 * 60 + 0), (21 * 60 + 45)};
	const int arrivals[SCHEDULE_SIZE] = {(10 * 60 + 16), (11 * 60 + 52), (13 * 60 + 31), 
							  (15 * 60 + 0), (16 * 60 + 8), (17 * 60 + 55),
							  (21 * 60 + 20), (23 * 60 + 58)};
	int inputHour = 0, inputMinutes = 0;
	int i, j, timeDiff;
	int closestDeparture = 0;	
	int departHour, departMinutes;
	int arriveHour, arriveMinutes;
	char departChar, arriveChar;
	
	printf ("Enter a 24-hour time: ");
	scanf ("%d : %d", &inputHour, &inputMinutes);
	
	i = inputHour * 60+ inputMinutes;
	
	timeDiff = abs(departures[0] - i);
	printf ("i: %d, td: %d\n", i, timeDiff);
	
	for (j = 1; j < SCHEDULE_SIZE; j++){
		if (abs(departures[j] - i) < timeDiff){
			closestDeparture = departures[j];
		}
	}
	printf ("closest dep: %d\n", closestDeparture);
	
	for (j = 0; j < SCHEDULE_SIZE; j++){
		if (departures[j] == closestDeparture)
			break; 
	}
	
	if ((departures[j] / 60) > 12){
		departHour = (departures[j] / 60) % 12;
		departChar = 'p';
	}else{
		departHour = departures[j] / 60;
		departChar = 'a';
	}
	departMinutes = departures[j] % 60;

	if ((arrivals[j] / 60) > 12){
		arriveHour = (arrivals[j] / 60) % 12;
		arriveChar = 'p';
	}else{
		arriveHour = arrivals[j] / 60;
		arriveChar = 'a';
	}
	arriveMinutes = arrivals[j] % 60;


	printf ("Closest departure time %d:%d %c.m.,",
			departHour, departMinutes, departChar);	
	printf ("arriving at %d:%d %c.m.\n",
		arriveHour, arriveMinutes, arriveChar);	
	
	
	return 0;
}
