/* KNKC chapter 16 Programming Project 6
 * Sundeep Kolli 15-july-2014
 * Program: pp6.c
 * Purpose: Modify pp9.c from ch5 so that each date entered by the user is 
 * stored in a date structure (see ex5.c). Incorporate the compare_dates 
 * function function into your program.
*/

#include <stdio.h>

struct date{int day, month, year;};

int compare_dates(struct date d1, struct date d2);

int main(void)
{
	
	struct date date1, date2;
	
	printf ("Enter first date (mm/dd/yy): ");
	scanf ("%d / %d / %d", &date1.month, &date1.day, &date1.year);
	
	printf ("Enter second date (mm/dd/yy): ");
	scanf ("%d / %d / %d", &date2.month, &date2.day, &date2.year);
	
	if (compare_dates(date1, date2) == -1){
		printf ("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				date1.month, date1.day, date1.year, 
				date2.month, date2.day, date2.year);
	}else if (compare_dates(date1, date2) == 1){
		printf ("%.2d/%.2d/%.2d is later than %.2d/%.2d/%.2d\n",
				date1.month, date1.day, date1.year, 
				date2.month, date2.day, date2.year);
	}else{
		printf ("Both dates are identical\n");		
	}	
	
	return 0;
}

/* ****************************************************************************
 * compare_dates: Returns -1 if d1 is an earlier date than d2, +1 if d1 is    *
 *                a later date than d2 and 0 if d1 and d2 are the same.       * 
 *****************************************************************************/
int compare_dates(struct date d1, struct date d2){
	
	if (d1.year < d2.year){
		return -1;
	}else if (d1.year > d2.year){
		return +1;
	}else{
		if (d1.month < d2.month){
			return -1;
		}else if (d1.month > d2.month){
			return +1;
		}else{
			if (d1.day < d2.day){
				return -1;
			}else if (d1.day > d2.day){
				return +1;
			}else{
				return 0;   		   		
			}   		
		}
   }
}  
