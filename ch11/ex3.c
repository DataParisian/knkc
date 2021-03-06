/* KNKC chapter 11 exercise 3
 * Sundeep Kolli 17-mar-2014
 * Program: ex3.c
 * Purpose: Correct the errors in the function that calculates the average 
 * and sum.
*/

#include <stdio.h>
#define N 10

void avg_sum(double a[], int n, double *avg, double *sum);

int main (void){
	
	double avg = 0.0, sum = 0.0;
	double a[N] = {0.0};
	int i;	
		
	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf ("%lf", &a[i]);
	
	avg_sum(a, N, &avg, &sum);
	
	printf("Average: %.2f    Sum: %.2f\n", avg, sum);
	
	return 0;
}


void avg_sum(double a[], int n, double *avg, double *sum){
	int i;
	
	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];

	*avg = *sum / n;
}

