/* KNKC chapter 6 programming project 1
 * Sundeep Kolli 19-dec-2013
 * Program: pp1.c
 * Purpose: write a program that finds the largest
 * among the numbers entered one-by-one by the user.
 * When the user enters 0 or a negative number, the 
 * program displays th largest nonnegatice number 
 * entered
*/

#include <stdio.h>

int main(void){

	float userInput, currentLargest;
	
	printf ("Enter a number: ");
	scanf ("%f", &userInput);
	currentLargest = userInput;

	while (userInput > 0){		

		if (userInput > currentLargest)
			currentLargest = userInput;

		printf ("Enter a number: ");
		scanf ("%f", &userInput);
	}

	printf ("The largest number entered was %.2f\n", currentLargest);

	return 0;
}
