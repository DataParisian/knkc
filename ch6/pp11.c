/* KNKC chapter 6 programming project 11
 * Sundeep Kolli 21-dec-2013
 * Program: pp11.c
 * Purpose: program to approximate the mathematical constant e
 * e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! where n is an integer
 * entered by the user
*/

#include <stdio.h>

int main(void){
	
	int i, j, n;
	float temp1 = 0.0f, temp2 = 0.0f;

	printf ("Enter value of n: ");
	scanf ("%d", &n);

	for (i = 1; i <= n; i++){		
		temp2 = 1;
		for (j = 1; j <= i; j++){
			temp2 *= j;			
		}
		temp1 += 1 / temp2;
	}
	
	printf ("Estimated value of e: %f\n", 1 + temp1);

	return 0;
}
