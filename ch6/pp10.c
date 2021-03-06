/* KNKC chapter 6 programming project 10
 * Sundeep Kolli 21-dec-2013
 * Program: pp10.c
 * Purpose: program to determine which of the user entered dates 
 * comes earlier. Program terminates when 0/0/0 is input
*/

#include <stdio.h>

int main(void){

	int inputDay, inputMonth, inputYear;
	int earliestDay, earliestMonth, earliestYear;
		
	printf ("Enter a date (mm/dd/yy): ");
	scanf ("%d / %d / %d", &inputMonth, &inputDay, &inputYear);
	
	if (inputDay == 0 && inputMonth == 0 && inputYear == 0){
		return 0;
	}else{
		earliestDay = inputDay;
		earliestMonth = inputMonth;
		earliestYear = inputYear;
	}

	while (!(inputDay == 0 && inputMonth == 0 && inputYear == 0)){
					
			printf ("Enter a date (mm/dd/yy): ");
			scanf ("%d / %d / %d", &inputMonth, &inputDay, &inputYear);
			
			if (inputDay == 0 && inputMonth == 0 && inputYear == 0){
				break;
			}					

			if (inputYear < earliestYear){

				earliestDay = inputDay;
				earliestMonth = inputMonth;
				earliestYear = inputYear;

			}else if (inputYear == earliestYear){				
				
				if (inputMonth < earliestMonth){
					earliestDay = inputDay;
					earliestMonth = inputMonth;
					earliestYear = inputYear;

				}else if(inputMonth == earliestMonth){
					
					if (inputDay < earliestDay){
						earliestDay = inputDay;
						earliestMonth = inputMonth;
						earliestYear = inputYear;
					}
				}				
			}						
	}
	
	
	printf ("%2.2d/%2.2d/%2.2d is the earliest date\n", 
			earliestMonth, earliestDay, earliestYear);

	return 0;
}
