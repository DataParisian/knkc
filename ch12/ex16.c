/* KNKC chapter 12 exercise 16
 * Sundeep Kolli 03-apr-2014
 * Program: ex16.c
 * Purpose: Write a loop that prints the highest temperature in the 
 * temperatures array in ex14.c for each day of the week. The loop body should 
 * call the find_largest function passing it one row at a time.
*/

#include <stdio.h>
#include <stdbool.h>

#define ROWS 7
#define COLS 24

int find_largest(int a[], int n);

int main(void){
	
	int i;
	int temperatures[7][24] = {{18, 25, 27, 30, 21, 15},
							   {12, 15, 17, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {12, 15, 31, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {21, 25, 3, 23, 19, 17}};
	
	
	for (i = 0; i < ROWS; i++){	
		printf("Highest temperature on day %d: %d\n",
				(i + 1), find_largest(temperatures[i], COLS));
	}
	
	return 0;
}


int find_largest(int a[], int n){

	int max, *p;

	p = a;
	max = *p;

	for (; p < a + n; p++)
		if (*p > max)
			max = *p;

	return max;
}

