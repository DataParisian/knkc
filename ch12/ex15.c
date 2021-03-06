/* KNKC chapter 12 exercise 15
 * Sundeep Kolli 03-apr-2014
 * Program: ex15.c
 * Purpose: Write a loop that prints all the temperature readings stored in 
 * row i of the temperatures array in in ex14.c. Use a pointer to visit each 
 * element of the row.
*/

#include <stdio.h>
#include <stdbool.h>

#define ROWS 7
#define COLS 24

void printArrayRow(int a[], int cols);

int main(void){
	
	int i;	
	int temperatures[7][24] = {{18, 25, 27, 30, 21, 15},
							   {12, 15, 17, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {12, 15, 31, 23, 12, 7},
						       {12, 15, 17, 23, 12, 7},
						       {21, 25, 3, 23, 19, 17}};
	
	printf("Enter the number of the row to be printed: ");
	scanf("%d", &i);
	
	if ((i < 1) || (i > 7)){
		printf("Error: Row does not exist!\n");		
	}else{	
		printArrayRow(temperatures[i-1], COLS);
	}
	
	return 0;
}


void printArrayRow(int a[], int cols){

	int *p;
	for (p = a; p < a + cols; p++){
		printf(" %d", *p);
	}
	printf("\n");
}

