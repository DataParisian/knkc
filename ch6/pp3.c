/* KNKC chapter 6 programming project 3
 * Sundeep Kolli 21-dec-2013
 * Program: pp3.c
 * Purpose: program to reduce a user input fractio 
 * to its lowest terms
*/

#include <stdio.h>

int main(void){

	int i1, i2;
	int currentNumerator, currentDenominator, currentRemainder;
	int gcd;	

	printf ("Enter a fractions: ");
	scanf ("%d / %d", &i1, &i2);
	
	if (i1 == 0){
		currentNumerator = i2;
		currentDenominator = i1;
	}else if (i2 == 0){
		currentNumerator = i1;
		currentDenominator = i2;
	}else if (i1 == i2){
		currentNumerator = i1;
		currentDenominator = i2;
	}else if (i1 < i2){
		currentNumerator = i2;
		currentDenominator = i1;
	}else if (i1 > i2){
		currentNumerator = i1;
		currentDenominator = i2;
	}
	
	while (currentDenominator != 0){	
		currentRemainder = currentNumerator % currentDenominator;
		currentNumerator = currentDenominator;
		currentDenominator = currentRemainder; 		
	}
	
	gcd = currentNumerator;

	if (gcd != 0){
		printf ("In lowest terms %d/%d\n", 
						(i1 / gcd), (i2 / gcd));
	}else{
		printf ("Illegal input: a fraction cannot contain zero\n");
	}

	return 0;
}
