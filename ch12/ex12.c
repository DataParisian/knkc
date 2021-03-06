/* KNKC chapter 12 exercise 12
 * Sundeep Kolli 02-apr-2014
 * Program: ex12.c
 * Purpose: Write the following function:
 *		void find_two_largest(const int *a, int n, int *largest, 
 							  int *second_largest);
 * a points to an array of length n. The function searches for the largest and 
 * the second largest elements, storing them in the variables pointed to by 
 * largest and second_largest respectively. Use pointer arithmetic - not 
 * subscripting - to visit array elements
*/

#include <stdio.h>

#define N 8

void find_two_largest(const int *a, int n, int *largest, 
 							  int *second_largest);

int main(void){
	int a[N] = {1, 2, 3, 4, 5, 6, 5, 8};
	int largest = 0, second_largest = 0;
	
	find_two_largest(a, N, &largest, &second_largest);
	
	printf("Largest: %d, Second Largest: %d\n", largest, second_largest);
	
	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){

	int *p, *q;
	
	for (p = a; p < a + n; p++){
		if (*p > *largest){
			*largest = *p;
		}
	}
	
	for (q = a; q < a + n; q++){
		if ((*q > *second_largest) && (*q < *largest)){
			*second_largest = *q;
		}
	}

}
