/* KNKC chapter 6 programming project 12
 * Sundeep Kolli 21-dec-2013
 * Program: pp12.c
 * Purpose: program to approximate the mathematical constant e using 
 * the formula e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! until the current 
 * term becomes smaller than a limit entered by the user
*/

#include <stdio.h>

int main(void){
	
	int i, j;
	float inputLimit = 0.0f;
	float temp1 = 0.0f, temp2 = 1.0f;

	printf ("Enter lower limit for terms in the infinite series: ");
	scanf ("%f", &inputLimit);

	printf ("Temp for inputLimit: %f\n", inputLimit);

	for (i = 1; (1.0 / temp2) > inputLimit; i++){
		printf ("temp2: %f\n", temp2);	
		temp2 = 1;
		for (j = 1; j <= i; j++){
			temp2 *= j;			
		}
		temp1 += 1 / temp2;
	}
	
	printf ("Estimated value of e: %f\n", 1 + temp1);

	return 0;
}
