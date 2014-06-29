/* KNKC chapter 9 exercise 10
 * Sundeep Kolli 18-feb-2014
 * Program: ex10.c
 * Purpose: Write functions that return the largest element in a, average of 
 * all elements in a and the number of positive elements in a. (Assume that 
 * a and n are parameters, where a is an array of int values and n is the 
 * length of the array).
*/

# include <stdio.h>

# define ARR_SZ 10

int largest (int a[], int n);
double average (int a[], int n);
int posCount (int a[], int n);

int main (void){
	
	int a[ARR_SZ] = {0}, n;

	printf ("Enter %d integers: ", ARR_SZ);
	for (n = 0; n < ARR_SZ; n++){
		scanf ("%d", &a[n]);
	}
	
	printf ("Largest: %d\n", largest(a, n));
	printf ("Average: %.2f\n", average(a, n));
	printf ("Number of positive integers: %d\n", posCount(a, n));
	
	return 0;
}

int largest (int a[], int n){
	
	int i, l;
	l = a[0];
	
	for (i = 1; i < n; i++){
		if (a[i] > l){
			l = a[i];
		}
	}
	return l;
}

double average (int a[], int n){

	int i;
	double avg = 0.0;
	
	for (i = 0; i < n; i++){
		avg += a[i];
	}	
	
	return avg / n;
}

int posCount (int a[], int n){
	int i, count = 0;

	for (i = 0; i < n; i++){
		if (a[i] > 0){
			count++;
		}
	}
	return count;
}


