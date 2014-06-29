/* KNKC chapter 11 exercise 5
 * Sundeep Kolli 17-mar-2014
 * Program: ex5.c
 * Purpose: Write a function which when given the number of seconds since 
 * midnight will represent it as equivalent hours(0 - 23), minutes(0 - 59) 
 * and seconds(0 - 59) respectively and store the values in variables passed  
 * as pointer parameters to the function.
*/

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main (void){
	
	int seconds;
	int h, m, s;
	
	printf("Enter seconds since midnight: ");
	scanf("%d", &seconds);

	split_time(seconds, &h, &m, &s);	
			
	printf("Time is %2.2d hr:%2.2d min:%2.2d sec\n", h, m, s);
	
	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec){

	*sec = total_sec % 60;
	*min = (total_sec / 60) % 60;
	*hr = (total_sec / 60) / 60;
}

