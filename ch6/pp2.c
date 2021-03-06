/* KNKC chapter 6 programming project 2
 * Sundeep Kolli 21-dec-2013
 * Program: pp2.c
 * Purpose: program to calculate the greatest common 
 * divisor (GCD) of two user input integers
*/

#include <stdio.h>

int main(void){

	int i1, i2;
	int currentNumerator, currentDenominator, currentRemainder;
	int gcd;	

	printf ("Enter two integers: ");
	scanf ("%d %d", &i1, &i2);
	
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

	printf ("Greatest common divisor: %d\n", gcd);

	return 0;
}
