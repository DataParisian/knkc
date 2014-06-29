/* KNKC chapter 13 programming project 7
 * Sundeep Kolli 26-apr-2014
 * Program: pp7.c
 * Purpose: Modify pp11.c from chapter 5 so that it uses arrays containing 
 * pointers to strings instead of switch statements.
*/

#include <stdio.h>

int main (void)
{
	int i;
	
	char *one_to_nine[] = {"one", "two", "three", "four", "five",
						  "six", "seven", "eight", "nine"};
	char *ten_to_twenty[] = {"ten", "eleven", "twelve", "thirteen", 
								"fourteen", "fifteen", "sixteen", "seventeen", 
								"eighteen", "nineteen"};
	char *tens[] = {"twenty", "thirty", "forty", "fifty", "sixty",
					"seventy", "eighty", "ninety"};
			
	
	printf ("Enter a two-digit number: ");
	scanf ("%d", &i);	
	
	printf ("You have entered ");	
		
	if (i < 10 || i > 99){
		printf ("an illegal input");
	}else if (i >= 10 && i < 20){
		printf ("the number %s", ten_to_twenty[i % 10]);			
	}else{
		printf ("the number %s", tens[i/10 - 2]);
		if (i%10)
			printf("-%s", one_to_nine[i%10 - 1]);
	}
	
	printf (".\n");

	return 0;
}
