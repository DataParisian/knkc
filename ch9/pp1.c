/* KNKC chapter 9 programming project 1
 * Sundeep Kolli 22-feb-2014
 * Program: pp1.c
 * Purpose: Write a program that asks the user to enter a series of integers 
 * (which it stores in an array), then sorts the intgers by calling the 
 * function selection_sort; The selectin_sort must do the following when given 
 * an array of integers:
 *     - Search the array to find the largest element and move it to the 
         last position in the array.
       - Call itself recursively to sort the first n-1 elements of the array.
*/

#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void){
	
	int i, a[N] = {0};
	
	printf ("Enter %d numbers to be sorted: ", N);
	for (i = 0; i < N; i++){
		scanf ("%d", &a[i]);
	}

	selection_sort(a, N);
	
	printf ("In sorted order: ");
	for (i = 0; i < N; i++){
		printf ("%d ", a[i]);
	}
	printf ("\n");
	
	return 0;
}

void selection_sort(int a[], int n){
	if  (n != 0){
	
		int i, largest, largestPos = 0;		
		
		largest = a[0];	
	
		for (i = 1; i < n; i++){
			if (a[i] > largest){
				largest = a[i];
				largestPos = i;
			}
		}
		
		for (i = largestPos; i < (n - 1); i++){
			a[i] = a[i + 1];
		}

		a[n - 1] = largest;		
		
		selection_sort(a, (n - 1));
	}
}

