/* KNKC chapter 7 programming project 14
 * Sundeep Kolli 26-01-2014
 * Program: pp14.c
 * Purpose: program to calculate the square root of a positive floating-point 
 * number using Newton's method.
*/

#include <stdio.h>
#include <math.h>

#define ACCURACY_ORDER 0.00001
#define INIT_GUESS 1.0F

int main(void){

	double inputNumber = 0.0f;
	double currGuess, newGuess;
		
	printf ("Enter a positive number: ");
	scanf ("%lf", &inputNumber);
	
	currGuess = INIT_GUESS;
	newGuess = ((inputNumber / currGuess) + currGuess) / 2;
	
	while (fabs(newGuess - currGuess) > (ACCURACY_ORDER * currGuess)){
		currGuess = newGuess;
		newGuess = ((inputNumber / currGuess) + currGuess) / 2;		
	}	
	
	printf ("Square root: %0.5f\n", currGuess);		

	return 0;
}


/*	typedef int bool;	*/
	
/*	char c;*/
/*	bool inWord = 0;*/
/*	int i;*/
/*	long charCount = 0, wordCount = 0;*/
/*	float avgWordLength = 0.0f;*/

