/* KNKC chapter 8 programming project 4
 * Sundeep Kolli 01-feb-2014
 * Program: pp4.c
 * Purpose: modify the reverse.c program of section 8.1 to use 
 * the expression (int)(sizeof(a)/sizeof(a[0]) (or a macro with 
 * this value for the array length
*/

#include <stdio.h>

#define N (int) (sizeof(a) / sizeof(a[0]))

int main(void){
		
	int a[10], i;
	
	printf ("Enter %d number(s): ", N);
	for (i = 0; i < N; i++)
		scanf ("%d", &a[i]);
	
	printf ("In reverse order:");
	for (i = N - 1; i >= 0; i--)
		printf (" %d", a[i]);
	printf ("\n");	
	
	return 0;
}
