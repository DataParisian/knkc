/* KNKC chapter 8 programming project 5
 * Sundeep Kolli 01-feb-2014
 * Program: pp5.c
 * Purpose: modify the inerest.c program of section 8.1 so that it 
 * compounds interest monthly instead of annually. The form of output 
 * should remain the same and the balance still shown at annual intervals.
*/

#include<stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.0
#define COMPOUND_FREQ 12

int main(void){

	int i, j, low_rate, num_years, year;
	double temp_value = 0.0, value[5];
	
	printf ("Enter interest rate: ");
	scanf ("%d", &low_rate);
	printf ("Enter number of years: ");
	scanf ("%d", &num_years);
	
	printf ("\nYears");
	for (i = 0; i < NUM_RATES; i++){
		printf ("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf ("\n");
	
	for (year = 1; year <= num_years; year++){
		printf ("%3d   ", year);
		for (i = 0; i < NUM_RATES; i++){			
			temp_value = value[i];
			for (j = 1; j <= 12; j++){
				temp_value += ((double)(low_rate + i)) / 1200.0 * temp_value;
			}
			value[i] = temp_value;
			printf ("%7.2f", value[i]);
		}
		printf ("\n");
	}

	return 0;
}
