/* KNKC chapter 16 exercise 2
 * Sundeep Kolli 07-july-2014
 * Program: ex2.c
 * Purpose: Complete the following structure declaration exercises.
*/

#include <stdio.h>

int main(void){
	
	struct {
			double real;
			double imaginary;
     } c1 = {0.1, 1.0}, 
	   c2 = c1, 
	   c3;
	
	printf("c1 real member: %2.2f\n", c1.real);
	printf("c2 real member: %2.2f\n", c2.real);
	
	return 0;
}

 		

