/* KNKC chapter 12 exercise 14
 * Sundeep Kolli 02-apr-2014
 * Program: ex14.c
 * Purpose: Assume that the following array contains a week's worth of hourly 
 * temperature readings:
 * 		int temperatures[7][24];
 * Write a statement that uses the search function in ex7.c to search the 
 * entire temperatures array for the value 32.
*/

#include <stdio.h>
#include <stdbool.h>

void printArr(int a[7][24], int row, int col);
bool search(const int a[], int n, int key);

int main(void){
	
	int temperatures[7][24] = {{18, 25, 27, 30, 21, 15},
							   {12, 15, 17, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {12, 15, 31, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {21, 25, 3, 23, 19, 17}};

	bool temperatureExists = false;
	int i;
/*	printArr(temperatures, 7, 24);*/
	
	for (i = 0; i < 7; i++){
		if (temperatureExists = search(temperatures[i], 24, 32))
			break;
	}
	
	if (temperatureExists)
		printf("Temperature exists\n");
	else
		printf("Temperature does not exist\n");
	
		
	return 0;
}

bool search(const int a[], int n, int key){
	int *p;
	
	for (p = a; p < a + n; p++){
		if (*p == key){
			return true;
		}
	}
	return false;
}

void printArr(int a[7][24], int row, int col){

	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}

