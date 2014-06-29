/* KNKC chapter 13 Programming Project 18.
 * Sundeep Kolli 29-apr-2014
 * Program: pp19.c
 * Purpose: Write a program that accepts a date from the user in the form 
 * mm/dd/yyyy and then displays it in the form month dd, yyyy where month 
 * is the name of the month.
 *
*/

#include <stdio.h>

int main(void){
	
	int m, d, y;
	const char *months[] = {"January", "February", "March", "April",
					  "May", "June", "July", "August", 
					  "September", "October", "November", "December"};	
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("You have entered %s %2.2d, %d\n", months[m-1], d, y);
	
	return 0;
}
