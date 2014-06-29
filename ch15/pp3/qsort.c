/* KNKC chapter 15 Programming Project 3
 * Sundeep Kolli 29-June-2014
 * Program: pp3.c
 * Purpose: Modify the qsort.c program of Section 9.6 so that the quicksort 
 * and split functions are in a separate file named quicksort.c. Create a 
 * header file name quicksort.h that contains prototypes for the two functions 
 * and have both qsort.c and quicksort.c include this file. 
*/

#include <stdio.h>
#include "quicksort.h"

#define N 10

void quicksort (int a[], int low, int high);
int split (int a[], int low, int high);

int main (void){
	int a[N], i;
	
	printf ("Enter %d numbers to be sorted: ", N);
	for (i = 0; i < N; i++)
		scanf ("%d", &a[i]);
	
	quicksort (a, 0, N - 1);
	
	printf ("In sorted order: ");
	for (i = 0; i < N; i++)
		printf ("%d ", a[i]);
	printf ("\n");
	
	return 0;
}
