/* KNKC chapter 8 programming project 3
 * Sundeep Kolli 01-feb-2014
 * Program: pp3.c
 * Purpose: checks numbers entered by the user and prints out 
 * how many times each digit appears in each number
*/

#include <stdio.h>

#define INPUT_SIZE 10

int main(void){
		
	int digit_count[INPUT_SIZE][10] = {{0}};
	int digit, i, j;
	long n;
	long inputArr[INPUT_SIZE] = {0};
	
	i = 0;
	
	printf ("Enter upto %d number(s) (followed by 0 to end input): ",
			INPUT_SIZE);
			
	while ((scanf("%ld", &n) != 0) && getchar() != '\n'){
	
		if (n > 0){		
			if (i < INPUT_SIZE){
				inputArr[i] = n;
				while (n > 0){
					digit = n % 10;	
					digit_count[i][digit] += 1;
					n /= 10;
				}		
			
				printf ("Number %ld\n", inputArr[i]);
				printf ("Digit:       0 1 2 3 4 5 6 7 8 9\n");
				printf ("Occurences: ");
				for (j = 0; j < 10; j++){
					printf (" %d", digit_count[i][j]);
				}
				printf ("\n");			
			
				i++;
				n = 0;		
			
			}else{
				printf ("You have entered more than %d numbers\n", INPUT_SIZE);
				printf ("Only %d numbers will be analyzed\n", INPUT_SIZE);
				break;
			}
		}	
	}	
		
	
	return 0;
}
