/* KNKC chapter 9 exercise 11
 * Sundeep Kolli 18-feb-2014
 * Program: ex11.c
 * Purpose: Write a function float compute_GPA(char grades[], int n); 
 * The grades array will contain letter grades (A, B, C, D or F) and the 
 * function returns the average of the grades assuming A = 4, B = 3, C = 2, 
 * D = 1, F = 0.
*/

#include <stdio.h>

#define ARR_SZ 3

float compute_GPA(char grades[], int n);

int main (void){
	
	char grades[ARR_SZ] = {'A'};
	int i;

	printf ("Enter %d grades: ", ARR_SZ);
	for (i = 0; i < ARR_SZ; i++){
		scanf ("%c", &grades[i]);
	}
	
	printf ("GPA: %.2f\n", compute_GPA(grades, ARR_SZ));
	
	return 0;
}

float compute_GPA(char grades[], int n){
	
	int i;
	float gpa = 0.0f;
	
	for (i = 0; i < n; i++){

		printf ("%c ", grades[i]);
		
		if (grades[i] == 'a' || grades[i] == 'A'){
			gpa += 4;
		}else if (grades[i] == 'b' || grades[i] == 'B'){
			gpa += 3;
		}else if (grades[i] == 'c' || grades[i] == 'C'){
			gpa += 2;
		}else if (grades[i] == 'd' || grades[i] == 'D'){
			gpa += 1;
		}else if (grades[i] == 'f' || grades[i] == 'F'){
			gpa += 0;
		}
	}
	printf ("\n");
	return (gpa / (double)n);
}

