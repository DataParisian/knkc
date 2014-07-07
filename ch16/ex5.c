/* KNKC chapter 16 exercise 5
 * Sundeep Kolli 07-july-2014
 * Program: ex5.c
 * Purpose: Write the following functions assuming that the date structure 
 * contains three members: month, day and year (all of type int).
*/

/*
 * a) int day_of_year(struct date d);
 * Returns the day of the year (an integer between 1 and 366) that corresponds 
 * to the date d. 
*/

	int day_of_year(struct date d){
		int i, dayOfYear = 0;
				
		int monthDays[] = {31, 28, 31, 30, 31, 30,
						   31, 31, 30, 31, 30, 31};
		
		if (d.year % 4 == 0){
			if (d.year % 100 == 0){
				if (d.year % 400 == 0){
					monthDays[1]++;
				}
			}
		}
		
		for (i = 0; i < d.month - 1; i++)
			dayOfYear += monthDays[i];
		
		dayOfYear += d.day;
		
		return dayOfYear;		
    }

/*
 * b) int compare_dates(struct date d1, struct date d2);
 * Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later date than 
 * d2 and 0 if d1 and d2 are the same. 
*/
	
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

